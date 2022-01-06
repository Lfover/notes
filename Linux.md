##  Linux

## 第一节  基础指令

### Linux下基础指令

####  1.目录命令

#####  `ls`

```
ls [选项][目录或文件]
```

**功能** ：列出改目录下的所有子目录与文件,这是最最最常用的命令了

>* -a:列出目录下所有文件，包括.开头的隐含文件
>
>* -l:列出文件的详细信息

##### `pwd`

```
pwd
```

**功能**：显示用户当前所在目录---打印出来的是绝对路径

##### `mkdir` 

```
mkdir [选项] dirname
```

**功能**：在当前目录下创建一个名为"dirname"的目录

> * -p:可以是一个路径名称，此时若路径中的某些目录尚不存在，加上这个选项后，系统将自动建立好那些尚不存在的目录，即一次可以创建多个目录

*示例：mkdir -p test*---可以递归创建多个目录

有创建自然就有删除，删除有两个指令，一个是rmdir ,一个是rm,我们可以对比学习

##### `rmdir`

```
rmdir [-p][dirName]
```

**功能**：rmdir的功能是删除空目录，只能删除空目录！

> * -p:加上这个操作，当子目录被删除以后，如果他的父目录也变成空的，就连带父目录一起删除

##### ` rm `

```
rm[-f -i -r -v][dirNmae/dir]
```

**功能**：rm命名可以同时删除文件或是目录

> * -f:使文件属性为只读，亦直接删除
> * -i:在删除前一个一个询问你要不要删除
> * -r:删除目录即其下所有文件

##### `cp`

```
cp [选项]源文件或目录  目标文件或目录
```

**功能**：用于复制文件或目录---copy嘛

如果同时指定两个以上的文件或目录，且最后的目的地是一个已经存在的目录，则它会把前面指定的所有文件或目录复制到此目录中。若同时指定多个文件或目录，而最后的目的地并非一个已存在的目录，则会出现错误信息

>* -f:---force强行复制或目录，不论目的文件或目录是否已经存在
>* -i:---interactive覆盖文件之前询问你要不要覆盖
>* -r:递归处理，将指定目录下的文件与子目录一并处理

##### `mv`

```
mv [选项]源文件或目录 目标文件或目录
```

1.当第二个参数是文件时，mv命令是给文件重命名，此时只能有一个源文件 

2.当第二个参数是已经存在的目录时，源文件或目录参数可以有多个，mv将各参数指定的源文件均移至目标目录中

> * -f: force强制，如果目标文件已存在，不会询问而直接覆盖
> * -i: 如果目标文件已经存在时，会询问是否覆盖

##### `cd `

```
cd 目录名
```

**功能**：改变工作目录，将当前工作目录改变到指定的目录下

> * cd .. :返回上级目录
> * cd /home/lmr/linux/ :以绝对路径进入新的工作目录
> * cd ../lmr02/ :以相对路径进入新的工作目录
> * cd ~ :进入家目录

补充一点：`..`表示当前目录的上一级目录

​                  `.`表示当前目录自身

**linux下的目录结构是唯一的树形结构,目录结构不会随着磁盘分区而改变**

**tap键自动文件名补全**

💙💙💙💙💙💙💙💙💙💙💙💙💙平平无奇的分界线💙💙💙💙💙💙💙💙💙💙💙💙💙💙💙

####  2.普通文件命令

文件的时间属性有三种：最后一次访问，最后一次修改，最后一次状态改变

##### `touch`

```
touch [选项]...文件...
```

**功能**：touch一个文件，若存在则刷新文件的时间属性，若无，则创建一个文件

> -d   使用指定的时间刷新时间属性

> -a   仅使用当前系统事件刷新访问时间

> -m  仅使用当前系统事件刷新修改时间

*示例：touch -d "2012-12-12 12:12:02" passwd*

##### `cat`

```
cat [选项][文件]
```

**功能**：打印文件信息直接显示在终端上

*示例：cat passwd*

##### `more`

```
more [选项][文件]
```

**功能**：分页显示文件内容

> 回车：向下按行滚动
>
> 空格：向下按页滚动
>
> q键：退出显示

