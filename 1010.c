/*
In this problem, the task is to read a code of a product 1,
the number of units of product 1, the price for one unit of
product 1, the code of a product 2, the number of units of
product 2 and the price for one unit of product 2. After this,
calculate and show the amount to be paid.

Input
The input file contains two lines of data. In each line there will
be 3 values: two integers and a floating value with 2 digits after
the decimal point.

Output
The output file must be a message like the following example where
"Valor a pagar" means Value to Pay. Remember the space after ":" and
after "R$" symbol. The value must be presented with 2 digits after the point.
*/
#include<stdio.h>
int main(){
    int code1, unit1;

    double price1, H;

    int code2, unit2;

    double price2, G;

   scanf("%d %d %lf", &code1, &unit1, &price1);
   scanf("%d %d %lf", &code2, &unit2, &price2);


    H = unit1*price1;
    G = unit2*price2;
    printf("VALOR A PAGAR: R$ %.2lf\n",H+G );

return 0;
}
