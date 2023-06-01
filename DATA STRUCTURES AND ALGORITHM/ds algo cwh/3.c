#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int fact(int c){
    if(c==1){
        return 1;
    }
    else{
        return fact(c-1)*c;
    }
}
int sum(int num){
    int a=0,b;
    while(num>0){
        b=num%10;
        num=num/10;
        a=a+b;       
    }
    return a;
}
int main() {
char arr[100];
    gets(arr);
    int c=0;
    for(int i=0;arr[i]!='\0';i++){
        c++;
    }
   int num= fact(c);
    int ans=sum(num);
    printf("%d",ans);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
