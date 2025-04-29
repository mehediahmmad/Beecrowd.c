/*
Read an integer N. Print the square of each one of the
 even values from 1 to N including N if it is the case.

Input
The input contains an integer N (5 < N < 2000).

Output
Print the square of each one of the even values from 1 to N,
 as the given example.

Be carefull! Some language automaticly print 1e+006 instead
 1000000. Please configure your program to print the correct
  format setting the output precision.
*/
#include <stdio.h>

int main() {

    int a;
    scanf("%d",&a);

    for(int i = 2;i <= a ; i += 2 ){
        printf("%d^2 = %d\n",i,i * i);

    }


    return 0;
}
