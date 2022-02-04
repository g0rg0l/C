#include <stdio.h>

int main() {

    int n;

    printf("Input a number:");
    scanf("%i", &n);

    if (n % 2 == 1)
    {
        printf("Number is odd.\n");
    }
    else
    {
        printf("Number is even.\n");
    }

    return 0;
}
