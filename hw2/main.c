#include <stdio.h>

int main() {

    int count = 0, sum = 0, curNumber;

    scanf("%i", &curNumber);
    if (curNumber != 0)
    {
        sum += curNumber;
        count ++;
    }

    while (curNumber != 0)
    {
        scanf("%i", &curNumber);

        if (curNumber != 0)
        {
            sum += curNumber;
            count ++;
        }
    }

    printf("count: %i, sum: %i", count, sum);

    return 0;
}
