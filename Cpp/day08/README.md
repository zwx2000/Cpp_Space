# DAY 8
## 一、Inheritance 继承(2)
- 继承方式
    - [类别](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day08/02inheritance/main.cpp)
    - [shadow](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day08/03shadow/main.cpp)
        - shadow 在父子类中，出现了**重名**的标识符(函数成员，数据成员)，就会构成shadow
        - 如果想访问被shadow的成员，加上父类的命名空间
    - [public QMainWindow](https://github.com/zwx2000/Cpp_Space/tree/master/Cpp/day08/04Qtlibpublic)
- Multiple Inheritance 多重继承
    - [沙发床](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day08/05sofabed/main.cpp)
    - [三角问题和钻石问题](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day08/06triangle/main.cpp)
        - 三角转四角的问题
            1. 提取各父类中相同的成员，构成祖父类
            2. 让各父类继承祖父类
            3. 虚继承是一种集成的扩展 virtual
            4. 虚继承也是一种设计的结果
        - 虚继承解决了：
            1. 数据冗余问题
            2. 访问方便
    - [虚继承初始化](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day08/07virtualinit/main.cpp)
        - 虚基类：被虚继承的类
        - 虚继承，是一种对继承的扩展
## 二、Polymorphism 多态
- 增加程序的灵活性，可以减轻系统升级，维护，调试的工作量和复杂度
- 设计模式将多态发挥到极致
### 1. [Assign Compatible 赋值兼容](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day08/08assignmentCompatible/main.cpp)
> 在需要基类对象的任何地方，都可以使用公有派生类对象
1. 派生类的对象可以赋值给基类对象
2. 派生类的对象可以初始化基类的引用
3. **派生类对象的地址可以赋给指向基类的指针**
### 2.Conditions of Polymorphism
- [(~~动~~)多态实现的条件](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day08/09polymorphism/main.cpp)
    1. 父类中有虚函数， 加virtual 声明型关键字
    2. 子类override覆写了父类的虚函数，子类中同名，同参，同返回，才能构成覆写
    3. 子类对象赋给父类指针，通过父类的指针，调用虚函数，形成多态。
- [语法](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day08/10grammaPM/main.cpp)
    - virtual 声明型关键字，用于声明一个函数，虚，子类覆写了的函数，也是virtual
    - 覆写 同名 同参 同返回 override
    - 虚函数在子类中的访问属性并不影响多态，具体需求看子类
- [Pure virtual function](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day08/11virtualABC/main.cpp)
- [Pure Inherit](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day08/13purevirtual/main.cpp)
    - 纯虚函数，virtual 没有实现体 被“初始化”为0
    -纯接口类，才配具备，拥有纯虚函数。含有纯虚函数的类称为抽象基类。 java Interface
    - 抽象基类 不能实例化
    - 子类中若无覆写，则依然为纯虚，依然不能实例化。
    - 析构函数 虚
- [QtMousePressEvent](https://github.com/zwx2000/Cpp_Space/tree/master/Cpp/day08/12QtMousePressEvent)
- [zoo](https://github.com/zwx2000/Cpp_Space/tree/master/Cpp/day08/14zoo)
    - 但凡类中含有虚函数，将其析构函数置为virtual
    - 为了实现完整的析构
- [依赖倒置原则--妈妈讲故事](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day08/15mothertellstory/main.cpp)
    - 依赖 => 耦合
