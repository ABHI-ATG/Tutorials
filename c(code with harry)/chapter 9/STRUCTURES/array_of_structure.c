#include<stdio.h>
#include<string.h>
struct employee
{
    char name[20];
    int code;
    float salary;
};
int main(){
    struct employee facebook[100];
// upar dekh bhai , 100 employee ke naam na likh kar sirf ek arraty bana liya 
// fayda ye hua ki 100 employee ke naam na dene padenge 
facebook[0].code=4;
printf("%d",facebook[0].code);
return 0;
}