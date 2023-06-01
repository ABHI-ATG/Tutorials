#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <cstring>
using namespace std;
struct hello{
string name ;
string num ;
};

int main()
{
    int n;
    cin >> n;
    struct hello arr[n];

    for (int i = 0; i < n; i++)
    {
    cin>>arr[i].name; 
    cin>>arr[i].num;
        }
        string test;

    for (int i = 0; i < n; i++)
    {cin>>test;
strcmp(test,arr[i].name);
    }
    return 0;
}