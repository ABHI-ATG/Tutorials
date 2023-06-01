#include<stdio.h>
int linear_search(int arr[],int size,int element){
    for(int i=0;i<size;i++){
        if(element==arr[i]){
            return 1;
        }
    }
    return -1;

}

int main()
{
int arr[100]={1,2,45,6,64,33,44,4,3};
int element=33;
int num=linear_search(arr,9,element);
printf("%d",num);
return 0;
}