# DAY 5
## Class Extension 类的扩展
### 1. [class member storage](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day05/02functionMember/main.cpp)
- 一个对象所占的空间大小只取决于该对象中数据成员所占的空间，而与成员函数无关
- 类的成员函数只有一份，在对象调用过程中，传入对象的地址，具体可以表现为this
### 2. const in class
- [const修饰类数据成员](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day05/03constdatamember/main.cpp)  
    - const 修饰 类数据成员 必须要初始化
    - const 初始化 
        - 一种情况 类内
        - 另一种 初始化列表 Initial list
    - initial list 
        - 一方面 效率的问题 
        - 为了扩展一些新扩展的功能，提供解决场所或是办法
    - const修饰的数据成员，可以在非const函数中使用，但是不可以更改
- [const修饰类成员函数](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day05/04constfunctionmember/main.cpp)  
    - const 修饰函数以后，承诺不改变,在本函数不会发生改变数据成员的行为,
    - 只能调用const成员函数
    - const构成的重载函数，非const对象，优先调用非const版本
    - const对象，只能调用const版本，很多库常见提供两个版本
    - const修饰类函数成员，不可以修饰全局函数
    - const构成的重载问题
    - inline const static 声明 和 定义
- [const修饰类对象](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day05/05constObj/main.cpp)  
    - const修饰的对象，其内可以有非const数据成员，但不可修改,只能调用const成员函数
    - 针对const 有可能修饰对象，往往提供两个版本，构成重载  
### 3. static in class  

- **静态成员属于类，也属于对象，但终究属于类**
- 共享
    - [static修饰类数据成员](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day05/06staticdatamember/main.cpp)  
        - static修饰数据成员，需要初始化，不可以类内初始化
        - 类外初始化，需要类名空间，且不需要static
        - Q：类的声明与实现分开的时候，初始化在.h
            还是 .cpp中？   
            A：.cpp
        - 大小
            - static声明的数据成员，不占用类对象的大小，存储在data rw段
        - 命名空间，即类名，A
        - 访问
            - 既可以通过对象访问，也可以不通过对象，直接通过类型访问
    - [一塔湖图](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day05/08towerlakelib/main.cpp)  
- 协作
    - [static修饰类成员函数](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day05/09staticfuncmember/main.cpp)  
        - 主要用来管理静态变量
        - 类内外，声明和定义
        - 静态成员函数只能访问静态的成员。不能访问非静态的成员
            - 是因为静态成员函数中没有this指针
        - 非静态函数，访问静态的成员是可以的  
    - [取号服务实例](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day05/10getTurn/main.cpp)  
- [单例模式](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day05/11singleton/main.cpp)  
    - 实现共享用的  单例
    - 好的设计方法
        - 见new 见delete  
        - 不见new 不见delete
    - 不好的设计方法
        - ~~见new 不见delete~~ 
        - ~~不见new 见delete~~  
- [Render Tree 渲染树](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day05/12renderTree/main.cpp)  
    - 对象的创建，初始化，挂到渲染树上去  
### 4.[static const in class](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day05/13staticconst/main.cpp)  
### 5.Pointer to class member
- [C pointer](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day05/14cpointer/main.c)  
- [Cpp pointer](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day05/15cpppointer/main.cpp)  
    - 定义一个指针，指向类的成员不是指向对象的成员  
    - 上面讲的指针，是指的类层面的指针，而不是对象层面的
    - 要想使用，还要跟具体的对象产生关系  
- [指向类成员函数的指针](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day05/16pointer2classfunction/main.cpp)  
- 应用提高  
    - [更加统一的接口](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day05/17moreunit/main.cpp)  
    - [更加隐蔽的接口](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day05/18morenosight/main.cpp)
    