#include<stdio.h>
int indexinsertion(int arr[],int total,int filled,int index,int num){
    if(filled>=total){
        return -1;
    }
for (int i = filled-1; i > index-1; i--)
{
    arr[i+1]=arr[i];
}
arr[index]=num;
return 1;
}
void show(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
       printf("%d",arr[i]);
    printf("\n");

    }
}
int main()
{
int arr[100]={1,2,3,7,88,99};
indexinsertion(arr,100,6,4,76);
show(arr,7);
return 0;
}