// pointers- ios a varibale which stores the address of other variable
/*
&-adress of operator 
*-value at operator
*/ 
// (pointer to integer) int  *j- store the adress the of integer (i)
//   *j-&i
#include<stdio.h>

int main(){
    int i=34;
    int *j=&i;
    printf("the value of i is %d\n",i);
    printf("the value of i is %d\n",*j);
    printf("the adress of i is %u\n",&i);
    printf("the adress of i is %u\n",j);
    printf("the adress of j is %u\n",&j);
    printf("the value of j is %d",*(&j));
    return 0;

}
