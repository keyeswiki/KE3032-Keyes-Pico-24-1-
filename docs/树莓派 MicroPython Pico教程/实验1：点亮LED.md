# 实验1：点亮LED

![](C:/Users/liu/Desktop/KE3032 中文资料 V00/docs/media/ce8d61c97eb89c94c05cc1f6299316b5.jpeg)

**实验介绍：**

在我们前面的准备工作中，知道我们Pico板上有个板载LED，而且我们已经知道这个LED是连接在Pico的GP25的，我们还让这个LED点亮和闪烁了。下面我们就用同样的方法点亮一个外接的LED模块。

在这个套件中，我们有一个Keyes DIY电子积木
白色LED模块。它的控制方法非常简单，要想点亮LED，只要让它两端有一定的电压就可以。

实验中，我们通过编程控制信号端S的高低电平，从而控制LED的亮灭。我们提供两个测试代码，分别控制LED模块上实现点亮和闪烁的效果。

**实验原理：**

下面附了两个电路原理图，左边我们直接把LED串联一个电阻，负极接地，正极接到单片机的IO口，理论上来说当我们把信号端S输出高电平(3.3V)，LED两端就会有电压，LED就会被点亮，那么我们为什么说这么接不合理呢？原因就是我们Pico IO口输出电流的能力有限(最大12mA)，虽然输出了高电平，但是可能达不到控制LED的电流，此时LED可能比较暗。

右边的接法：控制时，GND和VCC上电后，如果信号端S为高电平，那么三极管Q1就会导通，则LED有电流流过，LED即会亮起(注意：此时电流是由VCC电源端流经LED和电阻R3到GND，而不是直接从单片机IO口输出，此时输出电流的能力就比较强)，S端为低电平时三极管Q1截止，那么就没有电流流过LED，那么LED就会熄灭。也就是说，我们这里的三极管Q1相当于一个开关作用，而电阻R1,R3都是一个限流电阻，顾名思义就是限制电流的大小，以免烧坏电子元器件。

![](C:/Users/liu/Desktop/KE3032 中文资料 V00/docs/media/f47ced742c53faef02babd99810ffd97.png)![](C:/Users/liu/Desktop/KE3032 中文资料 V00/docs/media/1ed4bba1f688404df8bda6a6e8dabc51.png)

**实验元件：**

| ![](media/c4bec8956b5785f9b6c98b310e182d18.png) | ![](media/b9233c67c93c243214388d668afe2eab.png) | ![](media/5cd9ec24bd8b5e4239dbce3e313184c1.png) | ![](media/47dfea4b451d23ee80c7faaf96e1ab6f.jpeg) | ![](media/edbfec59fe015bd9987e4b4d542b466d.png) |
| ----------------------------------------------- | ----------------------------------------------- | ----------------------------------------------- | ------------------------------------------------ | ----------------------------------------------- |
| Raspberry Pi Pico板*1                           | Raspberry Pi Pico扩展板*1                       | Keyes DIY电子积木 白色LED模块*1                 | 防反插3Pin*1                                     | MicroUSB线*1                                    |

(注意：这里microUSB线是通过树莓派连接到pico，实验元件我们没有列出树莓了，还有杜邦线3p指的是从我们40P的杜邦线撕下一个3P下来，下面的实验也是如此。)

**实验接线图：**

![](C:/Users/liu/Desktop/KE3032 中文资料 V00/docs/media/52f97b2afdcd63ed86618d2e745ae0af.png)

**运行示例代码：**

打开Thonny，连上pico之后，我们点击View然后勾选File，然后我们就可以在左侧看见保存在树莓派上的代码还有pico上的代码：

![](C:/Users/liu/Desktop/KE3032 中文资料 V00/docs/media/1fcf94991854f44fe0d6037b1e60e751.png)

找到LED.py和Bink.py，因为我们前面已经把代码保存在树莓派了，然后双击打开代码，再点击![](C:/Users/liu/Desktop/KE3032 中文资料 V00/docs/media/d1dbbae869194ef12c2d684636f1ce4b.png)运行代码，如果点击运行无效，我们可以尝试点击![](C:/Users/liu/Desktop/KE3032 中文资料 V00/docs/media/03c901befd9389c4369699ad93c1aeef.png)停止运行，然后再次点击运行，也可以按下我们pico扩展板上的复位按钮，然后再点击![](C:/Users/liu/Desktop/KE3032 中文资料 V00/docs/media/03c901befd9389c4369699ad93c1aeef.png)，然后再运行：

![](C:/Users/liu/Desktop/KE3032 中文资料 V00/docs/media/d80c70bf33b392b4ff6fbf3c59ba0773.png)

**代码说明：**

1.  machine模块是一定要的，我们使用microPython对pico进行编程时，必须import     machine或者from machine     import...，这个模块里面对pico的一些配置等等已经设置好了，我们只需导入它，然后调用。

2.  time模块主要是用于时间延迟设置time.sleep()，括号里的值为延时的秒数，如果我们使用小数，如time.sleep(0.01)，即延时10ms。我们后面也会看到from     time import     sleep，Python的from语句让你从模块中导入一个指定的部分到当前命名空间中，我们这里即导入延时部分，这个声明不会把整个time模块导入到当前的命名空间中，它只会将time里的sleep函数引入进来，我们延时1秒时，使用sleep(1)即可。

3.  led = Pin(0,     Pin.OUT)，构建一个引脚类实例，我们将其命名为led，0表示我们连接的引脚为GP0，Pin.OUT表示引脚0为输出模式，即可以使用.value()方法输出高电平(3.3V)led.value(1)或者低电平(0V)led.value(0)。我们后面也会看到前面模块导入是直接使用import     machine，那么我们在创建管脚类实例时，就要改为led =
    machine.Pin(0, machine.Pin.OUT)也就是在前面多了个machine.。

4.  最后while     True为循环函数，在此函数下面的语句循环运行，除非True变False，我们上面的while函数中，首先led.value(1),给管脚0输出高电平，LED点亮，然后使用延时函数time.sleep(1)等待1秒，然后led.value(0),给管脚0输出低电平，LED熄灭，再次使用延时函数time.sleep(1)等待1秒，这样反复运行，LED就形成了1秒反复闪烁了。

**实验结果：**

代码一：运行测试代码一成功后，模块上白色LED点亮

代码二：运行测试代码二成功后，白色LED亮1秒灭一秒，循环交替闪烁。

![](C:/Users/liu/Desktop/KE3032 中文资料 V00/docs/media/24b7d52abffbdf8ee383bf0dc659cc30.jpeg)

注意：键盘按下![](C:/Users/liu/Desktop/KE3032 中文资料 V00/docs/media/03c901befd9389c4369699ad93c1aeef.png)停止运行

**示例代码：**

| ''' * Keyes Starter Kit for Raspberry Pi Pico * lesson 1.1 * turn on led ''' from machine import Pin led = Pin(0, Pin.OUT)#构建led对象,外接LED灯连接与引脚0相连，并设置引脚0为输出模式 led.value(1)# 高电平点亮 |
| ------------------------------------------------------------ |
| ''' * Keyes Starter Kit for Raspberry Pi Pico * lesson 1.2 * Blink ''' from machine import Pin import time led = Pin(0, Pin.OUT)#构建led对象,外接LED灯连接与引脚0相连，并设置引脚0为输出模式 while True: led.value(1)# led点亮 time.sleep(1)# 等待1秒 led.value(0)# led熄灭 time.sleep(1)# 等待1秒 |