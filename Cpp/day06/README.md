# DAY 6  
## 一、Friend 友元
### 1. [Why friend](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day06/02lifeblood/main.cpp)  
- friend 友元，效率的问题
- get方法和set方法是标准封装的结果。friend破坏了这种封装，但又带来效率的提高。
- 减少了类型及安全性检查及调用的时间开销
- 以前访问类私有成员需要类成员函数 现在使用全局函数访问 即需声明友元  
### 2.[Relationship](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day06/03friend/main.cpp)  
- **同类间无私处，异类间有友元**  
- **声明为谁的友元，就可以通过谁的对象，访问谁的私有成员**
### 3.[Friend Function](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day06/04funcfriend/main.cpp)  
- 前向声明的问题
    - 前向声明，是一种不完全类型的声明，不能定义对象。
    - 可以定义指针和引用，做参数和返回值，仅用在函数声明中。  
### 4.[Friend class](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day06/05friendclass/main.cpp)  
- 友元类，实际工作中，程序员喜欢友元类
- 已知三点求面积，海伦公式  
## 二、Operator Overload 操作符重载  
### 1. 重载引入
- [友元重载](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day06/07friendoverload/main.cpp)  
    - 友元重载,即全局函数重载
    - 但凡涉及到自定义类型，想要跟普通数据类型一样的操作体验，就需要重载
- [成员重载](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day06/08memberfunctionoverload/main.cpp)  
    - const作返值修饰符
        - 解决运算符重载导致的表达式可被赋值问题
        - 构造类型向基本类型靠齐
### 2. 重载范例
- [双目举例 +=](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day06/09operatorplusassignment/main.cpp)
- 单目举例
    - [operator -(minus)](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day06/10operatorminus/main.cpp)
        - `-(-n)`时注意const对象不能调用非const成员函数
    - [前operator ++()](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day06/11operatorpp/main.cpp)
        - 匿名对象可以**被赋值**，可以**发起成员函数调用**。
    - [后operator ++()](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day06/12operatorrspp/main.cpp)
        - 哑元 `const Complex operator++(int)`
- 成员函数作谁的成员？友元？
    - [引例`sender<<mail`](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day06/13sendermail/main.cpp) 
- [`operator <<` & `operator >>`](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day06/14operatorinoutstream/main.cpp)  
### 3. User-Defined Type cast 自定义类型强转 
- 自定义类型-----转换构造函数
    - 语法
        ```
        class 目标类
        {
            目标类(const 源类型 & 源类对象引用)
            {
                根据需求完成从源类型到目标类型的转换
            }
        }
        ```
    - [convert constructor](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day06/15convertConstructor/main.cpp)
        - 转化构造函数的本质也是构造函数
        - `explicit`用于修饰构造函数，防止隐式类型转换，需要显示写出（强转）
- 自定义类型-----操作符函数转化
    - 语法
        ```
        class 源类{
            operator 目标类(void)
            {
                return 目标类构造器(源类实参);
            }
        }
        ```
    - [convert operator](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day06/16convertoperator/main.cpp)  