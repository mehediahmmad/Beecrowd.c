/*
Read a value of floating point with two decimal places.
This represents a monetary value. After this, calculate
the smallest possible number of notes and coins on which
the value can be decomposed. The considered notes are of
100, 50, 20, 10, 5, 2. The possible coins are of 1, 0.50,
0.25, 0.10, 0.05 and 0.01. Print the message “NOTAS:” followed
by the list of notes and the message “MOEDAS:” followed by the
list of coins.

Input
The input file contains a value of floating point N (0 ≤ N ≤ 1000000.00).

Output
Print the minimum quantity of banknotes and coins necessary to
change the initial value, as the given example.
*/
#include<stdio.h>
#include<math.h>

/*Input Sample	Output Sample
576.73

NOTAS:
5 nota(s) de R$ 100.00
1 nota(s) de R$ 50.00
1 nota(s) de R$ 20.00
0 nota(s) de R$ 10.00
1 nota(s) de R$ 5.00
0 nota(s) de R$ 2.00
MOEDAS:
1 moeda(s) de R$ 1.00
1 moeda(s) de R$ 0.50
0 moeda(s) de R$ 0.25
2 moeda(s) de R$ 0.10
0 moeda(s) de R$ 0.05
3 moeda(s) de R$ 0.01
*/


int main (){
    double x;
    scanf("%lf",&x);
    x =x*100;
    int i;
    i=x;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", i / 10000);
    int v = i % 10000;
    printf("%d nota(s) de R$ 50.00\n", v / 5000);
    int n = v % 5000;
    printf("%d nota(s) de R$ 20.00\n", n / 2000);
    int m = n % 2000;
    printf("%d nota(s) de R$ 10.00\n", m / 1000);
    int j = m % 1000;
    printf("%d nota(s) de R$ 5.00\n", j / 500);
    int k = j % 500;
    printf("%d nota(s) de R$ 2.00\n", k / 200);
    int l = k % 200;

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", l / 100);
    int s = l % 100;
    printf("%d moeda(s) de R$ 0.50\n", s / 50);
    int q = s % 50;
    printf("%d moeda(s) de R$ 0.25\n", q / 25);
    int w = q % 25;
    printf("%d moeda(s) de R$ 0.10\n", w / 10);
    int e = w % 10;
    printf("%d moeda(s) de R$ 0.05\n", e / 5);
    int r = e % 5;
    printf("%d moeda(s) de R$ 0.01\n", r / 1);

    return 0;
}
