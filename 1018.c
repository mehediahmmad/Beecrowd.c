/*
In this problem you have to read an integer value
and calculate the smallest possible number of banknotes
in which the value may be decomposed. The possible banknotes
are 100, 50, 20, 10, 5, 2 and 1. Print the read value and the
list of banknotes.

Input
The input file contains an integer value N (0 < N < 1000000).

Output
Print the read number and the minimum quantity of each
 necessary banknotes in Portuguese language, as the given
 example. Do not forget to print the end of line after
 each line, otherwise you will receive �Presentation Error�.
*/
#include<stdio.h>
int main (){
    int i;
    scanf("%d",&i);
    printf("%d\n",i);

    printf("%d nota(s) de R$ 100,00\n",i/100);
    int v = i%100;

    printf("%d nota(s) de R$ 50,00\n",v/50);
    int n = v%50;

    printf("%d nota(s) de R$ 20,00\n",n/20);
    int m = n%20;

    printf("%d nota(s) de R$ 10,00\n",m/10);
    int j = m%10;

    printf("%d nota(s) de R$ 5,00\n",j/5);
    int k = j%5;

    printf("%d nota(s) de R$ 2,00\n",k/2);
    int l = k%2;

    printf("%d nota(s) de R$ 1,00\n",l/1);
    int s = l%1;



return 0;
}
