/*
Read three integers and sort them in ascending order. After,
print these values in ascending order, a blank line and then
the values in the sequence as they were readed.

Input
The input contains three integer numbers.

Output
Present the output as requested above.
*/
#include <stdio.h>

int main() {

    int a,b,c,mehedi,x,y,z;
    scanf("%d %d %d", &a, &b, &c);
    x=a;
    y=b;
    z=c;
    if( a > b ){mehedi = a ; a = b ; b = mehedi ;}
    if( a > c ){mehedi = a ; a = c ; c = mehedi ;}
    if( b > c ){mehedi = b ; b = c ; c = mehedi ;}

    printf("%d\n%d\n%d\n\n", a, b, c);
    printf("%d\n%d\n%d\n", x, y, z);

    return 0;
}
