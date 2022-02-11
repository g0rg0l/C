#include <stdio.h>

int main() {

    int n, i, k, indexFirstMore = 0;
    double curNumber;

    printf("Input k:");
    if (scanf("%i", &k) != 1)
    {
        printf("Wrong input");
        return 1;
    }

    printf("Input n:");
    if (scanf("%i", &n) != 1)
    {
        printf("Wrong input");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        if (scanf("%lf", &curNumber) != 1)
        {
            printf("Wrong input");
            return 1;
        }
        if (curNumber > k && !indexFirstMore) indexFirstMore = i + 1;
    }

    printf("Index of first number that more than k is: %i", indexFirstMore);

    return 0;
}
