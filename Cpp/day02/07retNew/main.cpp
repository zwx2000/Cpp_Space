#include <iostream>//��ֵ�ж�

using namespace std;

//new delete �ǹؼ��� Ч�ʸ��� malloc free
//���ʹ�ã������ڴ�й©�Ͷ����ͷ�
//���⽻��ʹ��

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

int main1()//��ֵ�ж�
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
