// factorial
#include<stdio.h>

int main(){
    int i=1,n, factorial=1;
// printf("enter the number");
// scanf("%d",&i);
printf("enter the value");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    factorial *= i;}
    printf("%d\n",factorial);

return 0;
    
}