#include <stdio.h>
#include "stdbool.h"

int main() {

    int n, min, curNumber;
    bool flag = true;

    scanf("%i", &n);

    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%i", &curNumber);
        if (flag)
        {
            flag = false;
            min = curNumber;
        }
        else if (curNumber < min) min = curNumber;
    }

    if (flag) printf("no numbers");
    else printf("%i", min);

    return 0;
}
