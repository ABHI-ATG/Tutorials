//to find average of 3 number
#include<stdio.h>
float average(int a,int b, int c);

int main()
{int d,e,f;
    float  g;
    
g=average(d,e,f);
printf("%f",g); 
    return 0;
}
float average(int a, int b, int c)
{float d;
printf("ENTER THE FIRST NO");
    scanf("%d",&a);
    printf("ENTER THE SECOND NO");
    scanf("%d",&b);
    printf("ENTER THE THIRD NO");
    scanf("%d",&c);
d = (float)(a+b+c)/3;
return d;


}