#include <stdio.h>
#include <stdbool.h>

int main() {

    int n, i, curNumber, last;
    bool flag = true;

    printf("Input n:");
    if (scanf("%i", &n) != 1)
    {
        printf("Wrong input");
        return 1;
    }
    if (n == 0 || n == 1)
    {
        printf("n can't be zero or one.");
        return  1;
    }

    printf("Input sequence:\n");
    for (i = 0; i < n; i++)
    {
        if (scanf("%i", &curNumber) != 1)
        {
            printf("Wrong input");
            return 1;
        }

        if (i == 0)
        {
            last = curNumber;
        }
        else
        {
            if (curNumber < last) flag = false;
            last = curNumber;
        }
    }

    if (flag) printf("The sequence increases.");
    else printf("The sequence decreasing.");

    return 0;
}
