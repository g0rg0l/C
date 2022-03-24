#include <stdio.h>

int main() {

    int n, cur, maxCount = 0, count = 0;

    printf("enter sequence:\n");
    scanf("%i", &n);

    if (n != 0)
    {
        int i;
        for (i = 0; i < n; i++)
        {
            scanf("%i", &cur);

            if (cur % 2 == 0)
            {
                count ++;
                if (count > maxCount) maxCount = count;
            }
            else count = 0;
        }

        printf("max count is: %i\n", maxCount);
    }
    else
    {
        printf("no numbers in sequence\n");
    }


    return 0;
}
