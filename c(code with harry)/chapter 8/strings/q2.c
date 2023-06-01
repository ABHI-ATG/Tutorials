/*WRITE APROGRAM TO TAKE STRING AS AN INPUT FROM THE USER USING 
%C AND %S . CONFIRM THAT THE STRING ARE EQUAL 
*/
#include <stdio.h>
#include<string.h>
int main()
{
    char st1[34];
    char st2[34];
    char c;
    int i=0;
    printf("ENTER THE STRING 1");
    scanf("%s", st1);
    printf("%s\n", st1);
    printf("ENTER THE STRING 2");
    char *ptr=st2;
    while(*ptr!='a'){
        fflush(stdin);
        scanf("%c",ptr);
          
        // st2[i]=c;
        ptr++;
    }
     while(*ptr!='a'){
          printf("%c", *ptr);
     ptr++;}
    return 0;
}
