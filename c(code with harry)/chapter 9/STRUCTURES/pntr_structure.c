#include<stdio.h>
struct employee{
int code;
char name;
float salary;
};
int main(){
    struct employee e1;
struct employee *ptr;
ptr= &e1;
// e1.code=100;
// (*ptr).code=100;// IMPORTANT
ptr->code=100;// same as above line // arrow operator
printf("%d",(*ptr).code);
    return 0;
}