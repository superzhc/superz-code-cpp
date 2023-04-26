//
// Created by superz on 2023/4/26.
//
/**
* 指针
 *
 * 指针也就是内存地址，指针变量是用来存放内存地址的变量。
 *
 * 就像其他变量或常量一样，必须在使用指针存储其他变量地址之前，对其进行声明。指针变量声明的一般形式为：
 * type *var_name;
*/
#include <stdio.h>

void pointer();

void pointerWithArray();

void pointerWithPointer();

void pointerParamFunction(int *p);

int *pointerReturnFunction();

void pointerWithFunction();

int main() {
    pointerWithArray();
    return 0;
}

void pointer() {
    int var = 20;   /* 实际变量的声明 */
    int *ip;        /* 指针变量的声明 */

    ip = &var;  /* 在指针变量中存储 var 的地址 */

    printf("var 变量的地址: %p\n", &var);

    /* 在指针变量中存储的地址 */
    printf("ip 指针变量存储的地址: %p\n", ip);

    /* 使用指针访问值 */
    printf("*ip 变量的值: %d\n", *ip);
}

void pointerWithArray() {
    /**
     * 数组名是一个指向数组中第一个元素的常量指针。示例如下：
     * int a[10];
     * a 是一个指向 &a[0] 的指针，即数组 a 的第一个元素的地址。
     */

    int arr[] = {10, 20, 30, 40};
    int *p, *p1;

    /* 指针中的数组地址，第一个元素的地址 */
    p = arr;
    p1 = &arr[3];

    for (int i = 0; i < 4; i++) {

        printf("存储地址：arr[%d] = %p\n", i, p);
        printf("存储值：arr[%d] = %d\n", i, *p);

        /* 指向下一个位置 */
        p++;

    }

    for (int i = 3; i > -1; i--) {
        printf("存储地址：arr[%d] = %p\n", (3 - i), p1);
        printf("存储值：arr[%d] = %d\n", (3 - i), *p1);

        p1--;
    }
}

void pointerWithPointer() {
    /**
     * 指针的指针
     *
     * 指向指针的指针是一种多级间接寻址的形式，或者说是一个指针链。通常，一个指针包含一个变量的地址。当定义一个指向指针的指针时，第一个指针包含了第二个指针的地址，第二个指针指向包含实际值的位置。
     * 一个指向指针的指针变量必须如下声明，即在变量名前放置两个星号。例如，下面声明了一个指向 int 类型指针的指针：
     * int **var;
     *
     * 当一个目标值被一个指针间接指向到另一个指针时，访问这个值需要使用两个星号运算符
     */
    int a = 10;
    int *p1 = &a;
    int **p2 = &p1;
}

void pointerWithFunction() {
    /**
     * C 语言允许传递指针给函数，只需要简单地声明函数参数为指针类型即可。
     */
}

void pointerParamFunction(int *p) {
    // 对值进行操作
}

int *pointerReturnFunction() {
    /**
     * C 从函数返回指针
     *
     * C 语言不支持在调用函数时返回局部变量的地址，除非定义局部变量为 static 变量
     */
}

