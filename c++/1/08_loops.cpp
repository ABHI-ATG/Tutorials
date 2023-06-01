#include<iostream>
using namespace std;
int main(){
int a=5;
// for loop
for(int i=1;i<9;i++){
    cout<<i<<endl;
}
int i=1;
while (i<a)
{
    cout<<i<<endl;
i++;
}
int b=7;
i=4;
do
{
    cout<<i<<endl;
    i++;
    /* code */
} while (i<b);

return 0;
}