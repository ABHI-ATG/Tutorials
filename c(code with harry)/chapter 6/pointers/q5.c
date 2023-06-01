// WRITE A PROGRAM TO PRINT THE VALUE OF A VAriable 'i' by using pointer to pointer type of variable
#include<stdio.h>

int main(){
    int i=56;
    int *j;
    j=&i;
    int **k;
    k=&j;
    printf("%d\n",i);
     printf("%d\n",*j);
      printf("%d",**k);
}