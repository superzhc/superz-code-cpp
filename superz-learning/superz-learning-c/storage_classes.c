//
// Created by superz on 2023/4/25.
//
/**
 * 存储类
 *
 * C语言中，每一个变量和函数都有2个属性：数据类型和数据的存储类别。
 * C的存储类别有4种：自动的（auto）、静态的（static）、寄存器的（register）、外部的（extern）。
 * 变量的存储类别对应变量的作用域与生命周期。
 */
void type_auto() {
    /**
     * auto 存储类是所有局部变量默认的存储类
     * 定义在函数中的变量默认为 auto 存储类，这意味着它们在函数开始时被创建，在函数结束时被销毁
     * 注意：auto 只能用在函数内，即 auto 只能修饰局部变量
     */
    auto int a;
}

void type_register() {
    /**
     * register 存储类用于定义存储在寄存器中而不是 RAM 中的局部变量。这意味着变量的最大尺寸等于寄存器的大小（通常是一个字），且不能对它应用一元的 '&' 运算符（因为它没有内存位置）。
     * register 存储类定义存储在寄存器，所以变量的访问速度更快，但是它不能直接取地址，因为它不是存储在 RAM 中的。在需要频繁访问的变量上使用 register 存储类可以提高程序的运行速度。
     */
    register int a;
}

void type_static() {
    /**
     * static 存储类指示编译器在程序的生命周期内保持局部变量的存在，而不需要在每次它进入和离开作用域时进行创建和销毁。因此，使用 static 修饰局部变量可以在函数调用之间保持局部变量的值。
     * static 修饰符也可以应用于全局变量。当 static 修饰全局变量时，会使变量的作用域限制在声明它的文件内。
     * 全局声明的一个 static 变量或方法可以被任何函数或方法调用，只要这些方法出现在跟 static 变量或方法同一个文件中。
     * 静态变量在程序中只被初始化一次，即使函数被调用多次，该变量的值也不会重置。
     */
    static int m;
}

void type_extern(){
    /**
     * extern 存储类用于定义在其他文件中声明的全局变量或函数。当使用 extern 关键字时，不会为变量分配任何存储空间，而只是指示编译器该变量在其他文件中定义。
     * extern 存储类用于提供一个全局变量的引用，全局变量对所有的程序文件都是可见的。当使用 extern 时，对于无法初始化的变量，会把变量名指向一个之前定义过的存储位置。
     * 当有多个文件且定义了一个可以在其他文件中使用的全局变量或函数时，可以在其他文件中使用 extern 来得到已定义的变量或函数的引用。可以这么理解，extern 是用来在另一个文件中声明一个全局变量或函数。
     * extern 修饰符通常用于当有两个或多个文件共享相同的全局变量或函数的时候
     */
}
