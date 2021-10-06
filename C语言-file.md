#  C语言-file

##  文件

> 1.文件是保存在硬盘上的一种特殊存在形式

> 2.文件=文件内容+文件属性

![image-20211003093539401](C:\Users\86134\AppData\Roaming\Typora\typora-user-images\image-20211003093539401.png)

0代表文件的内容为空

> 3.文件的操作：对内容操作，对属性的操作

**c程序在启动的时候，由系统默认给我们打开三个文件，标准输入，标准输出，标准错误，对应的硬件设备依次是：键盘，显示器，显示器。对应FILE*分别叫做：stdin,stdot,stderr**



1.1什么是缓冲区？

> 就是一段内存区域（无缓冲，行缓冲，全缓冲）

1.2为什么要有缓冲区？

> 相当于快递公司，提高程序运行效率，缓冲区越大，效率越高

*1.3普通硬盘上面的文件，c采用的是全缓冲，一般显示器对应采用的缓冲刷新方式：行缓冲*

![image-20211003105816438](C:\Users\86134\AppData\Roaming\Typora\typora-user-images\image-20211003105816438.png)





##  文件指针

####  2.1文件指针，句柄

![image-20211003145614644](C:\Users\86134\AppData\Roaming\Typora\typora-user-images\image-20211003145614644.png)

![image-20211003150811906](C:\Users\86134\AppData\Roaming\Typora\typora-user-images\image-20211003150811906.png)

![image-20211003152718017](C:\Users\86134\AppData\Roaming\Typora\typora-user-images\image-20211003152718017.png)

####  fseek

![image-20211003154539668](C:\Users\86134\AppData\Roaming\Typora\typora-user-images\image-20211003154539668.png)

####  ftell

> 返回文件指针相对于起始位置的偏移量

####  rewind

![image-20211003154738873](C:\Users\86134\AppData\Roaming\Typora\typora-user-images\image-20211003154738873.png)