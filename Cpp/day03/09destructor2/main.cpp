#include <iostream>

using namespace std;

class myStack
{
public:
    myStack(int size = 1024)
        :top(0),
         spaceSize(size),
         space(new char[size]{0})
    {}

    bool isFull();
    bool isEmpty();
    void push(char ch);
    char pop();

    ~myStack()
    {
       cout<<"xxxxxxxxx"<<endl;
       delete []space;
    }

private:
    int top;
    char *space;
    int spaceSize;
};


int main()
{
    {
        myStack s;
    }

    myStack *ps = new myStack(1000);
    delete ps;
    return 0;
}
