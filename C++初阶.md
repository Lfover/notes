##  C++初阶

###  一、命名空间

####  1.命名空间是什么

> 在C/C++中，变量、函数和类都是大量存在的，这些变量、函数和类的名称将都会存在于全局变量作用域中，可能会导致很多冲突。使用命名空间的目的是对**标识符的名称进行本地化**，以避免**命名冲突或名字污染**，`namespace`关键字的出现就是针对这个问题

####  2.命名空间定义方式

> * 首先命名空间的定义方式是`namespace`+ `命名空间的名字`+ `{}`
> * 在命名空间中，既可以定义变量，又可以定义函数
> * 一个命名空间就定义了一个新的作用域，命名空间中所有的内容都局限于该命名空间中，所以`命名空间内`，`全局变量`，`主函数内部`，都可以定义相同的变量名，因为作用域不同，所以不会产生冲突
> * 在同一个工程中允许存在多个相同名称的命名空间，这样也不会发生冲突，因为编译器会将多个相同名称的命名空间合并成一个
> * 以下是三种定义方式

##### 1.普通

```c++
namespace L
{
    int a = 10;
    int b = 20;
    int Add(int left, int right)
    {
        return left + right;
    }
}
```

#####  2.嵌套

```c++
namespace L
{
    int a = 10;
    int b = 20;
    int Add(int left, int right)
    {
        return left + right;
    }
    //类似一个学校可以有多个学院
    //::是作用域运算符
    namespace L1
{
    int MUL(int left, int right)
    {
        return left * right;
    }
}
}
```

#####  3.同名

```c++
namespace L
{
    int a = 10;
    int b = 20;
    int Add(int left, int right)
    {
        return left + right;
    }
}
namespace L
{
    int MUL(int left, int right)
    {
        return left * right;
    }
}
```

####  3.命名空间的使用1.0

> 命名空间的名字::成员

```c++
namespace L
{
    int a = 10;
    int b = 20;
    int Add(int left, int right)
    {
        return left + right;
    }
}
int a = 20;
int main()
{
    int a = 30;
    printf("%d", a);//此时输出的是主函数里的a的值，30，采用就近原则
    return 0;
}
```

```c++
namespace L
{
    int a = 10;
    int b = 20;
    int Add(int left, int right)
    {
        return left + right;
    }
}
int a = 20;
int main()
{
    //::被称为作用域运算符，::前面没有名字，代表不是使用命名空间，使用的是全局变量
    int a = 30;
    printf("%d", :: a);//此时输出的全局变量a的值，20，
    return 0;
}

```

```c++
namespace L
{
    int a = 10;
    int b = 20;
    int Add(int left, int right)
    {
        return left + right;
    }
}
int a = 20;
int main()
{
    //命名空间的使用方式：
    //命名空间名字:: 成员
    int a = 30;
    printf("%d", a);//输出的是命名空间L里a的值，10
    return 0;
}
```

####  3.命名空间的使用2.0

> * 情景1：假如对ing名空间中的某些成员访问的非常频繁
>
> * using  L::a;使用这种方法，可是实现在主函数中直接printf("%d",a);的使用
> * 虽然写代码简单了，但是如果该文件中也有一个a,则会产生冲突，只能按照1.0的方法进行使用

```c++
namespace L
{
    int a = 10;
    int b = 20;
    int Add(int left, int right)
    {
        return left + right;
    }
}
using L :: a;

int main()
{
    printf("%d", a);
    return 0;
}

```

`小心以下这种情况`

```c++
namespace L
{
    int a = 10;
    int b = 20;
    int Add(int left, int right)
    {
        return left + right;
    }
}
using L :: a;
int a = 20;
int main()
{
    printf("%d", a);//这种情况会报错，冲突了，解决办法是用1.0访问
    return 0;
}
```

####  3.命名空间的使用3.0

> 情景2：命名空间中许多成员在当前文件访问的都很频繁

1.麻烦的方法

```c++
namespace L
{
    int a = 10;
    int b = 20;
    int Add(int left, int right)
    {
        return left + right;
    }
}
using L :: a;//当想使用命名空间的成员比较多且比较频繁，这样会显得很麻烦
using L :: b;
using L :: Add;
int main()
{
    printf("%d", a);
    printf("%d", b);
    return 0;
}
```

有没有既可以简化的方式访问，又不用使用using 呢？

有！

> * using namespace 命名空间的名字
> * 它更加方便，但是发生冲突的可能性也更大
> * 如果冲突，使用1.0 版本
>
> 

