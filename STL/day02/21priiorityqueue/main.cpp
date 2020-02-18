#include <queue>
#include <cstring>
#include <cstdio>

using namespace std;
//�ṹ��
struct Node
{
    Node(int nri, char *pszName)
    {
        priority = nri;
        strcpy(szName, pszName);
    }
    char szName[20];
    int priority;
};
//�ṹ��ıȽϷ��� ��д operator()
class NodeCmp{
public:
    bool operator()(const Node &na, const Node &nb)
    {
        if (na.priority != nb.priority)
            return na.priority > nb.priority;
        else
            return strcmp(na.szName, nb.szName) < 0;
    }
};
void PrintfNode(const Node &na)
{
    printf("%s %d\n", na.szName, na.priority);
}
int main()
{
    //���ȼ�����Ĭ����ʹ�� vector ���������ײ����ݽṹΪ�ѡ�
    priority_queue<Node, vector<Node>, NodeCmp> a;
    //�� 5 ���˽������
    a.push(Node(5, "abc"));
    a.push(Node(3, "bac"));
    a.push(Node(1, "cba"));
    a.push(Node(5, "aaa"));
    //��ͷ�� 2 ���˳���
    PrintfNode(a.top());
    a.pop();
    PrintfNode(a.top());
    a.pop();
    printf("--------------------\n");
    //�ٽ��� 3 ����
    a.push(Node(2, "bbb"));
    a.push(Node(2, "ccc"));
    a.push(Node(3, "aaa"));
    //�����˶����γ���
    while (!a.empty())
    {
        PrintfNode(a.top());
        a.pop();
    }
    //2 ccc 2 bbb 3 aaa 5abc 5aaa
    return 0;
}
