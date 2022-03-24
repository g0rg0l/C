#include <stdio.h>

int main() {

    int n, count = 0, pnt = 0;

    printf("enter sequence:\n");
    scanf("%i", &n);
    int series[n];
    int numbers[n];

    if (n > 0)
    {
        int i;
        for (i = 0; i < n; i++) scanf("%i", &numbers[i]);

        if (n == 1)
        {
            series[pnt] = 1;
        }
        else
        {
            for (i = 0; i < n - 1; i++)
            {
                count ++;
                if (numbers[i] % 2 != numbers[i + 1] % 2)
                {
                    if (i == n - 2)
                    {
                        series[pnt] = count;
                        pnt ++;
                        series[pnt] = 1;
                    }
                    else
                    {
                        series[pnt] = count;
                        count = 0;
                        pnt ++;
                    }
                }
                else if (i == n - 2)
                {
                    count ++;
                    series[pnt] = count;
                }
            }
        }

        printf("series: \n");
        for (i = 0; i <= pnt; i++)
        {
            printf("%i ", series[i]);
        }
    }
    else
    {
        printf("no numbers in sequence\n");
    }

    return 0;
}