```c++
namespace L
{
    int a = 10;
    int b = 20;
    int Add(int left, int right)
    {
        return left + right;
    }
}
//将当前L的命名空间中所有的成员当成该文件的全局变量
//使用非常简单
//产生概率比较大，如果冲突，使用1.0
using namespace L;
int main()
{
    printf("%d", a);
    printf("%d", b);
    return 0;
}
```

### 二、C语言和c++关于函数方面的区别

#### 1.编译器严格程度

> c++编译器比C语言编译器在函数参数和返回值上语法更加严格

1.函数参数检测

```c++
//在C语言中可以通过编译
//在C++语言中不可以通过编译
//没有返回值，也没有参数
void testFun()
{

}
int main()
{
   testFun();
   testFun(10);
   testFun(10, 20);
   testFun(10, 20, 30);
   return 0;
}
```

2.函数返回值检测

```c++
//在C语言中，可以通过编译，如果没有显示写返回值类型时，C语言编译器默认返回int型
//在c++中不能通过编译
testFun(void)
{}
int main()
{
    int ret = testFun();
    printf("%d\n", ret);
    return 0;
}
```

#### 2.缺省参数

> c++支持缺省参数，C语言不支持

```c++
//在C语言中不可以通过编译
//在c++中可以通过
void testFun(int a = 10, int b = 20)
{
   printf(""%d %d", a, b);
}
int main()
{
   testFun(10, 20);
   testFun(10, 20);
   testFun(10, 20);
   testFun();
   testFun();
   testFun();
    
}
```

###### 补充

##### 🤍什么是缺省参数

> **缺省参数**是声明或定义函数时为函数的参数指定一个**默认值**，在调用函数时，如果没有指定实参则采用该默认值，否则使用指定实参

```c++
//此时使用默认参数,a=10,b=20
void test(int a = 10, int b = 20)
{
   printf("%d %d", a, b);
}
int main()
{
   test();
   return 0;
}
```

```c++
//此时使用指定的实参，a=30,b=50
void test(int a = 10, int b = 20)
{
   printf("%d %d", a, b);
}
int main()
{
   test(30, 50);
   return 0;
}
```

##### 🤍缺省参数的分类

###### 全缺省参数

```c++
void test(int a = 10, int b = 20)
{
   printf("%d %d", a, b);
}
```

###### 半缺省参数

> 部分参数带有默认值，半缺省参数必须从**右向左**依次给出，不能间隔者给参数

```c++
void test(int a, int b = 20)
{
   printf("%d %d", a, b);
}
```

```c++
//以下代码叫间隔给参数，是错误的
void test(int a = 10, int b, int c = 30)
{
   printf("%d %d %d", a, b, c);
}

void test(int a = 10, int b = 20, int c)
{
   printf("%d %d %d", a, b, c);
}

void test(int a = 10, int b, int c)
{
   printf("%d %d %d", a, b, c);
}
```

> **注意**：缺省参数可以在声明的位置给出也可以在定义的位置给出，但是不能两个位置同时给出

📍如果声明和定义的位置给的参数不相同，应该用哪一个呢？

**所以不能同时给！**

📍两个位置都可以给，那在哪一个位置给比较好呢？

**一般情况下，放在声明的位置更好**

📍缺省值可以是任意类型嘛

**缺省值只能是常量或全局变量**

#### 3.函数名字修改规则不一样

> c++支持函数重载,C语言不支持函数重载

###### 补充

##### 🤍什么是函数重载

> 函数重载是函数的一种特殊情况,c++允许在**同一个作用域**中声明几个功能类似的同名函数,这些函数的**形参列表**(*参数个数/类型/顺序*)必须不同,常用来处理实现功能类似数据类型不同的问题

```c++
int Add(int left, int right)
{
   return left + right;
}
int Add(double left, double right)
{
   return left + right;
}
int main()
{
   Add(10, 20);
   Add(10.5, 20.5);
}
```

> **注意**:函数仅仅是返回值类型不同是不可以构成函数重载的

##### 🤍调用原理

编译器在编译阶段,会对函数实参进行推演,根据推演的实际结果找类型匹配的函数进行调用

> * 如果有类型完全匹配的函数,直接进行调用
> * 如果没有类型完全匹配的函数,会进行隐式类型转化,如果隐式类型转换后有对应的函数,则进行调用,如果没有对应给函数,则报错
> * 如果隐式转换后,有两个函数都可以,这时编译器不知道选哪一个,该调用哪个,编译器会报错



##### 🤍为什么c++支持函数重载，c语言不支持

* 在vs下，C语言编译器编译函数时，对函数的名字修饰规则非常简单，只是在函数的名字前加了'_'

