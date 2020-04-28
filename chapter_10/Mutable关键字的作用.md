

# Mutable关键字的作用

大家好，我是刘傲天。

在C++ Primer 第五版中第十章节学到了Lambda表达式(匿名函数)，格式为:

```c++
[&/=](variable) -> return type {function content};
```

在学习当中学习到一个关键字Mutable，今天就来介绍一下这个关键字的用法



## 例子

```c++
int i = 0;
auto lambda_func = [i] () -> void { i = 100; };
```

### 编译及报错

```shell
$:g++ --std=c++11 -Wall <filename>
error:
noconst_lambda.cc:10:42: error: cannot assign to a variable captured by copy in a non-mutable lambda
  auto lambda_func = [i] ()  -> void { i = 100; };
                                       ~ ^
1 error generated.
```

### 错误原因

这是因为当你用值捕获也就是中括号中的=符号，当你用值捕获的时候，并不会像正常使用函数时可以任意更改传递的值，而是会限制你不能更改值，(在正常函数当中，是可以更改参数的值，但是只会在该函数内部有效，函数退出后没有任何意义，但是在虚拟函数lambda中是直接限制不让你修改这个值)。

### 为什么不用&引用捕获

使用引用捕获当你更改这个值的时候，比如上边例子当中的i，也会修改外部的i，因为你是引用捕获，所以并不是我们想要的只在虚拟函数当中修改i的效果。

### 解决方法

这个时候就需要用到Mutable这个关键字。代码如下:

```c++
int i = 0;
auto lambda_func = [i] () mutable -> void { i = 100; };
```

## 编译及报错

```shell
$:g++ --std=c++11 -Wall noconst_lambda.cc
$:./a.out
i=0
```

# 问题解决

用法也了解到了，就是为了在lambda当中修改参数的值。