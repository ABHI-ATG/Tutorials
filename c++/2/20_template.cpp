#include <iostream>
using namespace std;

// class -> object
// template -> class


template<class temp>

class ninja
{

public:
    
    temp *arr;
    int size;
        ninja(int m)
        {
            size = m;
            arr = new int[size];
        }
    temp dotproduct(ninja &v)
    {
        temp d=0;
        for(int i=0;i<size;i++){
            d+= this->arr[i]*v.arr[i];
        }
        return d;
    }
};

int main()
{
    ninja <int>v1(3);
    v1.arr[0]=2.3;
    v1.arr[1]=3.3;
    v1.arr[2]=4.3;
    ninja <int> v2(3);
    v2.arr[0]=2.3;
    v2.arr[1]=3.3;
    v2.arr[2]=4.3;
    int a= v1.dotproduct(v2);
    cout<<a;
    return 0;
}