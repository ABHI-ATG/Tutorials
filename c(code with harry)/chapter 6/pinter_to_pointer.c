#include<stdio.h>

int main(){
    int i=2;
    int *j=&i;
    int **k=&j;
    
    printf("%d\n%d\n%u\n%u\n%d\n%u\n",i,*j,&i,j,*(&j),&j);
    printf("the Adress of j is %u",k);
}