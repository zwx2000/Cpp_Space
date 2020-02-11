#include <iostream>

using namespace std;

//friend ��Ԫ��Ч�ʵ�����
//get������set�����Ǳ�׼��װ�Ľ����friend�ƻ������ַ�װ�����ִ���Ч�ʵ���ߡ�
//���������ͼ���ȫ�Լ�鼰���õ�ʱ�俪��
//��ǰ������˽�г�Ա��Ҫ���Ա���� ����ʹ��ȫ�ֺ������� ����������Ԫ

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
