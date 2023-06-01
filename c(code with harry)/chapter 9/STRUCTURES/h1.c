#include<stdio.h>

int main(){
     int a,b,c=0;
     scanf("%d",&a);
     
     for(int i=1;i<=9;i++){
          while(a==i){
b=a%10;
a=a/10;

c +=b;
}}
printf("%d",c);
return 0;
}