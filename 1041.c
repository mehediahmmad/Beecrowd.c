/*
Write an algorithm that reads two floating values (x and y), which
should represent the coordinates of a point in a plane. Next,
determine which quadrant the point belongs, or if you are at one
of the Cartesian axes or the origin (x = y = 0).

// https://resources.urionlinejudge.com.br/gallery/images/problems/UOJ_1041.png

If the point is at the origin, write the message "Origem".

If the point is at X axis write "Eixo X", else if the point is at Y axis write "Eixo Y".

Input
The input contains the coordinates of a point.

Output
The output should display the quadrant in which the point is.
*/
#include <stdio.h>

int main() {
    float a, b;
    scanf("%f %f", &a, &b);


    if (a == 0.0 && b == 0.0) {
        printf("Origem\n");
    }

    else if (a == 0.0) {
        printf("Eixo Y\n");
    }
    else if (b == 0.0) {
        printf("Eixo X\n");
    }

    else if (a > 0.0 && b > 0.0) {
        printf("Q1\n");
    }
    else if (a < 0.0 && b > 0.0) {
        printf("Q2\n");
    }
    else if (a < 0.0 && b < 0.0) {
        printf("Q3\n");
    }
    else if (a > 0.0 && b < 0.0) {
        printf("Q4\n");
    }

    return 0;
}
