#include <stdio.h>

int main()
{
    int arr1[3];
    int arr2[3];
    int arr3[3];
    int arr4[3];
    printf("enter the cofficient of x,y and z of 1st equation ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("enter the cofficient of x,y and z of 2nd equation ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d",&arr2[i]);
    }
    printf("enter the cofficient of x,y and z of 3rd equation ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d",&arr3[i]);
    }
    printf("enter the non cofficient terms of all equations ");
   for (int i = 0; i < 3; i++)
    {
        scanf("%d",&arr4[i]);
    }
    //determinant
   int a= (arr2[1]*arr3[2])-(arr2[2]*arr3[1]);
 int b= (arr1[0]*arr3[2])-(arr1[2]*arr3[0]);
 int c=(arr1[0]*arr2[1])-(arr1[1]*arr2[0]);
 if(a<0){
     a=-1*a;
 }
 if(b<0){
     b=-1*b;
 }
 if(c<0){
     c=-1*c;
 }
 int a1,b1,c1;
    a1= arr1[0]*a;
  b1= arr2[1]*b;
  c1=arr3[2]*c;
 int res=a1+b1+c1;
 printf("the determinant is %d",res);
//x
  int a2= (arr2[1]*arr3[2])-(arr2[2]*arr3[1]);
 int b2= (arr4[0]*arr3[2])-(arr4[2]*arr3[0]);
 int c2=(arr4[0]*arr2[1])-(arr4[1]*arr2[0]);
 if(a2<0){
     a2=-1*a2;
 }
 if(b2<0){
     b2=-1*b2;
 }
 if(c2<0){
     c2=-1*c2;
 }
 int a3,b3,c3;
    a3= arr1[0]*a2;
  b3= arr2[1]*b2;
  c3=arr3[2]*c2;
 int res2=a3+b3+c3;
 printf("the determinant is %d",res2);
//y
  int a4= (arr4[1]*arr3[2])-(arr2[2]*arr4[2]);
 int b4= (arr1[0]*arr3[2])-(arr1[2]*arr3[0]);
 int c4=(arr1[0]*arr4[1])-(arr4[0]*arr2[0]);
 if(a4<0){
     a4=-1*a4;
 }
 if(b4<0){
     b4=-1*b4;
 }
 if(c4<0){
     c4=-1*c4;
 }
 int a5,b5,c5;
    a5= arr1[0]*a4;
  b5= arr2[1]*b4;
  c5=arr3[2]*c4;
 int res3=a1+b1+c1;
 printf("the determinant is %d",res3);
//z
  int a6= (arr2[1]*arr4[2])-(arr4[1]*arr3[1]);
 int b6= (arr1[0]*arr4[2])-(arr4[0]*arr3[0]);
 int c6=(arr1[0]*arr2[1])-(arr1[1]*arr2[0]);
 if(a6<0){
     a6=-1*a6;
 }
 if(b6<0){
     b6=-1*b6;
 }
 if(c6<0){
     c6=-1*c6;
 }
 int a7,b7,c7;
    a7= arr1[0]*a6;
  b7= arr2[1]*b6;
  c7=arr3[2]*c6;
 int res4=a7+b7+c7;
 printf("the determinant is %d",res4);
    return 0;
}