#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n;
    scanf("%d",&n);
    int pid[n];
    int hq[n];
    int ot[n];
    for(int i=0;i<n;i++){
        scanf("%d",&pid[i]);
         scanf("%d",&hq[i]);
         scanf("%d",&ot[i]);
    }
    int hq2[n];
    int c = 0;
int pid2[n];
int ot2[n];
    for (int i = 0; i < n; i++)
    {
        c = 0;
        for (int j = 0; j < n; j++)
        {
            if (hq[i] > hq[j])
            {
                c++;
            }

        }
        hq2[c]=hq[i];
        pid2[c]=i+1;
        ot2[c]=ot[i];
    }
    int x=0;
for (int i = n-1; i >= 0; i--)
{
    printf("%d %d",pid2[i],x);
    printf("\n");
    x=x+ot2[i];
}

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
