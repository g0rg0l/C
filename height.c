#include <stdio.h>

int main() {

    double cm;

    printf("Input your height in centimetres:");
    scanf("%lf", &cm);

    printf("Your height in inches: %lf", cm * 2.54);

    return 0;
}
