#include<stdio.h>

int main(){
    int n_sub=5;
    int n_student=3;
    int marks[3][5];
    for(int i=0;i<n_student;i++){
        for(int j=0;j< n_sub;j++){
            printf("ENTER THE MARKS OF STUDENT %d IN SUBJECT %d ",i+1,j+1);
            scanf("%d",&marks[i][j]);
        }
    }
    for(int i=0;i<n_student;i++){
        for(int j=0;j< n_sub;j++){
    printf("the marks of student %d in subject %d is %d\n",i+1,j+1,marks[i][j]);}
    }
}