/*
Little John wants to calculate and show the amount of
spent fuel liters on a trip, using a car that does 12 Km/L.
For this, he would like you to help him through a simple
program. To perform the calculation, you have to read spent
 time (in hours) and the same average speed (km/h). In this
 way, you can get distance and then, calculate how many liters
  would be needed. Show the value with three decimal places
  after the point.

Input
The input file contains two integers. The first one
is the spent time in the trip (in hours). The second
one is the average speed during the trip (in Km/h).

Output
Print how many liters would be needed to do this trip,
 with three digits after the decimal point.


*/
#include <stdio.h>

int main() {

    int i,k;
    scanf("%d %d", &i, &k);
    float m = i * k ;
    printf("%.3f\n", m/12);

    return 0;
}
