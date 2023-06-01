#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int d){
        a=d;
        b=0;
    }
    complex(){
        cout<<"hello";
    }
    void print()
    {
        cout<<"your number is "<<a<<" and "<<b<<endl;

    }
};

int main()
{
complex c(3,5);
c.print();
complex e(4);
e.print();
complex f;
f.print();
    return 0;
}