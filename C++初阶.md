##  C++初阶

###  一、命名空间

####  1.命名空间是什么

> 在C/C++中，变量、函数和类都是大量存在的，这些变量、函数和类的名称将都会存在于全局变量作用域中，可能会导致很多冲突。使用命名空间的目的是对**标识符的名称进行本地化**，以避免**命名冲突或名字污染**，`namespace`关键字的出现就是针对这个问题

####  2.命名空间定义方式1.0



####  2.命名空间定义方式2.0

####  2.命名空间定义方式3.0

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

