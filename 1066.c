/*
Make a program that reads five integer values. Count how many   of
 these values are even, odd, positive and negative. Print these
  information like following example.

Input
The input will be 5 integer values.

Output
Print a message like the following example with all letters in
 lowercase, indicating how many of these values ​​are even, odd,
  positive and negative.
*/
#include <stdio.h>

int main() {

    int A, P = 0, N = 0, E = 0, O = 0;

    for (int i = 1; i <= 5; i++) {
        scanf("%d", &A);

        if (A % 2 == 0) {
            E++;
        }

        if (A % 2 != 0) {
            O++;
        }

        if (A > 0) {
            P++;
        }

        if (A < 0) {
            N++;
        }
    }
    printf("%d valor(es) par(es)\n",E);
    printf("%d valor(es) impar(es)\n",O);
    printf("%d valor(es) positivo(s)\n",P);
    printf("%d valor(es) negativo(s)\n",N);

    return 0;
}
