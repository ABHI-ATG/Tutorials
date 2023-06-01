// CREATE a three dimensional array and print the address of its elements in increasing order
#include<stdio.h>

int main(){
 int array[4][4][4];
 
 for(int i=0;i<4;i++){for(int j=0;j<4;j++){for(int k=0;k<4;k++){
 printf("%u\n",&array[i][j][k]);}}}
}