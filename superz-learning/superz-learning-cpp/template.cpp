//
// Created by superz on 2023/4/28.
//
/**
 * 模板
 *
 * 模板是泛型编程的基础，泛型编程即以一种独立于任何特定类型的方式编写代码。
 *
 * 模板是创建泛型类或函数的蓝图或公式。库容器，比如迭代器和算法，都是泛型编程的例子，它们都使用了模板的概念。
 */

/**
 * 函数模板
 *
 * 模板函数定义的一般形式如下所示：
template <typename type> ret-type func-name(parameter list)
{
   // 函数的主体
}
 */
template<typename T>
T same(const T &t) {
    return *t;
}

/**
* 类模板
*
* 泛型类声明的一般形式如下所示：

template <class type> class class-name {
.
.
.
}
*/
template<class T>
class TempClass {
public:
    T *t;

    T func(const T &t);

};