/*

Make a program that reads five integer values. Count how many of
 these values ​​are even and  print this information like the following
  example.

Input
The input will be 5 integer values.

Output
Print a message like the following example with all letters
 in lowercase, indicating how many even numbers were typed.

*/
#include <stdio.h>

int main() {

    int A,M=0;
    for(int i = 1;i<=5;i++){
        scanf("%d",&A);
        if(A % 2 == 0){
           M++;

        }

    }

     printf("%d valores pares\n",M);

    return 0;
}