#####  `less`

```
less [参数]文件
```

**功能**：分页显示文件内容

> * ⬇ 回车：向下按行滚动
>
> * 空格 f键：向下按页滚动
>
> * ⬆ b键：向上滚动
>
> * q键：退出显示
> * /string :向下匹配查找字符串
> * ？string：向上匹配查找字符串

##### `head`

```
head [参数]...[文件]...
```

**功能**：显示档案的开头至标准输出中，默认显示文件前10行内容

> * -n:指定显示的行数

#####  `tail`

```
tail [必要参数][选择参数][文件]
```

**功能**：用于显示指定文件末尾内容，不指定文件时，作为输出信息进行处理。默认显示文件末尾10行内容

>* -n:指定显示的行数
>* 动态一直等待文件末尾的新数据进行

💙💙💙💙💙💙💙💙💙💙💙💙💙平平无奇的分界线💙💙💙💙💙💙💙💙💙💙💙💙💙💙💙

####  补充命令

##### `echo`

**功能**：打印字符串--将数据写入标准输入--显示器设备文件

##### `start`

**功能**：查看文件状态信息

##### 重定向

`>>`或`>`叫做重定向符号，作用是进行数据流的重定向，即文件的重新定向，将要操作的数据，不再写入原本的文件，而是写入新的文件中

*示例：echo "abcd">>text.txt*---将原本要写入标准输出文件的数据，写到text.txt文件中

> `>>`:追加重定向,将数据重新定向到指定的文件中,但是新数据会追加写入到文件末尾
>
> `>`:清空重定向,将新数据重定向到指定的文件中,但是在这之前会清空文件原有的内容

##### 管道符

`|`:head -23 ./passwd | tail -n 1

连接两个命令,将前面命令输出结果,当作后面命令的输入数据,让后面的命令进行处理

##### `ifconfig`

查看网卡信息

##### `shutdown -h now`

关机命令

##### `man`

手册查看命令

*man ls*:查看ls命令的手册

*man fopen*:查看fopen函数的手册

💙💙💙💙💙💙💙💙💙💙💙💙💙平平无奇的分界线💙💙💙💙💙💙💙💙💙💙💙💙💙💙💙

#### 3.压缩文件命令

压缩和打包是不同的

* 压缩:将一个文件按照一些压缩算法,将文件数据从多变少

##### `zip/unzip`

```
zip/unzip 压缩文件.zip 目录或文件
```

zip格式的压缩,文件后缀名.zip

##### `gzip/gunzip`

```
gzip/gunzip 文件或目录
```

gzip格式的压缩,文件后缀名.gz

##### `bzip2/bunzip2`

```
bzip2/bunzip 文件或目录
```

bzip2格式的压缩解压缩,文件后缀名.bz2



* 打包:将多个文件合成一个文件

##### `tar`

```
tar -czvf ***.tar.gz **.txt**.txt//打包
```

```
tar -xvf ***.tar.gz//解包
```

linux下使用度最高的打包解包工具,将多个文件打包成为一个文件,提供解包功能,并且打包解包的同时可以进行压缩解压缩

> * -c:打包
> * -x:解包
> * -z:打包同时进行gzip格式的压缩解压缩
> * -j:打包解包过程同时进行bzip2格式压缩解压缩
> * -v:显示打包解包信息
> * -f:用于指定tar包名称,通常是作为最后一个选项,因为后面要跟上打包名称

💙💙💙💙💙💙💙💙💙💙💙💙💙平平无奇的分界线💙💙💙💙💙💙💙💙💙💙💙💙💙💙💙

####  4.匹配查找命令

##### `grep`

**功能**:从文件内容中匹配包含某个字符串的行,常用于在某个文件中找函数

> * -i:匹配时忽略大小写
> * -v:反向匹配,匹配不包含指定字符串的行
> * -R:对指定目录下的文件递归逐个进行内容匹配

##### `find`

**功能**:从指定目录中查找指定名称/大小/时间/类型的文件

