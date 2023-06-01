#include<iostream>
#include<cstring>
using namespace std;
class as{
    protected:
    char title[20];
    float rating ;
    public:
    as(char *s, float r){
        strcpy(title ,s);
        rating=r;
    }
    virtual void display(){
        
    }
};

int main(){


return 0;
}