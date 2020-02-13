# DAY 7
## 一、Operator Overload (2)
- [explicit](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day07/01explicit/main.cpp)<->implicit (显式<->隐式)
- Advanced Topics
    - [Functor 仿函数](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day07/02functor/main.cpp)  
    - [Smart Pointer 智能指针(已废弃)](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day07/03auto_ptr/main.cpp)
        - 内存管理机制
        - RAII Theory "资源获取及初始化" new/construct
        - [自实现Smart Pointer](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day07/04smartPtr/main.cpp)
    - [Operator new/delete](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day07/05operatornewdelete/main.cpp)
## 二、Inheritance 继承 (1)
- 引入
    - [代码可重用性](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day07/06codereuse/main.cpp)  

        |老师  |姓名|  性别|  年龄|  教课|  吃饭|  睡觉|  
        |:-:|:-:|:-:|:-:|:-:|:-:|:-:|  
        |学生  |姓名  |性别  |年龄  |学习  |吃饭  |睡觉|

    - 父类 -> 子类   **继承关系**
    - 基类 -> 派生类 **派生关系**
- [继承方式](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day07/07inheritpattern/main.cpp)
    - 继承方式不影响派生类成员的访问方式，影响了父类成员在子类内部和对象访问权限
    - protected 在外部访问时等价于private
    - protected 在public继承中可见
    - public继承： 

        |父类 |public |protected|private|
        |:-:|:-:|:-:|:-:|
        |子类|public|protected|不可见|

- [派生类的组成](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day07/08sommember/main.cpp)
- [派生类的构造](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day07/09sonconstructor/main.cpp) 
    - 应用
        - [子类派生构造](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day07/10studentConstruction/main.cpp)
        - [孙类派生构造](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day07/11grandsonConstructor/main.cpp)
        - 在子类构造的过程当中
        - 标配：
            1. 空体无参  
            2. 重载  
            3.  默认参数
        - 调用父类的构造器，标配会被调用。没有了标配，必须**显式调用**。
        - 或隐 必须有标配 或显 无所谓
        - 调用内嵌子对象的构造器，标配会被调用，没有标配，必须显式调用
- [派生类的拷贝构造](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day07/12aonCopyConstructor/main.cpp)
    - 当子类不自实现时，默认调用父类的拷贝构造
    - 若自实现 不做特殊处理，此时只会调用父类的构造器,此时失去了拷贝构造的意义
    - 特殊处理  显式调用父类的拷贝构造
    ---
    - 子类对象赋给父类的引用 复制兼容
    ---
    - 当内嵌子对象，子类不自实现拷贝构造时时，默认调用内嵌子对象的拷贝构造
    - 若自实现 不做特殊处理，此时只会调用内嵌子对象的标配构造器,此时失去了拷贝构造的意义
    - 特殊处理  显式调用内嵌子对象的拷贝构造
    ---
    - [student应用](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day07/13studentCopyConstructor/main.cpp)
- [派生类的赋值重载](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day07/14sonoperatorAssignment/main.cpp)
    - [应用](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day07/15sonoperatorAssignment/main.cpp)
- [派生类的友元函数](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day07/16sonfriend/main.cpp)