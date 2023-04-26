//
// Created by superz on 2023/4/26.
//
/**
* 结构体
 *
 * 结构体定义由关键字 struct 和结构体名组成，结构体名可以根据需要自行定义。
 *
 * struct 语句定义了一个包含多个成员的新的数据类型，struct 语句的格式如下：

struct tag {
    member-list
    member-list
    member-list
    ...
} variable-list ;

 * tag 是结构体标签。
 * member-list 是标准的变量定义，比如 int i; 或者 float f;，或者其他有效的变量定义。
 * variable-list 结构变量，定义在结构的末尾，最后一个分号之前，可以指定一个或多个结构变量。
 *
 * 在一般情况下，tag、member-list、variable-list 这 3 部分至少要出现 2 个。
*/
struct Person {
    char *name;
    int age;
} superz, yi;

struct {
    char *name;
    int age;
} superz2;

/*在上面的声明中，第一个和第二声明被编译器当作两个完全不同的类型，即使他们的成员列表是一样的*/

//也可以用typedef创建新类型
typedef struct {
    char *name;
    int age;
} Person2;

int main() {
    struct Person zhangsan;
    Person2 lisi;

    return 0;
}

