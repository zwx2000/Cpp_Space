# DAY 3  
## 一、封装 Encapsulation  
- C Struct 数据封装
    1. [struct Date](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day03/02structDate/main.cpp)  
    2. [struct Stack](https://github.com/zwx2000/Cpp_Space/tree/master/Cpp/day03/03structStack)  
        - **数行合一**
        - 封装 包含两部分 
            - 一部分**数据** 
            - 一部分**行为（接口）**
        - 对外提供接口，隐藏数据，对内数据开放
        - `struct` 默认全部是 `public`
        - `class`  默认全部是 `private`  
        - 在**类外**定义成员函数(为了实现xxx.h xx.cpp)
        - 不能把它定义成全局，类名`::`进行限定
            - [`::`命名空间](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day03/04namespaceClass/main.cpp)里用过，**类名**，本质也是一个**命名空间**
- [封装链表](https://github.com/zwx2000/Cpp_Space/tree/master/Cpp/day03/05classList)  
        - 句柄：资源的“**头**” eg: `FILE*`、`sqlite3*`、`Node * head`  
## 二、类 Class  
- [init到自动化](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day03/06init/main.cpp)  
    - `init` 给予对象一个初始状态  
    - 构造器 Constructor  
        1. 与类名相同 在对象生成的时候自动调用
        2. 无返回值，可以有参数
        3. 可以有默认参数，可以被重载
        4. 系统提供默认无参空体构造器  
        一经自实现，系统提供的默认不复存在  
        5. 无论重载还是默认参数，应该把无参空体构造器包含进来
        6.  生成无参的对象，是一种比较常见的现象，对象数组  
        7.   `myStack s()`为一种**函数声明**，并不能调用无参构造器  
- [initialList 初始化列表](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day03/07stack/main.cpp)  
    - initial list 初始化列表 
        - 完成初始化(数据成员) 效率很高
        - 初始化列表初始化顺序，跟列表中的顺序无关，与**声明顺序**相同  
            - eg:[经典面试题](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day03/initialSequence/main.cpp)
        - 此列表中不要拿被初始化的成员去初始化其他  
- [destructor 析构器(1)](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day03/08destructor/main.cpp)  
- [destructor 析构器(2)](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day03/09destructor2/main.cpp)  
    - 析构器不是必须的,在没有堆空间对象中，默认的就好，在对象有堆空间的情形下，必须
    - 析构器自动调用，在什么时候调用，对象销毁时
        1. 与类同名 无参 无返回 前面加一个"`~`"
        2. 在对象被销毁前，自动调用，被调用用于处理清理工作(处理堆对象)
        3. 在对象被销毁前，栈上对象，堆上对象
        4. 系统提供一个空体析构器  
- [Theory of 层次内存管理 (1)](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day03/10levelmemory/main.cpp)  
- [Theory of 层次内存管理 (2)](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day03/11levelMemory2/main.cpp)  
- [多文件编程 .h/.cpp](https://github.com/zwx2000/Cpp_Space/tree/master/Cpp/day03/12hcpp)  
    - 内存管理层次分明，只对本层的内存负责  



    