> * find ./ -name "\*test*" 通过文件名查找文件
>
> * find ./ -type d 通过文件类型找文件----->f:普通文件  d:目录文件   c:字符设备   b:块设备   p:管道设备  l:符号链接文件  s:套接字文件
> * find ./ -size -10M  通过文件大小找文件---->10M以内的文件   +10M时超过10M的文件
> * find ./ -mmin -10 通过文件时间找文件---->cmin/mmin/amin以分钟为单位    ctime/mtime/atime 以天为单位

💙💙💙💙💙💙💙💙💙💙💙💙💙平平无奇的分界线💙💙💙💙💙💙💙💙💙💙💙💙💙💙💙

### shell的理解

📍为什么在终端中输入一串字符串,回车会被当做命令行,完成某个功能?

shell是操作系统内核与用户之间的桥梁---命令行解释器

用户不能直接访问系统内核----直接访问太危险

shell会捕捉用户的标准输入,得到字符串,通过字符串判断用户想要干什么

用户不能直接访问内核,操作系统提供一些接口,系统调用接口用户只通过这些接口来完成内核某个特定功能的访问

浏览目录这种功能会涉及到很多系统调用接口,为了便于用户使用,因此大佬使用又使用系统调用接口封装了一些直接完成常用功能的程序

功能程序---被称为shell命令程序

用户输入ls字符串,shell捕捉到之后,就会执行ls这个命令程序完成浏览目录的功能

📍终端为什么能够执行命令?

因为终端打开之后默认就运行了一个程序---->shell---->命令行解释程序

shell程序多种多样--->bash dash csh

我们执行命令都是一个个程序---->我们在终端中输入什么字符串,shell捕捉到之后,就会执行什么程序,完成对应功能

windows下的shell就是ui操作界面

### Linux的权限

**权限**:控制一个用户权利的东西

📍为什么要有权限

> 如果每个人都可以干任何事情,则秩序是混乱的

Linux下有两个用户:**超级用户/普通用户**

su命令进行用户切换---->目的就是为了获取这个用户的操作权限

##### 文件的权限

文件权限的操作指令：描述哪个用户可以对文件如何操作

文件访问用户的分类：文件所有者-u，文件所属组-g，其他用户-o

文件访问操作的分类：可读-r，可写-w，可执行-x

##### 权限表示

显示字符表示：rwx rwx r--

八进制数字表示：7 7 4

##### 文件访问权限指令

定义：创建一个文件的默认权限

##### `umask`

**功能**：查看或设置文件的创建权限掩码，也就是说掩码决定了一个文件的创建的默认权限

> * -S：人性化显示---->计算方法：777满权限-八进制掩码----->正规计算方法：给定权限&（~掩码）777&（~002）
> * 目录：可浏览-r,可在目录下删除创建文件-w,可进入-x

创建好的文件的权限修改

##### `chmod`

> * chmod 777 hello.txt 直接使用八进制数字进行修改
> * chmod a-x hello.txt 针对某类用户进行权限的删除或增加 `chmod [augo]+/-[rwx] filename`

文件用户信息的修改

##### `chown`

> * `chown username filename`修改文件所有者（只能使用root修改）

##### `chgrp`

> * `chgrp groupname filename`修改文件所属组

##### 文件权限的沾滞位

粘滞位是一个特殊的权限位--->主要用于设置目录粘滞位，其他用户在这个目录下创建文件，可以删除自己的文件，不能删除别人的

> * chmod +t filename

💙💙💙💙💙💙💙💙💙💙💙💙💙平平无奇的分界线💙💙💙💙💙💙💙💙💙💙💙💙💙💙💙

## 常用工具

### 1.软件包管理工具

#### 什么是软件包

> * 在Linux下安装软件，通常的办法是下载到程序的源代码，并进行编译，得到可执行的文件
> * 但是这样太麻烦了，所以有些人把一些常用的软件提前编译好，做成了软件包
> * 软件包和软件包管理器，就类似于手机上的应用商店
> * `yum`是Linux下非常常用的包管理器

#### `yum`三班斧

##### 1.查看

> * `yum` `list`---->查看所有软件包
> * `yum` `search`---->搜索指定软件包

##### 2.安装

> * 首先要进入管理员权限 ---->`su` `root`
> * `yum` `install`---->安装软件包

