# Raspberry Pi

## 前期准备

### 树莓派系统需要的工具：

1.所需的硬件：

（1）树莓派4B/3B/2B （2）16G以上的TFT内存卡 （3）读卡器
（4）常用的电脑及配件

2.需要在常用电脑上安装的软件工具：

Windows用户：

（1）先安装putty

下载链接：[<u>https://www.chiark.greenend.org.uk/~sgtatham/putty/</u>](https://www.chiark.greenend.org.uk/~sgtatham/putty/)

![](media/c26be4cd1f5543f20f275556ce5892c0.png)

![](media/d888918aa7bf9e5ea94597aad1ee4224.png)

1.  下载好了putty驱动文件![](media/e597704d7033c7c3c5da06d4f561822c.png)后，鼠标左键双击putty驱动文件，再点击“Next”。

![](media/01f1b2d98915be2be9c0c2a3d330dde2.png)

2.  点击“Next”。

![](media/bd698753a8eea7a2ff5c5e0e598cbd94.png)

3.  选中“Install Putty files”后，再点击“Install”。

![](media/071a0acc98bb2dc5cd45d85dec72d111.png)

4.  几秒钟之后，安装就完成了，点击“Finish”就可以了。

![](media/ec368c3a549c09edd70f9786456d5430.png)

（2）SSH远程登录软件 WinSCP

下载链接：[<u>https://winscp.net/eng/download.php</u>](https://winscp.net/eng/download.php)

a.下载好WinSCP软件文件![](media/1719daa1002d7477ad4700e1df85d2df.png)后，鼠标左键双击WinSCP软件文件![](media/1719daa1002d7477ad4700e1df85d2df.png)，再左键点击![](media/e09e48a32781d08aabb06156efe1de49.png)。

![](media/5ee80ade909fe3eb73dc9535704b4c0b.png)

b\. 点击“Accept”，然后选中对应的选项且点击“Next”，再点击“Install”。

![](media/9c652f54f6a7d53f6b2aedba40104a00.png)

![](media/f32891714d5966037d59d1812aa15686.png)

![](media/57d6139ba0aac9ca996bcbe6f6fd218f.png)

![](media/49ffed878ee84546b156af3a0bf5556e.png)

c\. 几秒钟之后，安装就完成了，点击“Finish”就可以了。

![](media/14ffa1e11243835d30ffb933219dcef5.png)

（3）格式化TFT卡工具 SD Card Formatter

下载链接：

[<u>http://www.canadiancontent.net/tech/download/SD_Card_Formatter.html</u>](http://www.canadiancontent.net/tech/download/SD_Card_Formatter.html)

![](media/fa229f4e063572ce1c59574c308bf452.png)

![](media/ac5d5eb9463805484b9239b99faf04eb.png)

1.  将下载好的SDCardFormatterv5_WinEN压缩包解压，鼠标左键双击SD Card     Formatter文件![](media/8c6f8da97bf702080a8e302db2e9f982.png)，运行此文件。

![](media/046c67e4072093ee3dad27e8088fcf9f.png)

2.  点击“Next”，再选择“![](media/13dc08ae2b5cb52ae3d7ea198134d778.png)”并点击“Next”。

![](media/384203e0b54ddfe37f18b65f70e786e5.png)

![](media/cf4e91eac0c0573cff282256a915a01a.png)

3.  又点击“Next”，然后再点击“Install”。

![](media/0af58ee3afb14005a884ca2dc941157f.png)

![](media/807623ddeea20c8b61503845d8aec9bc.png)

d\. 几秒钟之后，安装就完成了，点击“Finish”就可以了。

![](media/df2deb7e04c25ee207e994f0d2808194.png)

（4）烧录镜像系统软件工具 Win32DiskImager

下载链接：[<u>https://sourceforge.net/projects/win32diskimager/</u>](https://sourceforge.net/projects/win32diskimager/)

![](media/4ffb55fd466198ca9524afbde7806271.png)

1.  下载好Win32DiskImager软件文件![](media/63c3eaf215c92c325f95613c9d8d49ce.png)之后，鼠标左键双击Win32DiskImager软件文件![](media/63c3eaf215c92c325f95613c9d8d49ce.png)，然后点击“Run”。

![](media/0f86f055a814207b0b09e1a7e6cb20bc.png)

2.  选择![](media/5cdab33a0a7ddd4ab5b2ca8cb04670be.png)之后，再点击“Next”。

![](media/d70ecd0554cbdbd60997a2356b55dc0d.png)

3.  点击“Browse...”，选择Win32DiskImager文件安装的位置，再点击“Next”。

![](media/1cdc2638bc1e9fe214344429f5e97a13.png)

4.  点击“Browse...”选择Win32DiskImager文件安装的位置，再点击“Next”。

![](media/cc7949bb335b75000e77b18c85e4e07b.png)

5.  选中![](media/99d088dd3f9e62d94fe8d56bd4638d1d.png)后再点击“Next”，然后又点击“Install”。

![](media/c03510a9961a0e7307945dff10de3550.png)

![](media/0c9c0d647479ee984fc29c3cedc72c79.png)

d\. 几秒钟之后，安装就完成了，点击“Finish”就可以了。

![](media/1d75c6dd9ea4a2c437a2b655b713a1db.png)

（5）扫描查找ip地址软件工具WNetWatcher

下载链接：http://www.nirsoft.net/utils/wnetwatcher.zip

树莓派的镜像系统

最新版本系统下载链接：[<u>https://www.raspberrypi.org/downloads/raspberry-pi-os/</u>](https://www.raspberrypi.org/downloads/raspberry-pi-os/)

旧版本系统下载链接：

- Raspbian：https://downloads.raspberrypi.org/raspbian/images/

- Raspbian full：https://downloads.raspberrypi.org/raspbian_full/images/

- Raspbian lite：https://downloads.raspberrypi.org/raspbian_lite/images/

本教程使用2020.08.20版本系统：（由于树莓派官方版本升级，可能导致部分系统功能与此教程使用有些冲突，所以我们这里推荐使用本教程版本）

(下载有桌面并自带些常用软件的版本)

![](media/3e0526d601054847d1b1feee8384dbbe.png)

### 给树莓派安装Raspberry Pi OS系统

1.TFT内存卡插到读卡器上，读卡器插到电脑的USB端口

2.使用SD Card Formatter软件工具将TFT内存卡格式化，如下图所示：

![](media/79d747e6f00f857a593b3327397cc44f.png)

![](media/cbc55902de71ce984d873ca2cb67fffa.png)

![](media/82031b5354cc4edeccf2bfa7465b7c6c.png)

3.烧录系统

（1）使用Win32DiskImager 软件，将树莓派官方的系统（Raspberry Pi OS）镜像烧录到TFT内存卡上。

![](media/80d236cae8bdf63d80dc65048ffb52b3.png)

![](media/243d1ef34211eafe1a92b67fc0ee85a2.png)

![](media/ea854c476e9a8d4f82dd4a7c714cd5af.png)

（2）镜像系统烧录完成后，先不要把读卡器拔出，使用记事本新建一个文件命名为SSH，把.txt删掉，然后复制到TFT卡的boot目录下，这样就可以打开SSH登录功能了，如下图所示：

![](media/ffb73310322accd671da373bb2e71945.png)

（3）拔出读卡器。

4.登录系统（以下操作要求raspberry与PC电脑在同一局域网内）

（1）将烧录好的TFT内存卡插到树莓派，接好网线，接好电源并打开电源。

如果有屏幕和树莓派的HDMI线，连接好屏幕，就可以看到Raspberry Pi OS系统的开机画面了。

如果没有树莓派的HDMI线，也没事，可以使用软件WinSCP来进行SSH远程登录，也可以使用xrdp登录树莓派系统的桌面。

（2）远程登录

使用WinSCP，通过树莓派系统的默认名称、默认用户名、默认密码，来登录。注意这就要求同一个网络里只能接入一个树莓派。

![](media/0a41d5c629ec98afbc31dc47ff5c18ec.png)

![](media/ff64e71b9e30df60d0b099dbc2532587.png)

（3）查看ip地址和mac地址

![](media/a4285a452978026c9e60c31d35974315.png)

点击打开终端之后，还需要再次输入密码：raspberry ，再按下键盘 Enter 。

![](media/a433a9ee584c821a702d0250937e2ba8.png)

![](media/7fb10d842cc7fd824a325d30fc3ecdc7.png)

登录成功后，打开终端，输入ip a 后再按下键盘
Enter就可以查看ip和mac地址

![](media/132e9ab754a0f63e38b3e4cfbc3679f2.png)

从上图圈出来的可以看出，我这块树莓派的mac地址为：a6:32:17:61:9c，ip地址为：192.168.1.128，后面使用xrdp远程登录树莓派系统桌面时使用到ip地址。

mac地址是不会变的，当不确定哪个ip时，可以通过mac地址来确认。

（4）固定树莓派的ip地址

由于ip地址是会变动的，第二天很可能ip地址就不一样了，就需要再次查看ip地址，所以为了更方便使用，需要固定树莓派的ip地址。

操作步骤如下：

切换到root用户

如果还没设置root的用户密码

①设置root密码

终端里输入：sudo passwd root

接着设置密码就可以了

②然后切换到root用户

su root

③固定ip地址的配置文件

先改好下面配置文件的ip

（#更改的ip地址：address 192.168.1.99）

然后将修改好ip的配置文件复制粘贴到终端，回车，就配置好了。

配置文件：

echo -e '

auto eth0

iface eth0 inet static

\#Change IP address

address 192.168.1.99

netmask 255.255.255.0

gateway 192.168.1.1

network 192.168.1.0

broadcast 192.168.1.255

dns-domain 119.29.29.29

dns-nameservers 119.29.29.29

metric 0

mtu 1492

'\>/etc/network/interfaces.d/eth0

操作示例图，如下：

![](media/a68a4f59d4d364efa28b6680a2c48d43.png)

④重启系统，使配置文件生效

终端输入重启命令：sudo reboot

这之后就可以使用树莓派的固定ip来登录了。

⑤再次查看ip，确保已经固定好ip地址

![](media/b4313e2d78a4289705c658a1ebbc962b.png)

（5）无线登录树莓派系统的桌面

如果我们没有连接显示屏的HDMI高清线，能不能在windows桌面上无线登录树莓派系统的桌面呢？是可以的，方法还挺多，目前比较常用的是使用VNC和Xrdp。

现在就教使用Xrdp在windows桌面上无线登录树莓派系统的桌面

①在终端里安装Xrdp服务

安装命令：

切换到root用户 ：su root

安装命令 ：apt-get install xrdp

根据提示，输入y ，再回车就行。

操作图如下：

![](media/aa59941ff4c1e582e8183c1dc3767fce.png)

②打开Windows的远程桌面连接

按下键盘 WIN+R 然后输入：mstsc.exe

操作图如下：

![](media/e5a66a3a1c998f8feb1c21c7a457ec4e.png)

接着输入树莓派的ip地址，如下图，点击“Connect”后再次点击“Connect”。

192.168.1.99是我上面固定树莓派ip地址的步骤里固定的ip，改为你的树莓派ip就好了。

![](media/6c8660280510468717644fd21827b3d1.png)![](media/c41c66bea61b30019e02a74b483af700.png)

接着会出现个提示，点击 “Yes”就行了。

![](media/297813f1370ce5c158fac61511f61295.png)

接着输入用户名：pi ，默认密码：raspberry，如下图所示：

![](media/251fddc1decc15d0b69f8a0c7467d5c1.png)

点击OK或者 Enter键，就会出现树莓派系统Raspberry Pi OS的桌面了，如下图所示：

![](media/56bd5693edd484c4433dc438b58c6130.png)

到这里为止，完成了树莓派系统Raspberry Pi OS的基本配置。

### Raspberry Pi Pico简介

![](media/8f4fd948c7ba2a57de1f13bfafcbc57a.jpeg)

2021年1月底的时候，树莓派基金会发布了一个重磅消息，推出了进军微控制器领域的树莓派Pico。功能强劲，价格便宜的特性让Pico受到了全世界创客们的关注，下面就来给大家介绍一下Pico这个小玩意儿。

Pico是一块小小的板子，大小和Arduino Nano差不多，为21mm × 51mm。

![](media/c88af883129afa6bbbbaf4c602c5cd17.jpeg)

Raspberry Pi Pico是具有灵活数字接口的低成本高性能微控制器板。它集成了Raspberry Pi自己的RP2040微控制器芯片，运行速度高达133 MHz的双核Arm Cortex M0
+处理器，嵌入式264KB SRAM和2MB板载闪存以及26个多功能GPIO引脚。对于软件开发，可以使用Raspberry Pi的C/C++SDK或MicroPython，这个教程中我们使用MicroPython。

![](media/5af80ccb1a66b3d5c95f7e6332c14aaf.jpeg)

裸板不带针脚，需要自己焊。这是一块做工精良的电路板，也可以作为SMD元件，直接焊接到印刷电路板上。

![](media/5559aecae75a907d128fe917f0d439cf.png)

板上最主要的功能是一端的microUSB连接器。它既用于通信，也用于给Pico供电。

在microUSB连接器旁边安装了一个板载LED，它内部连接到GPIO针脚25，这是整个Pico板上唯一的LED。

开机按钮安装在离LED稍低一点的地方，它可以让你改变Pico的启动模式，这样你就可以在上面加载MicroPython，进行拖拽式编程。

在板子的底部，你会看到三个连接点，这些连接点是用于串行Debug选项的，我们今天是入门，暂时不探讨这个问题，高级开发者会比较感兴趣。

在板子的中央是整个板子的“大脑”——RP2040 MCU，RP2040能够支持高达16MB的片外闪存，不过在Pico中只有4MB。

– 双核32位ARM Cortex -M0+处理器  
– 运行在48MHz，但可以超频到133MHz。  
– 30个GPIO引脚(26个暴露)  
– 可支持USB主机或设备模式  
– 8 可编程I/O（PIO）状态机

![](media/cb29ae0ae38fa37cfab6fa455cacc649.png)

Pico是一个3.3V的逻辑器件，但由于内置了电压转换器和稳压器，它可以用一系列电源供电。

GND–––地线，8个地线加上3针Debug连接器上的一个附加地线，是方形的，而不是像其他连接的圆形。

VBUS–––这是来自 microUSB 总线的电源，5 V。如果Pico不是由microUSB连接器供电，那么这里将没有输出。  
VSYS–––这是输入电压，范围为 2 至 5 V。板载电压转换器将为 Pico
将其改为 3.3 V。  
3V3–––这是 Pico 内部调节器的 3.3 伏输出。只要将负载保持在 300ma
以下，它就可用于为其他组件供电。

3V3_EN–––你可以使用此输入禁用 Pico 的内部电压调节器，从而关闭 Pico
和由其供电的任何组件。  
RUN–––可以启用或禁用 RP2040 微控制器，也可以将其复位。

![](media/0e74531a0bf3e972325003fe51c51bd4.png)

树莓派
Pico板上有26个裸露的GPIO连接，它们的排列顺序很好，在GP22和GP26之间有“空隙”（这些“缺失”的引脚在内部使用）。这些引脚都有多种功能，你可以为PWM配置多达16个引脚。有两个I2C总线，两个UART和两个SPI总线，这些可以配置使用多种GPIO引脚。

Pico有三个模数转换器分别为ADC0-GP26、ADC1-GP27、ADC2-GP28还有一个内部用于板载温度传感器的转换器ADC-VREF。注意：ADC的分辨率为12位。但MicroPython把范围映射到16位，也就是从0到65535，微处理器的工作电压是3.3V，也就是说0对应着0V，65535对应着3.3V。

你也可以在ADC_VREF引脚上提供一个外部精密电压参考。其中一个接地点，即33脚上的ADC_GND被用作该参考点的接地点。

|树莓派 PICO配置|
|-|
|双核 Arm Cortex-M0 + @ 133MHz|
|2 个 UART、2 个 SPI 控制器和 2 个 I2C 控制器|
|芯片内置 264KB SRAM 和 2MB 的板载闪存|
|16 个 PWM 通道|
|通过专用 QSPI 总线支持最高 16MB 的片外闪存|
|USB 1.1 主机和设备支持|
|DMA 控制器|
|8 个树莓派可编程 I/O（PIO）状态机，用于自定义外围设备支持|
|30 个 GPIO 引脚，其中 4 个可用作模拟输入|
|支持 UF2 的 USB 大容量存储启动模式，用于拖放式编程|

完整引脚图：

![](media/5f7b34935150b0821800fe23c56110bd.png)

树莓派也在官网发布了一大堆技术文档，还有一本名为《Get Started with MicroPython on Raspberry Pi Pico》的说明书。它有纸质版，也有PDF版下载。

更多详情请了解树莓派官方网站：

https://www.raspberrypi.com/products/raspberry-pi-pico/

### 使用MicroPython

MicroPython是Python 3编程语言的一种精简而高效的实现，它包含了Python标准库的一个小子集，并针对在微控制器和受限环境中运行进行了优化。MicroPython充满了高级功能，如交互式提示、任意精度整数、闭包、列表理解、生成器、异常处理等。然而，它足够紧凑，只需要256k的代码空间和16k的内存就可以安装和运行。
MicroPython的目标是尽可能与普通Python兼容，让您能够轻松地将代码从桌面传输到微控制器或嵌入式系统。

更多microPython详情点击官网查看：https://micropython.org/

对Pico进行编程：您可以使用两种编程语言C/C++或者MicroPython，MicroPython是一种专门为微控制器制作的解释语言。C/C++为许多微控制器用户都熟悉C++，因为它被用于Arduino和ESP32板上。本教程使用树莓派推荐的MicroPython IDE---Thonny。Thonny自称是 “Python IDE for Beginners”，它适用于Windows、Mac OSX和Linux。它也是树莓派操作系统(以前的Raspbian)的一部分。

启动和安装MicroPython：我们需要做的第一件事是将MicroPython安装到Pico上。

1.下载烧录固件：进入官网下载UF2文件

https://www.raspberrypi.com/documentation/microcontrollers/#getting-started-with-micropython，我下载的为![](media/b9acf3a180cc573115d6956dd97473a6.png)。下载完成后我们进行烧录：

按住BOOTSEL按钮不松开，然后将 Pico 插入 Raspberry Pi 或其他计算机的 USB
端口。连接Pico后松开 BOOTSEL按钮。
它将安装为名为RPI-RP2的大容量存储设备。

![](media/ee9ff7d7457d7b85f275246981fa40c3.png)

把刚刚下载的UF2文件拖拽到文件夹中，树莓派
PICO将会自动重启，此时，固件烧录完成。

![](media/2b7da93f856d5f6f6f790db6b48463c8.png)

2.通过USB从Raspberry Pi 连接 pico

MicroPython固件配备了一个虚拟USB串口，可通过Raspberry Pi Pico上的microUSB线访问该串口。您的计算机应该注意到这个串行端口并将其列为字符设备，很可能是
/dev/ttyACM0。

输入指令ls
/dev/tty\*可以列出所有的串口。可能有很多，但MicroPython的USB串口将以/dev/ttyACM开头。
如果有疑问，请拔下微型USB连接器，看看哪个消失了。如果你没有看到任何东西，你可以尝试重启你的树莓派。

输入以下指令安装串口minicom：

sudo apt install minicom

![](media/446a7c06287ab5dad20b372e7b4fb409.png)

输入以下指令打开串口minicom：

minicom -o -D /dev/ttyACM0

![](media/ffbca82d2585a6c716390e05e8d6efba.png)

按下 Ctrl + B

![](media/4ce46e1813574740300c02558d3b6a78.png)

输入print("hello world")，将看到打印hello world

![](media/2af344f21b35759955c8e1ed469d897f.png)

我们再来试试，点亮pico板载的LED，这个板载LED连接到GPIO25：machine模块用于控制片上硬件。这是所有MicroPython端口的标准，在这里，我们使用它来控制GPIO，因此我们可以将其驱动为高电平和低电平。如果你输入这个,点亮LED：
