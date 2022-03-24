#include <stdio.h>
#include "stdbool.h"

int main() {

    int n;
    float pred, curNumber;
    bool flag = true;

    printf("enter sequence:\n");
    scanf("%i", &n);

    if (n != 0)
    {
        int i;
        for (i = 0; i < n; i++)
        {
            scanf("%f", &curNumber);

            if (i == 0) pred = curNumber;
            else
            {
                if (pred >= curNumber)
                {
                    flag = false;
                }
                pred = curNumber;
            }
        }
    }
    else
    {
        printf("no numbers in sequence\n");
    }

    if (flag) printf("the sequence increases\n");
    else printf("the sequence does not increase\n");

    return 0;
}
