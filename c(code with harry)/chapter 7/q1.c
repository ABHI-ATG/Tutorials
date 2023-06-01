//CREATE AN ARRAY OF TEN NO. ,VERIFY USING POINTER ARITHEMATIC THAT (PTR+2) POINTS TO THE THIRD 
//ELEMENTS WHERE PTR IS A POINTER POINTING TO THE FIRST ElEMENT OF THE ARRAY
#include<stdio.h>

int main()
{ int arr[5]={2,4,54,3,7};
 int *ptr;
  ptr=&arr[0];
printf("%d\n",arr[0]);

printf("%d\n",arr[3]);

printf("%d\n",*(ptr+2));

return 0;
}