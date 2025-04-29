/*
Peter is organizing an event in his University. The event will
 be in April month, beginning and finishing within April month.
  The problem is: Peter wants to calculate the event duration in
   seconds, knowing obviously the begin and the end time of the
    event.

You know that the event can take from few seconds to some days,
 so, you must help Peter to compute the total time corresponding
  to duration of the event.

Input
The first line of the input contains information about the beginning
 day of the event in the format: “Dia xx”. The next line contains
  the start time of the event in the format presented in the sample
   input. Follow 2 input lines with same format, corresponding to
    the end of the event.

Output
Your program must print the following output, one information by
 line, considering that if any information is null for example,
  the number 0 must be printed in place of W, X, Y or Z:

W dia(s)
X hora(s)
Y minuto(s)
Z segundo(s)

Obs: Consider that the event of the test case have the minimum
 duration of one minute. “dia” means day, “hora” means hour, “minuto” means minute and “Segundo” means second in Portuguese.
*/
#include<stdio.h>
int main (){

    //w=day,x=houre,Y=minite,z=second
    char i[5];
    int W1,W2,X1,X2,Y1,Y2,Z1,Z2;

    scanf("%s %d", i, &W1);
    scanf("%d : %d : %d", &X1, &Y1, &Z1);
    scanf("%s %d", i, &W2);
    scanf("%d : %d : %d", &X2, &Y2, &Z2);

    int H, g;

    H=W1*86400+X1*3600+Y1*60+Z1;
    g=W2*86400+X2*3600+Y2*60+Z2;

    int M;
    if (g > H) {
        M = g - H;
    }
     else {
        M = H - g;
    }



    int N = M / 86400;
    int N1 = M % 86400;
    int h = N1 / 3600;
    int h1 = N1 % 3600;
    int m = h1 / 60;
    int m1 = h1 % 60;
    int s = m1;

    printf("%d dia(s)\n", N);
    printf("%d hora(s)\n", h);
    printf("%d minuto(s)\n", m);
    printf("%d segundo(s)\n", s);


return 0;
}
