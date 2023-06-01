//comparison on ascii value
#include<stdio.h>
#include<string.h>
int main(){
    char ab[]="abhi";
    char ab2[]="hello";
    int a=strcmp(ab,ab2);
    printf("the a is %d",a);
    return 0;
}