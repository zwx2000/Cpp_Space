#include <iostream>

using namespace std;

//scanf printf cin cout
//����         �����
int main()
{
/*    int a, b, c;
    cin>>a>>b>>c;*/ // >>���� ��ʾ�����������
    //�ȼ���
//    cin>>a;
//    cin>>b;
//    cin>>c;

//    cout<<"a = "<<a<<endl;
//    cout<<"b = "<<b<<endl;
//    cout<<"c = "<<c<<endl;

    char m; int n;
//    scanf("%d %c",&n,&m);
//    printf("n = %d m = %c",m,n);
//    cin>>n>>m;
//    cout<<"n = "<<n<<" m = "<<m<<endl;

    char buf[10];
//    scanf("$s",buf);
//    gets(buf);
//    fgets(buf,10,stdin);
    cin.getline(buf,10);
    cout<<buf<<endl;

    string str;
    cin>>str;
    cout<<str<<str.max_size()<<endl;

    return 0;
}