##### 3.移除

> * 首先要进入管理员权限---->`su` `root`
> * `yum` `remove`----->卸载安装包

我们想查看常用工具是否已经安装，可以查看每个工具的版本信息，如果找不到就代表没有安装

例如

> * `vim` `--version`
> * `gcc` `--version`

**注意**：关于`yum`的所有操作必须保证主机网络畅通

💙💙💙💙💙💙💙💙💙💙💙💙💙平平无奇的分界线💙💙💙💙💙💙💙💙💙💙💙💙💙💙💙

### 2.编辑器

#### `vim`

`vim`是一个命令行编辑器，其中不能使用鼠标----在命令行中实现光标的移动，文本的操作，文本的编辑

#### vim操作模式

总共有12种，常用三种：

> 1.**插入模式**：进行文本数据的编辑插入
>
> 2.**普通模式**：进行文本常见的操作-复制、剪切、粘贴、删除、撤销、返回、文本对齐、光标移动
>
> 3.**底行模式**：进行文本的保存和退出，以及文本的匹配查找替换操作

#### vim使用

##### 打开文件

`vim filename`---->打开一个已有的文件若不存在就会创建，打开后默认处于普通模式

##### 操作模式的切换

所有模式都是围绕普通模式进行切换的

> 1.普通模式--->插入模式 
>
> * 按`i`/`a`/`o`/`I`/`A`/`O`从普通模式进入插入模式
> * 按`i`进入插入模式，是从光标当前位置开始输入文件
>
> * 按`a`进入插入模式，光标后移一个字符开始插入
> * 按`o`进入插入模式，在光标下面新插入一行，在行首开始插入,
> * 按`I`进入插入模式，是从光标所在行的行首开始插入
> * 按`A`进入插入模式，从光标所在行的行尾开始插入
> * 按`O`进入插入模式，在光标所在上一行插入新行，在行首进行插入

> 2.普通模式--->底行模式 
>
> * 英文`:`，从普通模式到底行模式
> * `:q`退出
> * `:w` 保存
> * `:wq`保存并退出
> * `:q!` 不保存的强制退出

> 3.其他模式--->普通模式
>
> * 任何模式下按`ESC`键，都可以返回普通模式

##### 普通模式下的操作指令

###### 1.光标移动

> * `h`/`j`/`k`/`l`:按字符的上下移动
> * `w`/`b`：按单词的左右移动
> * `ctrl`+`f`/`b`：上下翻页
> * `gg`/`G`：首行/尾行

###### 2.文本操作

> * `yy`：将光标所在之处到字尾的字符复制到缓冲区中
> * `nyy`：复制从光标所在行往下数的n行文字
> * `dd`：删除光标所在行
> * `ndd`：删除从光标开始行往下的n行
> * `x`：删除字符
> * `dw`：删除单词
> * `p`：将缓冲区的字符粘贴到光标所在位置
> * `P`：将缓冲区的字符粘贴至光标所在上一行

在vim中没有剪切，删除就是剪切，虽然看到数据被删除了，但是也复制到剪切板上了

###### 3.其他操作

> `u`：撤销上一次操作
>
> `ctrl`+`r`：撤销的反向操作
>
> `gg=G`：全文对齐

##### `sudo `

**功能**：临时为用户操作提权，不用每次都切换到管理员用户了

但是`sudo`是需要配置的

> 1.`su` `root` 切换到管理员用户
>
> 2.`visudo` 打开`sudo`配置
>
> 3.:90 跳转到文档第90行，90 行附近
>
> 4.`yy`复制`root`这一行，p粘贴
>
> 5.将用户名从`root`变成自己的用户名称
>
> 6.`:wq`保存退出

💙💙💙💙💙💙💙💙💙💙💙💙💙平平无奇的分界线💙💙💙💙💙💙💙💙💙💙💙💙💙💙💙

### 3.编译器

#### `gcc/g++`

`gcc`是C语言编译器，`g++`是c++语言编译器，不同的语言有不同的编译器

#### 编译器作用

C语言，C++语言都是高级语言，机器无法识别这些代码，需要编译器，将高级语言代码解释成为机器指令，生成可执行程序文件再能执行

