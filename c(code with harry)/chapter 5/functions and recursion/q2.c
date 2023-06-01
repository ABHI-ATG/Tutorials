// force
#include<stdio.h>
float force(float m,float a);

int main(){
    float o,p,x;
    x= force(o,p);
   
    printf("FORCE IS %2f",x);

}
float force(float m,float a){
     printf("ENTER THE VALUE OF MASS");
    scanf("%f",&m);
    printf("ENTER THE VALUE OF ACCELERATION");
    scanf("%f",&a);
    float f;
    f = m*a;
    return f;
}
