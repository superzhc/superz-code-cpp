//
// Created by superz on 2023/4/23.
//
#include <stdio.h>

int main() {
    // 数组元素的值由{ }包围，各个值之间以,分隔
    int a[] = {1, 2, 3, 4, 5};

    // 数组元素的值由{ }包围，各个值之间以,分隔
    int b[5] = {1, 2, 3, 5, 6};

    /*
     * 可以只给部分元素赋值。当{ }中值的个数少于元素个数时，只给前面部分元素赋值，后面的元素自动初始化为各类型的默认值
     *
     * 对于short、int、long，就是整数 0；
     * 对于char，就是字符 '\0'；
     * 对于float、double，就是小数 0.0。
     * */
    int c[5] = {1, 2, 3};

    printf("%d", a[0]);

    return 0;
}