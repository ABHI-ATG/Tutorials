#include<stdio.h>
int sum(int a, int b);
int main(){
    int a=6,b=7;
    printf("the value of a and b is %d and %d\n ",a,b);
     printf("the value of c is %d \n ",sum(a,b));
     printf("the value of a and b is %d and %d ",a,b);
     }
int sum(int a, int b){
    int c;
    scanf("%d",&a);
    scanf("%d",&b);
    c=a+b;
    return c;
}