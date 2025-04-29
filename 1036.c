/*
Read 3 floating-point numbers. After, print the roots of
bhaskara’s formula. If it's impossible to calculate the
roots because a division by zero or a square root of a
negative number, presents the message “Impossivel calcular”.

Input
Read 3 floating-point numbers (double) A, B and C.

Output
Print the result with 5 digits after the decimal point
or the message if it is impossible to calculate.
*/
#include <stdio.h>
#include <math.h>


/*
In Brazil, the quadratic equation formula,
x = [-b ± √(b² - 4ac)] / 2a, is known as "Bhaskara's formula,"
*/
int main() {

    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);



    double d;
    d = (( b * b ) - 4 * a * c );

    if (a == 0 || d < 0){
        printf("Impossivel calcular\n");
    }

    else{
            double r,j;

            r = (-b+sqrt(d)) / (2*a);
            j = (-b-sqrt(d)) / (2*a);

            printf ("R1 = %.5lf\n",r);
            printf ("R2 = %.5lf\n",j);
    }

    return 0;
}
