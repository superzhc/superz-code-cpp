//
// Created by superz on 2023/4/23.
//
#include <stdio.h>

/*
 * 函数
 * */

/**
 * 函数声明以及函数原型
 *
 * C语言代码由上到下依次执行，原则上函数定义要出现在函数调用之前，否则就会报错。但在实际开发中，经常会在函数定义之前使用它们，这个时候就需要提前声明。
 *
 * 所谓声明（Declaration），就是告诉编译器我要使用这个函数，你现在没有找到它的定义不要紧，请不要报错，稍后我会把定义补上。
 *
 * 函数声明的格式非常简单，相当于去掉函数定义中的函数体，并在最后加上分号;，如下所示：
 * dataType  functionName( dataType1 param1, dataType2 param2 ... );
 * 也可以不写形参，只写数据类型：
 * dataType  functionName( dataType1, dataType2 ... );
 *
 * 函数声明给出了函数名、返回值类型、参数列表（重点是参数类型）等与该函数有关的信息，称为函数原型（Function Prototype）。函数原型的作用是告诉编译器与该函数有关的信息，让编译器知道函数的存在，以及存在的形式，即使函数暂时没有定义，编译器也知道如何使用它。
 *
 * 有了函数声明，函数定义就可以出现在任何地方了，甚至是其他文件、静态链接库、动态链接库等。
 */

int sum();

int strcmp_alias(char *s1, char *s2);

int main() {
    return 0;
}

/**
* 无参函数的定义
dataType  functionName(){
    //body
}
 *dataType 是返回值类型，它可以是C语言中的任意数据类型，例如 int、float、char 等。
 * functionName 是函数名，它是标识符的一种，命名规则和标识符相同。函数名后面的括号( )不能少。
 * body 是函数体，它是函数需要执行的代码，是函数的主体部分。即使只有一个语句，函数体也要由{ }包围。
 * 如果有返回值，在函数体中使用 return 语句返回。return 出来的数据的类型要和 dataType 一样。
*/
int sum() {
    int i, sum = 0;
    for (i = 1; i <= 100; i++) {
        sum += i;
    }
    return sum;
}

/**
* 无返回值函数
 * 有的函数不需要返回值，或者返回值类型不确定（很少见），那么可以用 void 表示
*/
void hello() {
    printf("Hello,world \n");
    //没有返回值就不需要 return 语句
}

/**
* 有参函数的定义
dataType  functionName( dataType1 param1, dataType2 param2 ... ){
    //body
}
 * dataType1 param1, dataType2 param2 ...是参数列表。函数可以只有一个参数，也可以有多个，多个参数之间由,分隔。参数本质上也是变量，定义时要指明类型和名称。与无参函数的定义相比，有参函数的定义仅仅是多了一个参数列表。
 *
 * 函数定义时给出的参数称为形式参数，简称形参；函数调用时给出的参数（也就是传递的数据）称为实际参数，简称实参。函数调用时，将实参的值传递给形参，相当于一次赋值操作。
*/
//将比较字符串大小的代码封装成函数，并命名为strcmp_alias
int strcmp_alias(char *s1, char *s2) {
    int i, result;
    for (i = 0; (result = s1[i] - s2[i]) == 0; i++) {
        if (s1[i] == '\0' || s2[i] == '\0') {
            break;
        }
    }

    return result;
}

/**
 * 形参和实参的区别
 *
 * 形参（形式参数）
 * 在函数定义中出现的参数可以看做是一个占位符，它没有数据，只能等到函数被调用时接收传递进来的数据，所以称为形式参数，简称形参。
 *
 * 实参（实际参数）
 * 函数被调用时给出的参数包含了实实在在的数据，会被函数内部的代码使用，所以称为实际参数，简称实参。
 *
 * 区别和联系
 * 1) 形参变量只有在函数被调用时才会分配内存，调用结束后，立刻释放内存，所以形参变量只有在函数内部有效，不能在函数外部使用。
 * 2) 实参可以是常量、变量、表达式、函数等，无论实参是何种类型的数据，在进行函数调用时，它们都必须有确定的值，以便把这些值传送给形参，所以应该提前用赋值、输入等办法使实参获得确定值。
 * 3) 实参和形参在数量上、类型上、顺序上必须严格一致，否则会发生“类型不匹配”的错误。当然，如果能够进行自动类型转换，或者进行了强制类型转换，那么实参类型也可以不同于形参类型。
 * 4) 函数调用中发生的数据传递是单向的，只能把实参的值传递给形参，而不能把形参的值反向地传递给实参；换句话说，一旦完成数据的传递，实参和形参就再也没有瓜葛了，所以，在函数调用过程中，形参的值发生改变并不会影响实参。
 * 5) 形参和实参虽然可以同名，但它们之间是相互独立的，互不影响，因为实参在函数外部有效，而形参在函数内部有效。
 */
