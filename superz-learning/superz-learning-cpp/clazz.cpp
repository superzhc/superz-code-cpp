//
// Created by superz on 2023/4/28.
//
#include <string>

using namespace std;

class ClassPerson {
public:
    string name;
    int age;

    /*定义构造函数*/
    ClassPerson();

    /**
     * 定义析构函数
     *
     * 类的析构函数是类的一种特殊的成员函数，它会在每次删除所创建的对象时执行。
     *
     * 析构函数的名称与类的名称是完全相同的，只是在前面加了个波浪号（~）作为前缀，它不会返回任何值，也不能带有任何参数。析构函数有助于在跳出程序（比如关闭文件、释放内存等）前释放资源。
     */
    ~ClassPerson();

    string info() {
        return "xxx";
    }

    string getInformation(void);

private:
    double salary;
};

ClassPerson::ClassPerson() {}

ClassPerson::~ClassPerson() {
    // Do something
}

string ClassPerson::getInformation() {
    return "yyy";
}

