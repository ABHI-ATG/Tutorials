#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int fact(int n)
{
    return (n <= 1) ? 1 : n * fact(n - 1);
}
int findSmallerInRight(char* str, int low, int high)
{
    int countRight = 0, i;
 
    for (i = low + 1; i <= high; ++i)
        if (str[i] < str[low])
            ++countRight;
 
    return countRight;
}
int findRank(char* str)
{
    int len = strlen(str);
    int mul = fact(len);
    int rank = 1;
    int countRight;
 
    int i;
    for (i = 0; i < len; ++i) {
        mul /= len - i;
 
        // count number of chars smaller than str[i]
        // from str[i+1] to str[len-1]
        countRight = findSmallerInRight(str, i, len - 1);
 
        rank += countRight * mul;
    }
 
    return rank;
}
int main() {
char arr[100];
scanf("%s",arr);
int c=0;
char d;
while(arr[c]!='\0'){
    c++;
}
for(int i=0;i<c/2;i++){
  d=arr[i];
  arr[i]=arr[c-i-1];
  arr[c-i-1]=d;
}
int x,y=0;
    int num=findRank(arr);
    while(num>0){
       x= num%10;
       num=num/10;
       y=x+y;
    }
    printf("%d",y);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
