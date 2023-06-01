#include<stdio.h>

int main(){
    int marks[4];
    int *ptr;
    ptr = &marks[0];// ptr= marks; are same
    for(int i=0;i<4;i++)
    {
        printf("ENTER THE MARKS OF %dTH STUDENT\n",i+1);
        scanf("%d",ptr);
        ptr ++;
    }
     for(int i=0;i<4;i++){
         printf("THE VALUE OF MARKS FOR STUDENT %d IS %d\n",i+1,marks[i]);
     }return 0;
}