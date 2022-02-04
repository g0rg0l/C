#include <stdio.h>

int main() {

    int age;

    printf("Input your age in years:");
    scanf("%i", &age);

    printf("You are %i days old.", age * 365);

    return 0;
}
