/*
Read an integer value corresponding to a person's
age (in days) and print it in years, months and days,
followed by its respective message �ano(s)�, �mes(es)�, �dia(s)�.

Note: only to facilitate the calculation, consider the
 whole year with 365 days and 30 days every month. In
 the cases of test there will never be a situation that
 allows 12 months and some days, like 360, 363 or 364. This
 is just an exercise for the purpose of testing simple
 mathematical reasoning.

Input
The input file contains 1 integer value.

Output
Print the output, like the following example.
*/
#include <stdio.h>

int main() {

    int j;
    scanf("%d",&j);
    int h = j / 365;
    int k = j % 365;
    int l = k / 30;
    int g = k % 30;

    printf("%d ano(s)\n", h);
    printf("%d mes(es)\n", l);
    printf("%d dia(s)\n", g);

    return 0;
}
