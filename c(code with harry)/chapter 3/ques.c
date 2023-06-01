//ques: make a prog. if a student makes below40 or make below 33 marks 
// in any subject then he will fail otherwise pass


#include<stdio.h>

int main()
{int phy, chem, maths;
float total;
printf("enter physics marks");
scanf("%d",&phy);
printf("enter chemistry marks");
scanf("%d",&chem);
printf("enter maths marks");
scanf("%d",&maths);
    total=phy+chem+maths;
    if(total<40||phy<33||chem<33||maths<33)
    {printf("you are failed(or mat padho)");}
    else
    {
        printf("you are pass(shabash)");
    }
    
}