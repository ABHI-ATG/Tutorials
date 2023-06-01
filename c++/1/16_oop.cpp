#include <iostream>
using namespace std;
// c ++ initially called c with class (stroustroup)
// class -- extension of structure
//abhi.salary --- not  exist
class emp
{
private:
    int a, b, c;

public:
    int d, e;
    void setdata(int, int, int);
    void getdata()
    {
        cout << "hello";
        cout << "the value of a" << a << endl;
        cout << "the value of b" << b << endl;
        cout << "the value of c" << c << endl;
        cout << "the value of d" << d << endl;
    }
};
int main()
{
    emp abhi;
    // abhi.a=12;//not valid bcs a is private
    abhi.d = 12;
    abhi.setdata(1, 2, 3);
    abhi.getdata();

    return 0;
}
void emp ::setdata(int x, int y, int z)
{
    a = x;
    b = y;
    c = z;
}
