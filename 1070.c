/*
Read an integer value X (1 <= X <= 1000).  Then print the odd numbers
 from 1 to X, each one in a line, including X if is the case.

Input
The input will be an integer value.

Output
Print all odd values between 1 and X, including X if is the case.
*/
#include <stdio.h>

int main() {

    int a,b=6;
    scanf("%d",&a);
    for(int i = a ;i<=b;i+=2){
        printf("%d",i);
    }

    return 0;
}
