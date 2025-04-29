/*
Make a program that reads 3 integer values and present the greatest one followed by the message "eh o maior". Use the following formula:

Maior AB = (a+b+abs(a-b)) /2

Input
The input file contains 3 integer values.

Output
Print the greatest of these three values followed by a space and the message “eh o maior”.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int maiorAB = (a + b + abs(a - b)) / 2;           // the formula mentioned above.
    int maior = (maiorAB + c + abs(maiorAB - c)) / 2; // using the same formula for three numbers.

    printf("%d eh o maior\n", maior);

    return 0;
}

/*
#include <stdio.h>

// Function to find the greatest number using the given formula
int maior(int a, int b) {
    return (a + b + abs(a - b)) / 2;
}

int main() {
    int A, B, C;

    // Reading input
    scanf("%d %d %d", &A, &B, &C);

    // Finding the greatest number
    int greatest = maior(maior(A, B), C);

    // Printing the result
    printf("%d eh o maior\n", greatest);

    return 0;
}*/
