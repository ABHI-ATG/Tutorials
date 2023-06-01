#include <stdio.h>

int main() {
	// your code goes here
	int t,i,num;
	scanf("%d",&t);
	
	int a[1000000]={0};
	while(t--)
	{
	    scanf("%d",&num);
	    a[num]++;
	}
	
	for(i=0;i<=1000000;i++)
	{
	    while(a[i])
	    
	    {
	        printf("%d\n",i);
	        
	        a[i]--;
	      
	       }
	       
	       
	}
	return 0;
}