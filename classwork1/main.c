#include <stdio.h>

int main() {

    int count = 0, cur_number, sum = 0;

    printf("Enter numbers: (any letter when you'd like to stop).\n");

    for (;;)
    {
        if (scanf("%i", &cur_number) != 1) break;

        count++;
        sum += cur_number;
    }

    printf("You entered %i numbers.\n", count);
    printf("Sum of your numbers is: %i", sum);

    return 0;
}
