# DAY 1
## 一、 C&C++的比较
- [类型增强 Type Enhance](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day01/01typeEnhance/main.cpp)
- [真正的枚举 Real Enum](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day01/03realEnum/main.cpp)
- [布尔类型 bool](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day01/02bool/main.cpp)
- [表达式可赋值 Express Assigment](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day01/04expressAssignment/main.cpp)
- [空指针类型 nullptr](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day01/05nullptr/main.cpp)
## 二、 cin&cout
- [类对象 cin&cout](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day01/06cincout/main.cpp)
- [cout格式](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day01/07coutformat/main.cpp) ：`setw() setiosflags(ios::fixed) setprecision setfill()`
- [hw.local time 刷屏](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day01/hw_time/main.cpp) : `Sleep() localtime() `
## 三、 函数重载 function overload
- [function Overload](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day01/08funcionOverload/main.cpp)  
    1. 重载规则  
        - 函数名相同
        - 函数的参数、类型、个数、顺序不同，均可构成重载
        - 函数返回值的类型不能作为构成重载的标志  
    2. 匹配规则  
        - 严格匹配
        - 严格匹配不满足 寻求是否有隐式转化
- [extern "C"](https://github.com/zwx2000/Cpp_Space/tree/master/Cpp/day01/09externC)  
    - 目的是完全兼容C语言，避免函数**倾轧**  
    - C++默认对所有函数名倾轧  
## 四、运算符重载 Op Overload
- [operator overload](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day01/10operatorOverload/main.cpp)
## 五、默认参数 Default Argument 
- [default Arg](https://github.com/zwx2000/Cpp_Space/tree/master/Cpp/day01/11defaultArg)
    - 默认规则
        - 从右往左，不能跳跃
        - 实参个数 + 默认参数个数 >= 形参的个数
        - 声明和实现在一起的时候，默认
        - 若声明和实现不在一起，默认参数出现在声明中
- [conflict of Overload & Default Arg](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day01/12conflictOverloadDe/main.cpp)
    - 当实现同一功能，既可以用默认参数，又可以用重载的时候，推荐使用默认参数
## 六、引用 & Reference
- [reference](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day01/13ref/main.cpp)  
    1. 引用是一种声明关系。<u>不开辟空间</u>，必须要初始化，不能单独存在。 与被别名的变量拥有相同的数据类型
    2. 声明关系一旦确立不可变更
    3. 可以对引用再次引用，也就是对一个变量，可以建立多个引用，此时引用间是一种平行关系
    4. 辨别& 在=左右，单双目  
- [ref Application](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day01/14refApplication/main.cpp)  
    - **传引用，等价于传<u>作用域</u>，把一个变量以引用的方式传到另外一个作用域就等价于扩展了该变量的作用域,在平级内解决问题**
- 引用提高  
    - [指针的引用有 pointer Reference](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day01/15pointerRef/main.cpp) `int * & pra = p`  *pra为指针p的引用*
    - [~~引用的指针无~~](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day01/16refPointer/main.cpp) ~~`int & * rpa = &ra` rpa为指向引用ra的指针~~  
    - [指针的指针有](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day01/17_2d/main.cpp) `int **pp = p`  
    - ~~引用的引用无 `int &&rra = ra`~~  
        - 可以对引用再次取引用，**平行关系**  
            ```
            int a;
            int &ra = a;
            int &rb = ra;  //对引用再次取引用
    - [指针数组有](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day01/18pointerArray/main.cpp) `int *p[] = {&a,&b,&c};`  
        - p代表`int **` 指针的指针有
    - ~~引用数组无 `int &r[] = {a,b,c};`~~  
        - r代表`int &*` ~~引用的指针无~~  
    - [数组的引用有](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day01/19refArray/main.cpp)`int (&rarr)[10] = arr`  
 [<p align = right>返回目录</p>](https://github.com/zwx2000/Cpp_Space/tree/master/Cpp)