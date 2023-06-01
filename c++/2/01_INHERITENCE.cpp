#include <iostream>
using namespace std;
// base class
class employee
{
public:
    int a, b;
    // cout<<"hello";
};
// derived class
// class {{derived-class-name}} : {{visibility-mode base}} {{class name}}
// default mode is private
// private mode - the private member of base class will become public member of derived class
// public mode - the publuc member of base class will become public member of derived class
class programmer : employee
{
public:
    programmer(int c)
    {
        a = c;
        cout<<a;
    }
};
int main()
{
    programmer(34);

    return 0;
}