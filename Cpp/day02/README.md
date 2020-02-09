# DAY 2  
## 一、引用 & Reference(2)  
- [常引用 constRef](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day02/02constRef/main.cpp)  
- [临时对象的常引用](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day02/03tempObject/main.cpp)  
    - 临时变量 即不可取地址的对象  
        - 常量  
        - 表达式  
        - 函数返回值  
        - 类型不同的变量  
- [引用的本质](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day02/04natureRef/main.cpp) 
    - 本质是个指针，必须初始化，常指针，一经声明不可改变  
    - int * const p  
    - 宏观上没有开辟空间  
    - 底层实现时本质为常指针   
- [引用的本质证明](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day02/05natureRefprove/main.cpp) : 反汇编比较指针与引用   
## 二、堆内存操作 new/delete  
- [new/delete](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day02/06newdelete/main.cpp)  
    - 单变量  
    - 以或多维数组  
    - 指针数组  
    - delete & delete []  
- [返值判断](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day02/07retNew/main.cpp)  
    1. new delete 是关键字 效率高于 malloc free  
    2. 配对使用，避免内存泄漏和多重释放  
    3. 避免交叉使用  
    4. 利用**try catch**结构处理   
## 三、内联函数 inline function   
- [inline func](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day02/08inline/main.cpp)  
    - 宏函数  
        - 优点: 内嵌，避免函数调用的开销  
        - 缺点: 替换，代码膨胀  
    - 普通函数  
        - 优点: 抽象，实现一次书写，n次调用  
        - 缺点: 有调用开销，类型检查  
    - inline函数
        - 兼备类型检查与内嵌  
        - inline register 建议型关键字  
        - **短小**，而**频繁使用**的函数，才有可能被编译器采纳为真正的inline函数  
        - 以牺牲代码段空间，提高程序的运行时间的效率  
## 四、类型强转 Type Cast  
- [static_cast](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day02/09static_cast/main.cpp)  
    - 双隐 `double<->int`    
    - 单隐 `int->void`  
- [reinterpret_cast](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day02/10reinterpret_cast/main.cpp)  
    - 双不隐 `int* - int`  
    - `((int*)((int)arr+1)+1)`问题解析如下：  
        ```
        int arr[5]={1,2,3,4,5};  
        cout<<hex<<*((int*)((int)arr+1));  
        ```
        在32位编译器中，一个int占4个字节，并且是低位在前，高位在后的方式存储的，比如1，是按照下面的方式存储的:   
        
        |第1字节|第2字节|第3字节|第4字节|
        |:-:|:-:|:-:|:-:|
        |00000001|00000000|00000000|00000000|  

        验证方法：  
        ```
        #include <stdio.h>
        int main() {
	        int i = 1;
	        unsigned char * p = (unsigned char *)(&i);
	        printf("第1字节：%d,第2字节：%d,第3字节：%d,第4字节：%d\n",*p,*(p+1),*(p+2),*(p+3));
        }
        ```  
        那么arr[5]这个数组的前两个元素存储就可以像下面这样表示：
            
        |0000<br>000<font color=red>1</font>|0X61fe84|
        |:-:|:-:|
        |0000<br>0000|0X61fe85|
        |0000<br>0000|0X61fe86|
        |0000<br>0000|0X61fe87|
        |0000<br>000<font color=red>2</font>|0X61fe88|
        |0000<br>0000|0X61fe89|
        |0000<br>0000|0X61fe8a|
        |0000<br>0000|0X61fe8b|  
       
        `*((int*)((int)arr+1))`中`arr+1`本来是表示`arr+1*sizeof(int)`，也就是`0x61fe88`，但是这里先把`arr`转为`int`，在加1，结果是`0x61fe85`，然后再转为`int*`，然后对这个指针解引用，因为是`int*`，所以从`0x61fe85`这个地址开始读4个字节,  

        |0000<br>0000|0X61fe85|
        |:-:|:-:|
        |0000<br>0000|0X61fe86|
        |0000<br>0000|0X61fe87|
        |0000<br>000<font color=red>2</font>|0X61fe88|  

        按照地位在前，高位在后，就是  
        **0000 0002 0000 0000 0000 0000 0000 0000**  
        转为16进制输出
        **2000000**  
        - 如果是`cout<<hex<<*((int*)((int)arr+3))`,同理，会输出200.
        - 如果是`*((int*)((int)arr+1)+1)`呢？  
        注意优先级，先是`(int*)((int)arr+1)`，然后再加1，所以这里是指针加1，最后输出3000000.

- [const_cast](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day02/11const_cast/main.cpp)  
    - 只作用于指针和引用，去const化  
    - const_cast 理解为，const semantic的补充  
    - **非const对象**-->const引用/指针-->**原非const对象**修改  
    - const 对象可不可以去const化？  
        - 非const变量加了const可以修改  
        - 试图remove原生const的对象的状态，执行写操作会导致**未定义**  
- dynamic_cast  
## 五、命名空间 namespace  
- [c_namespace](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day02/12cnamespace/main.c)    
- [cpp_namespace](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day02/13cppnamespace/main.cpp)  
    - C++中的命名空间，就是将全局无名命名空间再次划分的结果  
- [namespace的三种使用方法](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day02/14namespace/main.cpp)  
    1. `ONE::x` (用)  
    2. `using ONE::x` (少用)    
    3. `using namespace ONE` (禁用)  
- [std](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day02/15std/main.cpp)  
- [命名空间嵌套 nestNamespace](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day02/16nestNamespace/main.cpp)  
    - 同名命名空间自动合并  
- [namespace合作开发方法](https://github.com/zwx2000/Cpp_Space/tree/master/Cpp/day02/17cooperator)  
## 六、字符串类 string  
- [string基本功能实现](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day02/18string/main.cpp)  
    1. `strlen` -> `sizeof()`  
    2. `strcat` -> `+=`  
    3. `strcmp` -> `== !=`  
    4. `strcpy` -> `=`  
    - 注: 若读取字符串时需要读入空格，则使用`getline(cin,s)`  
- [str22str](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day02/19str22str/main.cpp)  
    - C语言中的`atoi`、`itoa`  
    - C++ 中的 `to_string()`、`stoi()`  
- [file_string](https://github.com/zwx2000/Cpp_Space/blob/master/Cpp/day02/20filestring/main.cpp)    
 [<p align = right>返回目录</p>](https://github.com/zwx2000/Cpp_Space/tree/master/Cpp)