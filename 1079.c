/*
Read an integer N, which represents the number of following test
 cases. Each test case consists of three floating-point numbers,
  each one with one digit after the decimal point. Print the weighted
   average for each of these sets of three numbers, considering that
    the first number has weight 2, the second number has weight 3
     and the third number has weight 5.

Input
The input file contains an integer number N in the first line.
 Each N following line is a test case with three float-point
  numbers, each one with one digit after the decimal point.

Output
For each test case, print the weighted average according with
 below example.
*/
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        float a, b, c;
        scanf("%f %f %f", &a, &b, &c);

        float av = (a * 2 + b * 3 + c * 5) / 10.0;
        printf("%.1f\n", av);
    }

    return 0;
}
