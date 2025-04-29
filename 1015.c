/*
Read the four values corresponding to the x and y axes of two points
in the plane, p1 (x1, y1) and p2 (x2, y2) and calculate the distance
between them, showing four decimal places, according to the formula:

Distance = Sqrt((x*2-x*1)^2+(y*2-y*1)^2)

Input
The input file contains two lines of data. The first one contains
two double values: x1 y1 and the second one also contains two double
values with one digit after the decimal point: x2 y2.

Output
Calculate and print the distance value using the provided
formula, with 4 decimal places.
*/
#include <stdio.h>
#include <math.h>

int main() {

    double x1,x2,y1,y2,H,G,M;
    scanf ("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    H=pow(x2-x1,2);
    G=pow(y2-y1,2);
    M=sqrt(H+G);
    printf ("%.4lf\n",M);

    return 0;
}