```c++
int Add(int left, int right)//编译后函数名为_Add
{
   return left + right;
}
int Add(double left, double right)//编译后函数名也为_Add
{
   return left + right;
}
```

* C++编译器在编译函数时，会对函数名字进行修改，将参数类型添加到最终的名字中了

```c++
int Add(int left, int right)//经过编译后的名字是?Add@@YAHHH@Z
{
   return left + right;
}
int Add(double left, double right)//经过编译后的名字是?Add@@YANNN@Z
{
   return left + right;
}
```

**注意**:在代码层面，看起来函数名字相同，但是编译器完成编译之后，在底层使用的名字是不一样的,C++编译器可以给各个重载函数对应一个唯一的名字

📍万一C++写的函数想在C语言里面用应该怎么办

在函数前+`extern C`修饰函数，用来告诉C++编译器用C语言的方式编译

### 三、引用——别名（&）

```c
类型名& 引用变量名（对象名）=引用实体;
```

引用不是新定义一个变量，而是给已经存在的变量取一个别名，编译器不会为引用变量开辟空间，他和他的引用共用同一块内存

#### 特点

> * 引用在定义时必须初始化
> * 一个变量可以有多个引用
> * 引用一旦引用了一个实体，变不能引用其他实体

#### 常引用

```c++
void Test()
{
   const int a = 10;
   //int& ra = a;    该语句编译时会报错因为a被定义为const类型为常量，用一个普通类型的ra去引用a，ra代表可修改，a就不安全了
   const int& ra = a;//可以，即使引用了也不可以修改
   //int& b = 10;    //也会出错，b是常量
   const int& b = 10;//正确
   double d = 12.34;
   //int& rd = d;    该语句编译报错，引用类型必须和引用实体是同种类型
   const int& rd = d;//可以，const类型的引用不可修改，只会取d的整数部分
}
```

💙让我们看一些有意思的

```c++
int a = 10;
const int& ra = a;
//ra = 100;//会提示错误，因为是const类型的引用，是不能修改的
a = 200;//可以修改，ra与a公用一块内存空间，a变了，ra也跟着变了
```

![image-20220105154908973](C:\Users\86134\AppData\Roaming\Typora\typora-user-images\image-20220105154908973.png)

![image-20220105154955034](C:\Users\86134\AppData\Roaming\Typora\typora-user-images\image-20220105154955034.png)

![image-20220105155040127](C:\Users\86134\AppData\Roaming\Typora\typora-user-images\image-20220105155040127.png)



> 可以看到ra和a的地址相同，虽然不可以通过ra修改a的值，但是a修改了值以后，ra会跟着一起变



💙那我们再来看下面这个

```c++
double d = 12.34;
const int& rd = d;
d = 56.78;
```

![image-20220105155517056](C:\Users\86134\AppData\Roaming\Typora\typora-user-images\image-20220105155517056.png)

![image-20220105155539670](C:\Users\86134\AppData\Roaming\Typora\typora-user-images\image-20220105155539670.png)

![image-20220105155624229](C:\Users\86134\AppData\Roaming\Typora\typora-user-images\image-20220105155624229.png)

假设rd是d 的引用，当d变为56.78的时候，rd也应该改变，但是我们实际用调试，发现d改变后，rd并没有改变，且他们的地址并不相同

📍原因是什么呢?

根据变量的特性，我们知道

> 1.引用变量与引用实体的类型必须要一致

> 2.double和int类型之间可以发生隐式转化

当rd去引用d时，编译器发现rd的类型与d的类型不一致，于是编译就创建了一个临时空间作为过渡，让rd去引用编译器所创建的临时空间



假设，我们不能从监视窗口种看到rd的地址

📍你知道编译器创建的临时空间的地址是多少嘛？

> 不知道

📍你知道编译器创建的临时空间的名字是什么嘛？

> 不知道

📍那既然不知道临时空间名字和地址，可以对该临时空间进行修改嘛？

> 不可以

**结论：编译器创建的临时空间具有常性---->所以我们不能修改**

#### 引用的应用场景

##### 1.使代码书写更加简化

> 需要注意typedef是给类型取别名的，&是给变量取别名的

```c++
struct A
{
    int a;
    int b;
    struct B
    {
        int c;
    };
    B stuB;
        
};
int main()
{
    A stuA;
    //在不使用引用时，每次想访问c就需要写stuA.stuB.c
    stuA.stuB.c = 10;
    stuA.stuB.c = 20;
    stuA.stuB.c = 30;
    //来看看使用引用后
    int& rc = stuA.stuB.c;
    rc = 40;
    rc = 50;
    //是不是很方便~
}
```