可执行程序文件：一段功能的机器指令集

**编译型语言**：c/c++   

> 程序编译后才可以执行 ，运行性能高，编码较慢

**脚本型语言** ：python/lua/shell  

> 编写完毕直接执行  逐行解释型语言，由解释工具逐行解释，然后执行功能，编码较快，但运行性能低

#### 编译过程

##### 1.预处理

```
gcc  -E a.c -o a.i
```

```
gcc  -E b.c -o b.i
```

> 展开所有代码（引入头文件，宏替换，删除注释...）`gcc` `-E`（只预处理）

##### 2.编译

```
gcc -S a.i -o a.s
```

```
gcc -S b.i -o b.s
```

> 进行语义语法纠错，没有错误将代码解释成为汇编代码 `gcc` `-S`（只进行编译）

##### 3.汇编

```
gcc -c a.s -o a.o
```

```
gcc -c b.s -o b.o
```

> 将汇编代码解释成为机器指令`gcc` `-c`（只进行汇编）

##### 4.链接

```c 
gcc a.o b.o -o main
```

> 将所有用到的机器指令文件打包到一起，生成可执行程序`gcc` `-o`（指定要生成的文件名称）

📍我们在C语言中并没有定义printf函数，而且在预编译中包含的头文件中也只有函数的声明，那是哪里实现printf函数的呢？

这里引入一个重要概念

#### 函数库

![image-20220106134726937](C:\Users\86134\AppData\Roaming\Typora\typora-user-images\image-20220106134726937.png)

图中libc是标准c库，printf就是标准c库中的函数，

**gcc编译器在链接生成可执行程序的时候，会自动链接标准c库**

###### 链接库文件的两种方式

> gcc中默认动态链接

1.**动态链接**：链接动态库，在可执行程序中记录函数符号信息表，生成的可执行程序比较小，但是运行时需要加载动态库，多个程序会在内存中使用同一个相同的库，不会再内存中造成代码冗余

2.**静态链接**：链接静态库，直接将使用的函数实现写入可执行程序中，生成的可执行程序比较大，但是运行时不需要额外依赖加载库文件，但是如果多个程序使用了相同的静态库，则运行起来会在内存中造成代码冗余

![image-20220106141213779](C:\Users\86134\AppData\Roaming\Typora\typora-user-images\image-20220106141213779.png)

💙💙💙💙💙💙💙💙💙💙💙💙💙平平无奇的分界线💙💙💙💙💙💙💙💙💙💙💙💙💙💙💙

### 4.调试器

#### `gdb`

* 调试一个程序的运行过程，能让我们从运行过程中发现程序哪里有问题，可以适当的改变数据达到某种调试目的

* 不是所有的程序的都可以调试，调试器只能调试具有调试符号信息的程序--->debug版本的程序

* gcc生成可执行程序，默认会生成release版本的程序，程序中没有调试符号信息，想要生成debug版本需要加上`-g`选项

  > * gcc -g a.c b.c -o mian

##### 1.调试器加载程序

> * `gdb` `./main`   直接使用gdb加载程序

##### 2.开始调试程序

> * run  直接运行
> * start   开始逐步调试

##### 3.常用调试指令

**1.流程控制**   

> * `next`/`n`：下一步，遇到函数直接运行，不会跟踪进入
> * `step`/`s`：下一步，遇到函数则跟踪进入函数
> * `list`/`l`：默认查看调试行附近代码，也可指定行--->`list` `file`:`line`
> * `until`:直接运行到指定行，也可以指定文件--->·`until` `a.c` `line`
> * `continue`/`c`：继续运行，直到断点处停下

**2.断点操作**

> * `break`/`b` `指定文件` :`指定行`：给指定文件的指定行打断点
> * `break` `function`：给函数打断点
> * `info` `break`：查看断点信息
> * `watch` `变量`：给变量打断点，放变量数据改变的时候停下
> * `delete`/`d`：删除断点

**3.调用栈操作**

