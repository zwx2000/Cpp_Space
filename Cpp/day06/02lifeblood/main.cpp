#include <iostream>

using namespace std;

//friend 友元，效率的问题
//get方法和set方法是标准封装的结果。friend破坏了这种封装，但又带来效率的提高。
//减少了类型及安全性检查及调用的时间开销
//以前访问类私有成员需要类成员函数 现在使用全局函数访问 即需声明友元

class Sprite
{
    friend void fight(Sprite &sp);
public:
    Sprite(int lb_ = 100):lifeBlood_(lb_){}

    int getLifeblood()
    {
        return lifeBlood_;
    }

    void setLifeblood(int lb)
    {
        lifeBlood_ = lb;
    }

private:
    int lifeBlood_;
};

void fight(Sprite &sp)
{
//    sp.setLifeblood(sp.getLifeblood() - 20);
//    cout<<sp.getLifeblood()<<endl;
    sp.lifeBlood_ = sp.lifeBlood_ - 20;
    cout<<sp.lifeBlood_<<endl;
}

int main()
{
    Sprite sp;

    fight(sp);
    return 0;
}
