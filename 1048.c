/*
The company ABC decided to give a salary increase to its employees, according to the following table:


Salary	Readjustment Rate
0 - 400.00
400.01 - 800.00
800.01 - 1200.00
1200.01 - 2000.00
Above 2000.00

15%
12%
10%
7%
4%


Read the employee's salary, calculate and print the new employee's salary,
as well the money earned and the increase percentual obtained by the employee,
with corresponding messages in Portuguese, as the below example.
Input
The input contains only a floating-point number, with 2 digits after the decimal point.

Output
Print 3 messages followed by the corresponding numbers (see example) informing
the new salary, the among of money earned (both must be shown with 2 decimal places)
and the percentual obtained by the employee. Note:
Novo salario:  means "New Salary"
Reajuste ganho: means "Money earned"
Em percentual: means "In percentage"
*/
#include <stdio.h>

int main() {
    float a,salary,b;
    int p;
    char c ='%';
    scanf("%f",&a);
    if(a>=0.00 && a<=400.00){
        b = (a*15) / 100;
        salary = a + b;
        p = 15;
    }
    else if(a>400.00 && a<=800.00){
        b = (a*12) / 100;
        salary = a + b;
        p = 12;
    }
    else if(a>800.00 && a<=1200.00){
        b = (a*10) / 100;
        salary = a + b;
        p = 10;
    }
    else if(a>1200.00 && a<=2000.00){
        b = (a*7) / 100;
        salary = a + b;
        p = 7;
    }
    else if(a>1200.00 && a<=800.00){
        b = (a*12) / 100;
        salary = a + b;
        p = 12;
    }
    else if(a>2000.00){
        b = (a*4) / 100;
        salary = a + b;
        p = 4;
    }


    printf("Novo salario: %.2f\n", salary);
    printf("Reajuste ganho: %.2f\n", b);
    printf("Em percentual: %d %c\n",p,c);

    return 0;
}
