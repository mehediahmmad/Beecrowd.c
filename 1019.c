/*
Read an integer value, which is the duration in
seconds of a certain event in a factory, and inform
it expressed in hours:minutes:seconds.

Input
The input file contains an integer N.

Output
Print the read time in the input file (seconds)
converted in hours:minutes:seconds like the following example.
*/
#include<stdio.h>
int main (){
    int N;
    scanf ("%d", &N);
    int h = N / 3600;
    int h1 = N % 3600;
    int m = h1 / 60;
    int m1 = h1 % 60;
    int s = m1;

    printf("%d:%d:%d\n", h, m, s);


return 0;
}
