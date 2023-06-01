#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[20];
};
int main()
{
    struct employee abhi = {100, 34252.423, "abhi"};
    printf("code is %d \n", abhi.code);
    printf("salary is %f \n", abhi.salary);
    printf("name is %s ", abhi.name);
    return 0;
}



