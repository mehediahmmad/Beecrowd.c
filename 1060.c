/*
Write a program that reads 6 numbers. These numbers will only
 be positive or negative (disregard null values). Print the
  total number of positive numbers.

Input
Six numbers, positive and/or negative.

Output
Print a message with the total number of positive numbers.
*/
#include<stdio.h>

int main(){

    int i,n=0;
    float a;

    for(i=1 ; i<=6 ; i++){
        scanf("%f",&a);
        if(a >= 0)n++;
    }
    printf("%d valores positivos\n",n);
    return 0;
}
