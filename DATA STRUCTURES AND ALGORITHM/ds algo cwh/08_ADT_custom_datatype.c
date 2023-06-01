#include<stdio.h>
#include <stdlib.h>
struct array
{
int total_size;
int used_size;
int *ptr;
};
void create_array(int total_size,int used_size,struct array *a1){
(*a1).total_size=total_size;
(*a1).used_size=used_size;
(*a1).ptr=(int*)malloc(total_size*sizeof(int));
}
void setval(struct array *a1){
    for(int i=0;i<(*a1).used_size;i++){
        scanf("%d",&(*a1).ptr[i]);
    }
}
void show(struct array *a1){
for(int i=0;i<(*a1).used_size;i++){
        printf("%d",(*a1).ptr[i]);
    }
}
int main()
{
struct array a1;
create_array(10,2,&a1);
setval(&a1);
show(&a1);
printf("%d",a1.ptr[0]);
return 0;
}