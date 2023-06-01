#include <iostream>
using namespace std;
class base
{
public:
    int var_base;
    virtual void display()
    {
        cout << "the value of var_base is " << var_base << endl;
    }
};
class derived : public base
{
public:
    int var_derived=2;
    void display()
    {
        cout << "the value of var_derived is " << var_derived << endl;
    }
};

int main()
{
    base obj_base;
    base *base_pointer;
    derived obj_derived;

    base_pointer = &obj_derived;
    base_pointer->var_base = 34;
    // base_pointer->var_derived=45;

    base_pointer->display();

    return 0;
}