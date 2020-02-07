#include <iostream>
#include "a.h"
#include "b.h"
#include "c.h"

using namespace std;

//同名命名空间自动合并

namespace namea {
    int a = 10;
}
namespace namea {
    int b;
}

int main()
{
    using namespace namea;

    cout<<a<<b<<endl;
    using namespace NS;
    using namespace CC;

    A a;
    B b;
    c c;
    return 0;
}
