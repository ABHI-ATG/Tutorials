#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};// semicolon is important
int main(){
    struct employee e1;
    e1.code=100;
    e1.salary=7800.7656568;
    strcpy(e1.name,"abhi");// important
    printf("%d\n",e1.code);
    printf("%.3f\n",e1.salary);
    printf("%s\n",e1.name);
    return 0;
}