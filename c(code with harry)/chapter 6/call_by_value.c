#include<stdio.h>
int sum(int a, int b);
int main(){
    int a=6,b=7;
    printf("the value of 6+7 is %d ",sum(a,b));
}
int sum(int a, int b){
    return a+b;
}