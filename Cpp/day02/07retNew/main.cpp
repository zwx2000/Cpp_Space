#include <iostream>//返值判断

using namespace std;

//new delete 是关键字 效率高于 malloc free
//配对使用，避免内存泄漏和多重释放
//避免交叉使用

int main()
{
    double * pd[50];
    for(int i=0; i<50; i++)
    {
        pd[i] = new (nothrow)double[50000000];
        if(pd[i] == nullptr)
        {
            cout<<"new error"<<__FILE__<<" "<<__func__<<" "<<__LINE__<<endl;
            exit(-1);
        }
        cout<<i<<endl;
    }
}

void newError()
{
    cout<<"new error"<<endl;
    exit(-1);
}

int main2()
{
    double * pd[50];

    set_new_handler(newError);
    for(int i=0; i<50; i++)
    {
        pd[i] = new double[50000000];
        cout<<pd[i]<<endl;
    }
}

int main1()//返值判断
{
    double * pd[50];
    try {
        for(int i=0; i<50; i++)
        {
            pd[i] = new double[50000000];
            cout<<pd[i]<<endl;
        }
    } catch (std::bad_alloc & e) {
        cout<< e.what()<<endl;
    }
    cout<<"xxxxxxxx"<<endl;
    return 0;
}
