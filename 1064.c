/*
Read 6 values that can be floating point numbers. After, print how
 many of them were positive. In the next line, print the average of
  all positive values typed, with one digit after the decimal point.

Input
The input consist in 6 numbers that can be integer or floating point
 values. At least one number will be positive.

Output
The first output value is the amount of positive numbers. The next
 line should show the average of the positive values ​typed.
*/
#include <stdio.h>

int main() {
    double A, sum = 0;
    int Q = 0;

    for (int i = 1; i <= 6; i++) {
        scanf("%lf", &A);

        if (A > 0) {
            Q++;
            sum += A;
        }
    }

    double average = sum / Q;

    printf("%d valores positivos\n", Q);
    printf("%.1lf\n", average);

    return 0;
}
