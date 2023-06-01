// WRITE A PROGRAM TO STORE THE DETAILS OF 3 EMPLOYEES FROM USER DEFINED DATA. USE THE STRUCTURE DECLARED ABOVE
#include <stdio.h>
#include <string.h>
struct employee
{
    char name[20];
    int code;
    float salary;
};
int main()
{
    struct employee e1, e2, e3;
    printf("ENTER THE NAME OF E1");
    scanf("%s", e1.name);
    printf("ENTER THE code OF E1");
    scanf("%d",& e1.code);
    printf("ENTER THE salary OF E1");
    scanf("%f",&e1.salary);
    printf("ENTER THE NAME OF E2");
    scanf("%s", e1.name);
    printf("ENTER THE code OF E2");
    scanf("%d",& e1.code);
    printf("ENTER THE salary OF E2");
    scanf("%f",&e1.salary);
    printf("ENTER THE NAME OF E3");
    scanf("%s", e1.name);
    printf("ENTER THE code OF E3");
    scanf("%d",& e1.code);
    printf("ENTER THE salary OF E3");
    scanf("%f",&e1.salary);
    return 0;
}