##### 2.引用类型作为函数形参

```c++ 
//使用指针
void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 10;
    int b = 20;
    Swap(&a, &b);
    return 0;
}
```

```c++
//使用引用
//基本可以取代C语言中的一级指针
void Swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 10;
    int b = 20;
    Swap(a, b);
    return 0;
}
```

##### 3.引用作为函数返回值

```c++
int& Add(int left, int right)
{
   int ret = left + right;
   return ret;
}
int main()
{
    //result 就是Add函数中ret局部变量的别名
    int& result = Add(1, 2);//result=3
    Add(3, 4);//result=7
    Add(5, 6);//result=11
    return 0;
}
```

📍上面代码看起来是不是有点奇怪，result的值为什么会变呢？

1.首先，我们利用监视窗口发现result 和 ret的地址相同

![image-20220105183551906](C:\Users\86134\AppData\Roaming\Typora\typora-user-images\image-20220105183551906.png)

> 其实result引用的实际是Add函数体中的ret局部变量，当Add函数运行结束后，该函数中的ret局部变量的空间就被回收了，result实际引用的就是一块非法空间

2.想要彻底搞清楚，需要从函数调用背后来梳理

> 每个函数在运行时，都需要有自己独立的一块栈内存时间，将该内存空间称为该函数调用时刻所用到的栈帧
>
> 该块内存空间随着函数调用而申请，随函数的结束而回收

![image-20220105191201899](C:\Users\86134\AppData\Roaming\Typora\typora-user-images\image-20220105191201899.png)

> esp和ebp是两个寄存器，来标记栈帧的栈顶和栈底

3.Add函数运行结束后，他并没有清理栈帧中所留下的垃圾数据，result是ret的别名，因此可以看到空间中的垃圾数据



所以我们需要**注意**：

> 📍一定不能返回函数栈上的空间---->典型：局部变量
>
> 因为函数结束后，函数体内部的局部变量就被销毁了，如果外部以引用的方式来接收函数的返回值，外部引用实际引用的就是一块非法的内存空间
>
> 📍那我们可以返回什么样的变量实体呢？
>
> 只要返回的实体、变量不受函数结束而销毁就可以，例如：全局变量、局部静态变量、引用类型的变量

#### 指针和引用共性

在语法概念上，引用就是一个别名，没有独立空间，但是**其实引用的底层实现，就是按照指针的方式实现的**从底层来看，引用就是指针，引用实际也是有空间的，因为引用就是指针，他里面存储的是引用实体的地址

##### 传引用的汇编代码

![image-20220105212246364](C:\Users\86134\AppData\Roaming\Typora\typora-user-images\image-20220105212246364.png)



##### 传地址的汇编代码

![image-20220105212308657](C:\Users\86134\AppData\Roaming\Typora\typora-user-images\image-20220105212308657.png)

📍不是说编译器不会给引用类型的变量开辟空间嘛？

> 其实概念上这么说的原因是为了我们更好的理解引用，但是引用的底层实现技术就是指针

📍那为什么还需要引用呢？

> 那就要谈谈指针和引用在概念，特性，和应用上的区别了

**补充**：

> 指针不是因为操作系统是64位的，就是8字节，而是因为按照64位的方式来编译，才是8字节

#### 指针和引用的不同

1.引用在定义时必须初始化，但是指针没有要求

2.引用在初始化引用一个实体后，不能再引用其他实体了，而指针可以在任何时候指向任何一个同类型实体

3.没有NULL引用，有NULL指针

4.在sizeof中含义不同，引用的结果是引用类型的大小，但是指针始终是地址空间所占字节的个数（4/8字节）

5.引用自加即引用的实体加一，指针自加即指针向后偏移一个类型大小

6.有多级指针，没有多级引用

7.访问实体的方式不同，指针需要显式解引用，引用编译器自己处理

8.引用比指针使用起来相对安全

📍为什么

![image-20220105215615662](C:\Users\86134\AppData\Roaming\Typora\typora-user-images\image-20220105215615662.png)

1. static修饰变量

  a. 函数中局部变量：

   声明周期延长：该变量不随函数结束而结束

   初始化：只在第一次调用该函数时进行初始化

   记忆性：后序调用时，该变量使用前一次函数调用完成之后保存的值

   存储位置：不会存储在栈上，放在数据段

  b. 全局变量

   改变该变量的链接属性，让该变量具有文件作用域，即只能在当前文件中使用

  c. 修饰变量时，没有被初始化时会被自动初始化为0

2. static修饰函数

  改变该函数的链接属性，让该函数具有文件作用域，即只能在当前文件中使用











