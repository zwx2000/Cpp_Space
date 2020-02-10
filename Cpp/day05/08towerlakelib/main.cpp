#include <iostream>

using namespace std;

class University
{
public:
    University(string t, string l)
    {
        tower_ = t;
        lake_ = l;
    }
    static string & getLib()
    {
        return lib_;
    }


    void dis()
    {
        cout<<"����"<<tower_<<" ����"<<lake_<<" ͼ��"<<lib_<<endl;
    }

private:
    string tower_;
    string lake_;
    static string lib_;
};

string University::lib_ = "";

int main()
{
    University pk("������","δ����");
    University bs("������","������");
    University xdf("�׷���","����");

    University::getLib() += "�����澭";
    pk.dis();
    University::getLib() += " �й��ھ�������ŵ�����";
    bs.dis();
    University::getLib() += " Ҫ����������ѧӢ��";
    xdf.dis();

    return 0;
}
