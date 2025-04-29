/*
Read an integer N (2 < N < 1000). Print the multiplication table of N.
1 x N = N      2 x N = 2N        ...       10 x N = 10N

Input
The input is an integer N (1 < N < 1000).

Output
Print the multiplication table of N., like the following example.
*/
#include <stdio.h>

int main() {

    int a,b=1;
    scanf("%d",&a);

    while(b < 11){
        printf("%d x %d = %d\n",b,a,a*b);
        b++;
    }

    return 0;
}
