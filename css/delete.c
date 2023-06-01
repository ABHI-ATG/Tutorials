#include<stdio.h>

int main(){
    int arr[6];
    int arrr[5];
    for(int i=0;i<6;i++){
        scanf("%d",arr[i]);
    }
    for(int i=0;i<6;i++){
        for(int j=0;j<5;j++){
           if(i<3&&j<3){
               arrr[j]=arr[i];
           }
           else if(i>3&&j>2){
               arrr[j]=arr[i];
           }
        }
    }
    for(int i=0;i<5;i++){
    printf("%d",arrr[i]);
    }
}