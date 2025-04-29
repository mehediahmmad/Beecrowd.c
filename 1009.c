/*
Make a program that reads a seller's name, his/her fixed salary and the
sale's total made by himself/herself in the month (in money). Considering
that this seller receives 15% over all products sold, write the final salary
(total) of this seller at the end of the month , with two decimal places.

- Don�t forget to print the line's end after the result, otherwise you will
receive �Presentation Error�.

- Don�t forget the blank spaces.

Input
The input file contains a text (employee's first name), and two double precision
values, that are the seller's salary and the total value sold by him/her.

Output
Print the seller's total salary, according to the given example.
*/

#include <stdio.h>

int main() {
    char name[50];
    scanf("%s",&name);
    double sale, Hsale, H, J;

    scanf("%lf %lf", &sale, &Hsale);

    H = 0.15 * Hsale;
    J = sale + H;

    printf("TOTAL = R$ %.2f\n", J);

    return 0;
}
/*
#include <stdio.h>

int main() {
    int name;
    double sale, Hsale, H, J;

    scanf("%d %lf %lf", &name, &sale, &Hsale);



    printf("TOTAL = R$ %.2lf\n", sale+((15.0 / 100.0) * Hsale));

    return 0;
}*/