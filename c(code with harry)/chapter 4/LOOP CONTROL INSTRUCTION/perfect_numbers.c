#include<stdio.h>

int main(){
    int a,p=0;
    scanf("%d",&a);
    for(int i=1;i<a;i++){
      if(a%i==0){
p=p+i;
      }
    }
    printf("%d is sum of divisor of entered number   ",p);
    return 0;
}