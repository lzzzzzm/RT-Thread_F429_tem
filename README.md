# RT-Thread_F429_tem
A RT-Thread Template based on STM32F429

Function:
PIN:控制LED
UART:串口收发
DMA：DMA收发
ADC：F429内部温度传感器读取
RTC：软件模拟RTC时钟，读取时间
WDT：看门狗复位
SPI：注册SPI总线
PWM：PWM波发生控制呼吸灯
TIME：定时器
功能仅支持基础的硬件调用未使用线程调度


BUG:
WatchDOG 复位时间频繁，还未找到解决方法
SPI总线未挂载外设和片层