> * `print`/`p`：查看变量数据---->print a;  `print` `a`=10---->设置变量数据
> * `backtrace`/`bt`：查看程序运行调用栈信息，程序一旦崩溃，查看调用栈可以快速定位崩溃位置--->栈顶函数

![image-20220106154809086](C:\Users\86134\AppData\Roaming\Typora\typora-user-images\image-20220106154809086.png)

💙💙💙💙💙💙💙💙💙💙💙💙💙平平无奇的分界线💙💙💙💙💙💙💙💙💙💙💙💙💙💙💙

### 5.项目自动化构建工具

#### `Makefile`/`make`

> Makefile:普通文本文件，用于记录项目的构建规则流程

> make:Makefile解释程序，逐行解释Makefile中项目的构建规则，执行构建指令，完成项目的构建

##### `Makefile`的编写规则

第一步.目标对象：依赖对象

第二步.制表符`\t` 执行指令

> **目标对象**：是要生成的可执行程序的名称

> **依赖对象**：是生成目标对象所需要的源码文件

如果你出现了和我一样，下面这张图的错误，不同担心，这代表编辑 makefile 时出现格式错误了

![image-20220106163149872](C:\Users\86134\AppData\Roaming\Typora\typora-user-images\image-20220106163149872.png)

**记住**：第二行gcc前面需要按下`Tap`键来空出空格，其他的都无效

![image-20220106163347609](C:\Users\86134\AppData\Roaming\Typora\typora-user-images\image-20220106163347609.png)

修改以后，就没有问题了

![image-20220106163539429](C:\Users\86134\AppData\Roaming\Typora\typora-user-images\image-20220106163539429.png)

##### `make`的解释执行规则

1.make一旦执行，就会在当前目录寻找Makefile

2.make的执行规则中，要生成目标对象，首先要保证依赖对象已经生成，若没有生成，则会递归向下寻找依赖对象的生成规则

![image-20220106173228043](C:\Users\86134\AppData\Roaming\Typora\typora-user-images\image-20220106173228043.png)

3.在Makefile中找到第一个目标对象，根据依赖对象的时间关系，判断是否需要重新生成

> * 生成第一个对象后，make就会退出，不会继续生成第二个对象
>
> * 📍如果非要生成两个对象呢？
>
> * > 也可以
>
>   ![image-20220106170900645](C:\Users\86134\AppData\Roaming\Typora\typora-user-images\image-20220106170900645.png)
>
>   方法如上图，结果如下图
>
>   ![image-20220106171024069](C:\Users\86134\AppData\Roaming\Typora\typora-user-images\image-20220106171024069.png)

4.若是需要重新生成，则执行对应下方的指令（指令不是非要生成对象的指令，也可以是打印等）

##### `make`的编写执行规则进阶版

make 中的预定义变量

> * $@：表示目标对象
> * $^：表示所有依赖对象
> * $<：表示所有依赖对象中第一个依赖对象
>
> ![image-20220106173523309](C:\Users\86134\AppData\Roaming\Typora\typora-user-images\image-20220106173523309.png)
>
> 这样是不是还有点麻烦，通配符%的使用
>
> ![image-20220106174238344](C:\Users\86134\AppData\Roaming\Typora\typora-user-images\image-20220106174238344.png)
>
> 简洁多了~

##### 伪对象的声明使用

```c++
.PHONY：目标对象的名称
```

**作用**：不管对象是否最新，每次都要重新生成

![image-20220106180938871](C:\Users\86134\AppData\Roaming\Typora\typora-user-images\image-20220106180938871.png)

💙💙💙💙💙💙💙💙💙💙💙💙💙平平无奇的分界线💙💙💙💙💙💙💙💙💙💙💙💙💙💙💙

### 6.项目版本管理工具

#### `git`

`git`:项目的版本管理工具

> 版本管理工具：对项目的开发周期进行管理，每一次提交的修改都会有对应的版本号，能够让我们在程序的时候回滚回去

##### `git`使用

1.从远程仓库克隆到本地

> git clone URL

2.本地提交修改信息

> git add ./*

3.提交本次版本管理

> git commit -m "内容"

4.将本次版本提交到远程服务器仓库

> git push origin master

**origin**用于指定分支名称