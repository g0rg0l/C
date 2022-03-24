#include <stdio.h>

int main() {

    int pred, cur, count = 0, n;

    printf("enter a sequence:\n");
    scanf("%i", &n);

    int numbers[n];
    int i;

    for (i = 0; i < n; i++)
    {
        scanf("%i", &cur);
        numbers[i] = cur;

        if (i == 0) pred = cur;
        else
        {
            if (cur < pred)
            {
                count ++;
            }
            pred = cur;
        }
    }

    if (count != 0)
    {
        printf("indexes:\n");
        for (i = 1; i < n; i++)
        {
            if (numbers[i] < numbers[i - 1])
            {
                printf("%i, ", i + 1);
            }
        }
    }
    else
    {
        printf("no indexes\n");
    }

    printf("count is: %i", count);

    return 0;
}
