#include<stdio.h>
#include<string.h>
struct employee{
int code;
char name[20];
float salary;
};
void show(struct employee e1){
    printf("the code 0f employee is %d\n",e1.code);
    printf("the name 0f employee is %s\n",e1.name);
    printf("the salary 0f employee is %f\n",e1.salary);
}
int main(){
    struct employee e1;
    // struct employee *ptr;
    // ptr=&e1;
    // ptr->code=100;
    // ptr->salary=100.9;
    // strcpy(ptr->name,"abhi");
    e1.code=100;
    e1.salary=100.9;
    strcpy(e1.name,"abhi");
    show(e1);

}