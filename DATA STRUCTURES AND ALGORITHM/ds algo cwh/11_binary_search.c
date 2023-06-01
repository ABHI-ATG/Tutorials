#include<stdio.h>
int binary_search(int arr[],int size,int element){
    int low ,high,mid;
    low=0;
    high=size-1;
    int c=0;
    while(low<=high){
        mid=(low+high)/2;
        // if(element==arr[low]){
        //     return 1;
        // }
        // if(element==arr[high]){
        //     return 1;
        // }
        if(element==arr[mid]){
    printf("%d",c);
            return 0;
        }
        if(element>arr[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        c++;
    }
        return -1;

}

int main()
{
int arr[100]={1,3,5,6,8,11,44,55,76,333,455};
int element=455;
int num=binary_search(arr,11,element);
printf("%d",num);
return 0;
}