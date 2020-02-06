#include <iostream>

using namespace std;

struct Complex
{
    float real;
    float image;
};

typedef struct _pos
{
    int x_;
    int y_;
}Pos;

bool operator==(Pos one, Pos another)
{
    if(one.x_==another.x_ && one.y_==another.y_)
        return true;
    else
        return false;
}

Complex operator+(Complex com1, Complex com2)
{
    Complex sum;
    sum.real = com1.real+com2.real;
    sum.image = com1.image+com2.image;
    return sum;
}

int main()
{
    Complex com1 = {1,2}, com2 = {3,4};
    Complex sum = com1 + com2;// 等价于 Complex sum = operator+(com1,com2);

    cout<<"("<<sum.real<<","<<sum.image<<")"<<endl;

    Pos ps = {1,2};
    Pos fdPs = {3,4};

    if(operator==(ps,fdPs))//->等价于if(ps==fdPs)
        cout<<"=="<<endl;
    else {
        cout<<"!="<<endl;
    }
    return 0;
}
