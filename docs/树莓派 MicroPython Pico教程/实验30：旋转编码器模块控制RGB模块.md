# 实验30：旋转编码器模块控制RGB模块

![](C:/Users/liu/Desktop/KE3032 中文资料 V00/docs/media/c6b4f1cedef06ed68d1c2e5ccf5c17d2.jpeg)

**实验介绍：**

在前面课程的实验十八中，我们利用旋转编码器计数。在这里我们将它扩展一下，通过得出的计数，我们用来控制RGB模块上LED显示不同颜色。

设计代码时，我们需要对所得数据除以3，得到余数，余数为0控制插件RGB模块上LED亮红光，余数为1，RGB模块上LED亮绿光，余数为2，RGB模块上LED亮蓝光。

**实验元件：**

| ![](media/c4bec8956b5785f9b6c98b310e182d18.png)  | ![](media/b9233c67c93c243214388d668afe2eab.png)  | ![](media/24881ef3c16c13dedc3a2054de3aec92.png) | ![](media/62837a4cb828de2139158fccd276e229.png) |
| ------------------------------------------------ | ------------------------------------------------ | ----------------------------------------------- | ----------------------------------------------- |
| Raspberry Pi Pico板*1                            | Raspberry Pi Pico扩展板*1                        | keyes DIY电子积木 共阴RGB模块*1                 | keyes DIY电子积木 旋转编码器模块*1              |
| ![](media/68c063c06bfbd73d3ab4b6b2bfcc5c3a.jpeg) | ![](media/178ac5a6046142ac33d08d63ead5c7ad.jpeg) | ![](media/edbfec59fe015bd9987e4b4d542b466d.png) |                                                 |
| 防反插5Pin*1                                     | 防反插4Pin*1                                     | MicroUSB线*1                                    |                                                 |

**实验接线图：**

![](C:/Users/liu/Desktop/KE3032 中文资料 V00/docs/media/2532f18da75ad129bdf9a5a385f40a3c.jpeg)

**运行示例代码：**

找到Encoder control RGB.py，然后双击打开代码，再点击![](C:/Users/liu/Desktop/KE3032 中文资料 V00/docs/media/d1dbbae869194ef12c2d684636f1ce4b.png)运行代码

![](C:/Users/liu/Desktop/KE3032 中文资料 V00/docs/media/92300f50efa6c271ec2aaad7eb0554fa.png)

**代码说明：**

在实验中我们将val除以3的余数，得到余数后根据接线设置管脚为GP9（红灯）、GP10（绿灯）和GP11（蓝灯）。参考前面实验学习的控制方法，利用余数控制模块上LED显示对应灯光颜色，任何数对3进行取余得到的值都是0或1或2，我们就利用这三个值来判断，并显示对应的颜色。

**实验结果：**

按照接线图接好线，运行测试代码，观察Shell。旋转编码器，打印对应余数。即可控制外接的RGB模块上的LED的颜色（红绿蓝）。

![](C:/Users/liu/Desktop/KE3032 中文资料 V00/docs/media/21237ebebed133b209b554aa17739eda.jpeg)

![](C:/Users/liu/Desktop/KE3032 中文资料 V00/docs/media/8d95da23f9703c1f7a2571661f35aa75.png)