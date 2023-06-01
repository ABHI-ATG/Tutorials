#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
// int arr[n];
//     for (int i = 0; i < n; i++){
//         arr[i]=tr[i].a+tr[i].b+tr[i].c;
//     }
//     int a, m[n],count=0;
//     for (int i = 0; i < n; i++){
//         a=arr[i];
//         count=0;
//        for (int j = 0; j < n; j++){
//            if(a>=arr[j]){
//                m[i]=count;
//            }
//            count++;
//       }        
//     }
//     int x;
//     for (int i = 0; i < n; i++){
//         x=m[i];
//            *tr[i].a=*tr[x].a;
//            *tr[i].b=*tr[x].b;
//            *tr[i].c=*tr[x].c;
//     }                   
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}