//WRITE A PROGRAM TO PRINT THE ADRESS OF VARIABLE AND USE THIS TO GET THE VALUE 
#include<stdio.h>

int main(){
    int a=4;
    int *b=&a;
    printf("the adress of a is %u\n",b);
    printf("the value from adress is %d",*b);
    return 0;
}