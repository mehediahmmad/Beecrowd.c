/*Read two integer values X and Y. Print the sum of all odd values between them.

Input
The input file contain two integer values.

Output
The program must print an integer number. This number is the sum off all odd values between both input values that must fit in an integer number.

Sample Input	Sample Output
6                   5
-5


*/







/*#include<stdio.h>
int main (){
    int a,b;
    scanf("%d %d",&a,&b);
    int sum = 0 ;

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    for ( a = a + 1; a < b; a++) {
        if (a % 2 != 0) {
            sum += a;
        }
    }

    printf("%d\n", sum);

    return 0;
}

*/
#include<stdio.h>
int main (){
    int a,b;
    scanf("%d %d",&a,&b);
    int sum = 0 ;

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    for ( a = a + 1; a < b; a++) {
        if (a % 2 != 0) {
            sum += a;
        }
    }

    printf("%d\n", sum);

    return 0;
}
