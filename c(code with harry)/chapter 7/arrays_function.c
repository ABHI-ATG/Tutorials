#include<stdio.h>
// void printarray(int a,int *ptr){
//     for(int i=0;i<a;i++){
//         printf("the value of array %dth is %d\n",i+1,*(ptr+i));
//     }
// }
void printarray(int a,int ptr[]){
    for(int i=0;i<a;i++){
        printf("the value of array %dth is %d\n",i+1,ptr[i]);
    }
    ptr[2]=45;
}
int main()
{int arr[]={23,5435,346,3464,564};

     printarray(5, arr);
     printf("%d",arr[2]);
}