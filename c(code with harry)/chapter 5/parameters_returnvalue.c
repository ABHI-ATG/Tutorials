#include<stdio.h>
int sum(int a,int b);
// parameters=int a , int b (function which take value)
// return value= which give value i.e.. int
int main(){
    int c;
    c= sum(2, 12);// arguments=actual value
    printf("%d",c);
    return 0;

}
int sum(int a,int b){
    int c;
    c= a+b;
    return c;
}