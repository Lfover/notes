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

### 别名（&）

引用不是新定义一个变量，而是给已经存在的变量取一个别名，编译器不会为引用变量开辟空间，他和他的引用共用同一块内存

> * 引用在定义时必须初始化
> * 一个变量可以有多个引用
> * 引用一旦引用了一个实体，变不能引用其他实体



