#include<stdio.h>

int main(){
    char str[35];
    printf("ENTER YOUR NAME:  ");
    // scanf("%s",str);
    gets(str);// act as multi word string
    // seedhi baat- scanf ke jaisa kaam karega or space bhi aa jayega naam ke beech
    puts(str);
    // seedhi baat- printf vala kaam karega 
        // printf("your name is %s",str);
return 0;
}