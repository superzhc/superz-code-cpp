//
// Created by superz on 2023/4/25.
//
#include <stdio.h>

// 若未进行函数申明，main方法中无法使用defineConst
void defineConst();

/*修饰符*/
int main() {
    defineConst();
    printf("modifier");
    return 0;
}

void defineConst() {
    /**
     * 定义常量
     *
     * 在 C 中，有两种简单的定义常量的方式：
     * 1. 使用 #define 预处理器。
     * 2. 使用 const 关键字。
     *
     * 使用 const 前缀声明指定类型的常量，如下所示：
     * const type variable = value;
     */
    const int MY_VAR = 10;
}