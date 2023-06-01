// #include <stdio.h>
// /*
// Add `int max_of_four(int a, int b, int c, int d)` here.
// */
// int max_of_four(int a, int b, int c, int d){
//     if ((a>b)&&(a>c)&&(a>d)) {
//      return a;
// }
//  else if ((b>a)&&(b>c)&&(b>d)) {
//  return b;}
// else if ((c>a)&&(c>b)&&(c>d)) {
//      return c;
// }
//  else if((d>a)&&(d>b)&&(d>c)) {
//      return d;
// }
// else{
//    return 0;
// }
// }
// int main() {
//     int a, b, c, d,ans;
//     scanf("%d %d %d %d", &a, &b, &c, &d);
//     ans= max_of_four(a, b, c, d);
//     printf("%d", ans);

//     return 0;
// }
// #include <stdio.h>
// /*
// Add `int max_of_four(int a, int b, int c, int d)` here.
// */
// int max_of_four(int a, int b, int c, int d){
//     if ((a>b)&&(a>c)&&(a>d)) {
//      return a;
// }
//  else if ((b>a)&&(b>c)&&(b>d)) {
//      return b;
// }
// else if ((c>a)&&(c>b)&&(c>d)) {
//      return c;
// }
//  else  {
//      return d;
// }

// }
// int main() {
//     int a, b, c, d,ans;
//     scanf("%d %d %d %d", &a, &b, &c, &d);
//      ans=max_of_four(a, b, c, d);
//      printf("%d", ans);

//     return 0;
// }
#include <stdio.h>

int main()
{
    int sum = 0, arr[10];
    for (int i = 0; i <= 3; i++)
    {
        sum = 0;
        scanf("%d", &arr[i]);}
        for(int i=0;i<=3;i++){
        sum = sum + arr[i];
    }
    printf("%d", sum);
    // for(int i=0;i<9;i++){
    //     sum
    // }
    // gets(arr);
    return 0;
}