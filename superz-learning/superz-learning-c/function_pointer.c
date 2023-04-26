//
// Created by superz on 2023/4/26.
//
/**
* 函数指针
 *
 * 函数指针是指向函数的指针变量。
 * 通常说的指针变量是指向一个整型、字符型或数组等变量，而函数指针是指向函数。
 * 函数指针可以像一般函数一样，用于调用函数、传递参数。
 *
 * 函数指针变量的声明：
 * type int (*fun_ptr)(int,int); // 声明一个指向同样参数、返回值的函数指针类型
*/
#include <stdio.h>

int max(int x, int y) {
    return x > y ? x : y;
}

int main(void) {
    /* p 是函数指针 */
    int (*p)(int, int) = &max; // &可以省略
    int a, b, c, d;

    printf("请输入三个数字:");
    scanf("%d %d %d", &a, &b, &c);

    /* 与直接调用函数等价，d = max(max(a, b), c) */
    d = p(p(a, b), c);

    printf("最大的数字是: %d\n", d);

    return 0;
}