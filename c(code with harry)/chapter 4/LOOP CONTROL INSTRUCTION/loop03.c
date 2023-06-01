// do while loop
//   while=check condition and then execute the code
//   do while= execute and then check (execute code at least once)

#include<stdio.h>

int main()
{
    int i,n;
    printf("enter the value");
    scanf("%d",&n);
    do{
        printf("the value is %d \n",i);
        i++;
        }while(i<=n);
}