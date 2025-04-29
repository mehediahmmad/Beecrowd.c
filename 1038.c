/*
Using the following table, write a program that reads a code and the amount
 of an item. After, print the value to pay. This is a very simple program with
  the only intention of practice of selection commands.

 // https://resources.urionlinejudge.com.br/gallery/images/problems/UOJ_1038_en.png

Input
The input file contains two integer numbers X and Y. X is the product code and
 Y is the quantity of this item according to the above table.

Output
The output must be a message "Total: R$ " followed by the total value to
 be paid, with 2 digits after the decimal point.
*/

#include <stdio.h>

int main() {

    int c,q;
    scanf("%d %d",&c, &q);

    if(c == 1){
        printf("Total: R$ %.2lf\n",4.00*q);
    }
    else if(c == 2){
        printf("Total: R$ %.2lf\n",4.50*q);
    }else if(c == 3){
        printf("Total: R$ %.2lf\n",5.00*q);
    }else if(c == 4){
        printf("Total: R$ %.2lf\n",2.00*q);
    }else if(c == 5){
        printf("Total: R$ %.2lf\n",1.500*q);
    }

    return 0;
}
