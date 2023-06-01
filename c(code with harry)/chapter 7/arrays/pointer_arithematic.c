#include<stdio.h>

int main(){
    // int i=34;
    // int *ptr=&i;
    // printf("the value if ptr is %u\n",ptr);
    // ptr=ptr+10;// 10 times ptr increament
    // // ptr++ = (ptr=ptr + 1)
    // printf("the value if ptr is %u",ptr);
    char c=34;
    char *ptr=&c;
    printf("the value if ptr is %u\n",ptr);
    ptr=ptr+1;// 1 times ptr increament
    // ptr++ = (ptr=ptr + 1)
    printf("the value if ptr is %u",ptr);
}