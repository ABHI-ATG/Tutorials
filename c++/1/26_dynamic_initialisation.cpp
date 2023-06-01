#include <iostream>
using namespace std;
class bank
{
    int p;
    int t;
    float r;
    float a;

public:
bank(int p2, int t2, float r2)
    {
        p = p2;
        t = t2;
        r = r2;
    }
    bank(int p1, int r1, int t1)
    {
        p = p1;
        t = t1;
        r = r1;
    }
    void show()
    {
        cout << p << endl
             << t << endl
             << r;
    }

    
};

int main()
{
    bank b=bank(3, 4, 5);
    b.show();
    // bank k=bank(3, 4, 5.6);
    // k.show();

    return 0;
}