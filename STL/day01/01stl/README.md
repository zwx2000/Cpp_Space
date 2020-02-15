# STL代码目录  
## 一、STL综述  
> - STL -> Standard Template Library  
>- C++ 四大特征
>>    1. 封装  
>>    2. 继承  
>>    3. 多态  
>>    4. STL  
>- 解决了**通用**<u>数据结构与算法</u>的问题  
>- STL 组成 
>>    - 空间适配器 allocator  
>>    - 容器 container  
>>    - 算法 algorithm  
>>    - 迭代器 iterator  
>>    - 仿函数 functor  

[STL应用示例](https://github.com/zwx2000/Cpp_Space/blob/master/STL/day01/01stl/main.cpp)  
## 二、Container 容器  
- 支持泛型 Template  
- [保存副本](https://github.com/zwx2000/Cpp_Space/blob/master/STL/day01/02container/main.cpp)
- 内存托管
## 三、Sequence Container 序列容器
- [vector之insert erase front back begin end](https://github.com/zwx2000/Cpp_Space/blob/master/STL/day01/03vector/main.cpp)
- [vector之 =&size](https://github.com/zwx2000/Cpp_Space/blob/master/STL/day01/04vector/main.cpp)
- [Nomodifying Operation](https://github.com/zwx2000/Cpp_Space/blob/master/STL/day01/05vectornomodify/main.cpp)
- [Assignment](https://github.com/zwx2000/Cpp_Space/blob/master/STL/day01/06assign/main.cpp)
    - random access 内存连续的容器
    - 能用容器内部的算法，不要用std::的算法
- [iterator 迭代器](https://github.com/zwx2000/Cpp_Space/blob/master/STL/day01/07iterator/main.cpp)
- [insert remove](https://github.com/zwx2000/Cpp_Space/blob/master/STL/day01/08insertremove/main.cpp)
- [sizecapacity](https://github.com/zwx2000/Cpp_Space/blob/master/STL/day01/10sizecapacityresuzereserve/main.cpp)
- [vector压入对象](https://github.com/zwx2000/Cpp_Space/blob/master/STL/day01/11vectorObk/main.cpp)
- [vector压入对象指针](https://github.com/zwx2000/Cpp_Space/blob/master/STL/day01/12vectorobjpointer/main.cpp)
    - 容器有内存托管的功能，但仅限于实体元素
    - 若元素为指针类型，则指针被托管，而不是指针指向的空间被托管
- [invalid iterator](https://github.com/zwx2000/Cpp_Space/blob/master/STL/day01/13eraseinsert/main.cpp)
- [二维空间](https://github.com/zwx2000/Cpp_Space/blob/master/STL/day01/152dspace/main.cpp)