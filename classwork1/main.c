#include <stdio.h>
#include <limits.h>

int main() {

    int n, i, cur_number, min = INT_MAX;

    printf("Input n:");
    if (scanf("%i", &n) != 1)
    {
        printf("Wrong input");
        return 1;
    }
    else if (n == 0)
    {
        printf("n can't be zero");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        if (scanf("%i", &cur_number) != 1)
        {
            printf("Wrong input");
            return 1;
        }
        if (cur_number < min) min = cur_number;
    }

    printf("Min of your numbers is: %i", min);

    return 0;
}
