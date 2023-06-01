// #include <stdio.h>

// int main()
// {
//     long long int a;
//     int arr[200], b, c, d = 0;
//     scanf("%d", &b);
//     while (b--)
//     {
//         arr[0]=1;
//       scanf("%d",&c);
//       while(c>0){
//           arr[d]=arr[d]*c;
//           c--;
//           if(arr[d]>1999999999){

//               d++;
//               arr[d]=1;
//           }
//       }
//     }
// for(int i=0;i<d;i++){
//     printf("%d",arr[])
// }
//     return 0;
// }
#include<stdio.h>

int main(){
	int t,i,num;
	scanf("%d",&t);
	
	int a[1000];
    a[0]=0;
    a[2]=2;
    a[3]=3;
    a[5]=5;
    for(int i=0;i<10;i++){
        while(a[i]){
            printf("%d\n",a[i]);
            break;
        }
    }
	// while(t--)
	// {
	//     scanf("%d",&num);
	//     a[num]++;
	// }
	
	// for(i=0;i<=1000;i++)
	// {
	//     while(a[i])
	    
	//     {
	//         printf("%d\n",i);
	        
	//         a[i]--;
	      
	//        }
	       
	       
	// }
	return 0;
}