#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

//对象的创建，初始化，挂到渲染树上去

class CCSprite
{
public:
    CCSprite(){}
    static CCSprite* creat()
    {
        CCSprite * pRet = new CCSprite;
        if(pRet && pRet->init())
        {
            pRet->autoRealease();
            return pRet;
        }
        else
        {
            delete pRet;
            pRet = nullptr;
            exit(-1);
        }
    }

    bool init()
    {
        cout<<"initial"<<endl;
        ch = rand()%(127-32) +33;
        return true;
    }

    static void renderTree()
    {
        CCSprite * t = head;
        while(t)
        {
            cout<<t->ch<<endl;
            t = t->next;
        }
    }

    void autoRealease()
    {
//        if(head == nullptr)
//        {
        this->next = head;
        head = this;
//        }
//        else
//        {
//            this->next = head;
//            head = this;

    }


private:
    static CCSprite * head;
    CCSprite * next;
    char ch;
};

CCSprite * CCSprite::head = nullptr;

int main()
{
    srand(time(NULL));
    CCSprite * ps = CCSprite::creat();
    CCSprite * ps2 = CCSprite::creat();
    CCSprite * ps3 = CCSprite::creat();
    CCSprite * ps4 = CCSprite::creat();

    CCSprite::renderTree();

    return 0;
}
