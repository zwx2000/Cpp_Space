# DAY 4  
## 一、拷贝构造器 Copy Constructor
> 由**普通数值**做参数完成构造 constructor  
> 由**同类对象**做参数完成构造 copy constructor
- [copy Constructor](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day04/01copyCpnstructor/main.cpp)  
    1. 系统提供了默认的拷贝构造器，格式比较固定,一经实现，不复存在
    2. 此拷贝构造器，不是空的。提供了一个等位拷贝机制
    3. 系统提供的默认拷贝构造器，是一种浅拷贝,shallow copy
    4. deep copy
- [deep Copy 深拷贝](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day04/02deepcopy/main.cpp)  
    - shallow copy 如果对象不含有堆上的空间（*）,此时浅拷贝可以满足需求，不需要自实现
    - 如果对象中含有堆上的空间（*），此时浅拷贝不能满足需求，需要自实现
    - 浅拷贝，重析构 即double free

- [copy constructor Application](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day04/03copyconstructorApp/main.cpp)   
- [myString](https://github.com/zwx2000/Cpp_Space/tree/master/Cpp/day04/04mystring)  
## 二、this指针  
- [this](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day04/05this/main.cpp)  
    - this 指向当前对象的指针,属于内容型const指针(自身指向不可改，但指向内容可改，`Stu * const p = this`)  
        - 注：指针型const即指向内容不可改，自身指向可改  
        例如：`const Stu * p = m` = `Stu const * p`
        - Q：在哪里可以用?  
          A：
        - Q：这样用有什么好处?  
          A：避免了形参与数据成员重名,可以实现链式表达，串联
        - Q：以什么样的形式存在?  
          A：this 作为函数参数**隐式**传进来的,不占用对象的体积大小  
## 三、赋值运算符重载 operator =  
- [operator Assignment](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day04/06operatorAssignment/main.cpp) 
    - 系统提供默认的赋值运算符重载，浅赋值
    - 如果对象中，不存在由*构成的堆空间，此时默认也是可以满足需求的。
    - 格式比较固定 `A& operator=(const A& another)` 自实现后，默认即不存在
    - 自实现需要解决的问题 参考[mystring](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day04/04mystring/mystring.cpp)中的  
    `mystring & operator=(const mystring & another)`
        1. 重析构  
        2. 内存泄漏
        3. 自赋值
    - 返回引用，且多数情况下不能用const修饰。(被const修饰后不可在被赋值)  
## 四、string 揭秘  
- [string to mystring](https://github.com/zwx2000/Cpp_Space/tree/master/Cpp/day04/07mystring_v2)  
    - `string` 与 `char *` 的通道：`c_str()`  
    - Q：C++运算符重载，+-*/的重载，返回值为什么是对象而不是对象的引用？而流操作符<< 和 >> 却返回的是引用？  
      A：+，-,*等返回不了引用，比如+运算符，可以如下重载（为了简单，假设A 只有int x；int y）  

      ```
      A operator+(A a,A b) 
      {
          A sum;   
          sum.x=a.x+b.x; 
          sum.y=a.y+b.y;   
          return sum; 
      }
    - 不能用引用的原因:  
    - 函数传入了两个参数a，b，并且+只能传入两个参数（c++不允许自己创造运算符），这样就限定了和sum不能作为参数传入，所以sum只能是一个函数里的**临时变量**，但是临时变量在函数结束时是要销毁的，那么函数调用玩，sum就没有了， 如果返回引用，引用源都已经没有了，还怎么引用，引用哪里的东西呢？？所以不能引用。 
    - 能返回引用，首先是因为out是作为参数传入的，不是函数的临时变量，函数结束时它仍然存在，这样就可以引用了。  再者，返回引用效率高，不用拷贝一个新的，直接返回它自己。 而且，返回引用有助于连着调用。比如`cout<<a<<b<<c<<d`,为什么可以连着写？其实<<也是函数，为什么我们平时的函数一般不能连着写？如`a.xx().xx().xx.()`这样调用三个xx（）。这也体现了引用的作用。 
## 五、栈对象返回的问题
- [stack return](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day04/08stackreturn/main.cpp)  
    - 栈上的对象是可以返回的，不可以返回栈上对象的引用
- [平台差异](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day04/09test/main.cpp)  
## 六、对象数组
- [二段式初始化](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day04/10objArray/main.cpp)  
## 七、实现钟表类 class Clock  
- [Clock](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day04/11clock/main.cpp)  
- [Car](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day04/12Car/main.cpp)  
##  八、`<windows.h>`的`Sleep()`&`<unistd.h>`的`sleep()`  
-  在windows下的Sleep()函数需要包含windows.h头文件，而在Linux下需要包含的头文件是unistd.h头文件，说明sleep()函数不是标准的C语言库，而且在Windows下Sleep()睡眠时间为**毫秒**，而Linux下的sleep()函数时间为**秒**，如果需要实现更精确的时间，Linux下可以采用usleep()函数，微妙级别，在Windows下貌似没有更精确的，只能到毫秒级别