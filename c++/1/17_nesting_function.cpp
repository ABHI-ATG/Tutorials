#include <iostream>
using namespace std;
class binary
{
    string s;

public:
    void read(void)
    {
        cout << "enter a binary number" << endl;
        cin >> s;
    }
    void chk_bin(void);
    void ones(void);
    void display(void);
};
int main()
{
    binary a;
    a.read();
    a.chk_bin();
    a.ones();
    a.display();
    return 0;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "this is not a binary number ";
            exit(0);
        }
    }
}
void binary ::ones(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i) << endl;
    }
}
