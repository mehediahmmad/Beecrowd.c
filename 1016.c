/*
Two cars (X and Y) leave in the same direction.
The car X leaves with a constant speed of 60 km/h
 and the car Y leaves with a constant speed of 90 km / h.

In one hour (60 minutes) the car Y can get a
distance of 30 kilometers from the X car, in other
 words, it can get away one kilometer for each 2 minutes.

Read the distance (in km) and calculate how long it
takes (in minutes) for the car Y to take this distance
in relation to the other car.

Input
The input file contains 1 integer value.

Output
Print the necessary time followed by the message
"minutos" that means minutes in Portuguese.

প্রথমে সমস্যার মূল কথা:

দুটি গাড়ি আছে:

X গাড়ি: গতি 60 কিমি/ঘণ্টা

Y গাড়ি: গতি 90 কিমি/ঘণ্টা

দুটোই একই দিক দিয়ে চলছে।

প্রতি ঘণ্টায়, Y গাড়ি X গাড়ির থেকে 30 কিমি এগিয়ে যায়।
(কারণ 90 - 60 = 30 কিমি/ঘণ্টা গতি পার্থক্য।)

অর্থাৎ, Y গাড়ি প্রতি 2 মিনিটে 1 কিমি এগিয়ে যায়।

সমস্যাটা কী বলছে?
তোমাকে একটা দূরত্ব (km) ইনপুট হিসেবে দেওয়া হবে।
তুমি বের করবে কত মিনিট লাগবে Y গাড়ির X গাড়ির থেকে ঐ দূরত্ব এগিয়ে যেতে।



*/
#include <stdio.h>

int main() {

    int X;
    scanf("%d", &X);
    printf("%d minutos\n", X*2);

    return 0;
}
