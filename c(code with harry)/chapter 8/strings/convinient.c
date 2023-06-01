#include<stdio.h>

int main(){
    char str[]="abhi bhai";
    char *ptr=str;
    // alternate of above line
    // char *arr="abhi bhai";
    // char *ptr=arr;
    printf("%s\n",str);// %s= to print string 
    // 2.
    while(*ptr!='\0'){
        printf("%c\n",*ptr);
        ptr++;
    }
    //3.
    puts(str);
    return 0;
}