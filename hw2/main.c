#include <stdio.h>
#include "stdbool.h"

int main() {

    int n, min, cur, indexOfMin = 0;

    printf("enter sequence:\n");
    scanf("%i", &n);

    if (n != 0)
    {
        int i;
        for (i = 0; i < n; i++)
        {
            scanf("%i", &cur);

            if (i == 0) min = cur;
            else if (cur < min)
            {
                min = cur;
                indexOfMin = i;
            }
        }

        printf("count is: %i\n", indexOfMin);
    }
    else
    {
        printf("no numbers in sequence\n");
    }


    return 0;
}
