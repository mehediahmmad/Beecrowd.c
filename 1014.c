/*
Calculate a car's average consumption being provided the total distance
traveled (in Km) and the spent fuel total (in liters).

Input
The input file contains two values: one integer value X representing the total
distance (in Km) and the second one is a floating point number Y  representing
the spent fuel total, with a digit after the decimal point.

Output
Present a value that represents the average consumption of a car with 3 digits
after the decimal point, followed by the message "km/l".

তোমাকে গাড়ির মোট দূরত্ব (X কিমি) আর মোট জ্বালানী ব্যবহার (Y লিটার) দেওয়া হবে।
এরপর তোমাকে হিসাব করতে হবে গড় খরচ:
👉 কত কিমি গাড়ি চলেছে প্রতি লিটার জ্বালানিতে।

*/
#include <stdio.h>

int main() {

    double a,b;
    scanf("%lf %lf",&a,&b);
    printf("%.3lf km/l\n",a/b);  // S = V * T  formula

    return 0;
}
