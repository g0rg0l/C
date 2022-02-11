#include <stdio.h>

int main() {

    int n, i, cur_number, sum = 0;

    printf("Input n:");
    if (scanf("%i", &n) != 1)
    {
        printf("Wrong input");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        if (scanf("%i", &cur_number) != 1)
        {
            printf("Wrong input");
            return 1;
        }
        sum += cur_number;
    }

    printf("Sum of your numbers is: %i", sum);

    return 0;
}
