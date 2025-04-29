/*
ead 3 double numbers (A, B and C) representing the sides of a
triangle and arrange them in decreasing order, so that the side
 A is the biggest of the three sides. Next, determine the type
  of triangle that they can make, based on the following cases
   always writing an appropriate message:

if A ≥ B + C, write the message: NAO FORMA TRIANGULO
if A2 = B2 + C2, write the message: TRIANGULO RETANGULO
if A2 > B2 + C2, write the message: TRIANGULO OBTUSANGULO
if A2 < B2 + C2, write the message: TRIANGULO ACUTANGULO
if the three sides are the same size, write the message: TRIANGULO EQUILATERO
if only two sides are the same and the third one is different, write the message: TRIANGULO ISOSCELES
Input
The input contains three double numbers, A (0 < A) , B (0 < B) and C (0 < C).

Output
Print all the classifications of the triangle presented in the input.
*/
#include <stdio.h>

int main() {
    double a, b, c, temp;
    scanf("%lf %lf %lf", &a, &b, &c);


    if (a < b) { temp = a; a = b; b = temp; }
    if (a < c) { temp = a; a = c; c = temp; }
    if (b < c) { temp = b; b = c; c = temp; }


    if (a >= b + c) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if ((a * a) == ((b * b) + (c * c))) {
            printf("TRIANGULO RETANGULO\n");
        } else if ((a * a) > ((b * b) + (c * c))) {
            printf("TRIANGULO OBTUSANGULO\n");
        } else if ((a * a) < ((b * b) + (c * c))) {
            printf("TRIANGULO ACUTANGULO\n");
        }


        if (a == b && b == c) {
            printf("TRIANGULO EQUILATERO\n");
        } else if (a == b || b == c || a == c) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}
