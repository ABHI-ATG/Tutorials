// WRITE A PROGRAM TO CHANGE THE VALUE OF A VARIABLE TO TEN TIMES OF ITS CURRENT VALUE 
// WRITE A FUNCTION AND PASS THE VALUE BY REFERENCES
#include<stdio.h>
int ten_times(int *a);
int main(){
    int i=70;
    printf("the ten times of %d is %d",i,ten_times(&i));
    return 0;
}int ten_times(int *a){
    return 10*(*a);
}