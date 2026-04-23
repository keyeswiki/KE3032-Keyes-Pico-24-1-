/*
   Keyes Starter Kit for Raspberry Pi Pico
   lesson 36
   Comprehensive experiment
*/
#include"rgb.h"//6812的库
#include"ir.h"//红外接收的库

//rgb6812接GP15
RGB rgb(15,4);  //rgb(pin, num);  num = 0-100

//红外接收接GP11
IR IRreceive(11);

//摇杆模块接口
int X = 26;
int Y = 27;
int KEY = 22;

//电位器管脚接模拟口28
int resPin = 28;

//LED接GP14
int LED = 14;

//超声波传感器接口
int Trig = 6;
int Echo = 7;

//按键模块接口
int button = 16;

int PushCounter = 0;//存放按键按下的次数
int State = 1;//按键的状态
int LastState = 1;//上一个状态，要么按下，要么松开，两种状态
int PushCounter1 = 0;//对PushCounter取余后的值

void setup() {
  Serial.begin(9600);//设置波特率为9600
  rgb.setBrightness(80);   //rgb.setBrightness(0-255);
  rgb.clear();   //Turn off all leds  
  delay(10);
  pinMode(KEY, INPUT);//遥感模块的按钮

  pinMode(button, INPUT);//按键模块

  pinMode(Trig, OUTPUT);//超声波模块
  pinMode(Echo, INPUT);
  delay(1000);
}

void loop() {
  State = digitalRead(button);//读取按键模块的状态
  if (LastState != State) { //按键的状态改变了
    if (State == 0) { //按下了按键
      PushCounter = PushCounter + 1;  //累计按下次数加1
    }
  }
  LastState = State;//刷新上一次状态
  PushCounter1 = PushCounter % 5; //对按下状态对5取余，也就是按5次就重新开始
  if (PushCounter1 == 0) {  //余数为0
    yushu_0();  //6812显示
  } else if (PushCounter1 == 1) {  //余数为1
    yushu_1();  //显示红外遥控信号
  } else if (PushCounter1 == 2) {  //余数为2
    yushu_2();  //显示摇杆值
  } else if (PushCounter1 == 3) {  //余数为3
    yushu_3();  //显示电位器控制LED
  } else if (PushCounter1 == 4) {  //余数为4
    yushu_4();  //显示超声波测的距离
  }
}

//6812
void yushu_0() {
  int R = random(0, 255);
  int G = random(0, 255);
  int B = random(0, 255);
  for(int i=0; i<4; i++){
    rgb.setPixelColor(i, R, G, B);
    rgb.show();
  }
  delay(300);
}

//红外接收
void yushu_1() {
  bool flag = 1;
  while(flag){
    int key = IRreceive.getKey();
    if(key != -1){
      Serial.println(key); 
      if(key == 74){
        PushCounter = 2;
        Serial.print(PushCounter);
        flag = 0;
      }
    } 
  }
}


void yushu_2() {
  int x = analogRead(X);
  int y = analogRead(Y);
  int key = digitalRead(KEY);
  Serial.print("X:");
  Serial.print(x);
  Serial.print("    Y:");
  Serial.print(y);
  Serial.print("    KEY:");
  Serial.println(key);
  delay(100);
}

void yushu_3() {
  int RES = analogRead(resPin);
  int res = map(RES, 0, 4095, 0, 255);
  Serial.println(res);
  analogWrite(LED, res);
  delay(100);
}

void yushu_4() {
  float distance = checkdistance();
  Serial.print("distance:");
  Serial.print(distance);
  Serial.println("cm");
  delay(100);
}

float checkdistance() {
  digitalWrite(Trig, LOW);
  delayMicroseconds(2);
  digitalWrite(Trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trig, LOW);
  float distance = pulseIn(Echo, HIGH) / 58.00;
  delay(10);
  return distance;
}
