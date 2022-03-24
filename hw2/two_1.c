#include <stdio.h>
#include "stdbool.h"

int main() {

    int n, index = -1;
    float k, curNumber;
    bool flag = false;

    printf("enter k:\n");
    scanf("%f", &k);

    printf("enter sequence:\n");
    scanf("%i", &n);
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%f", &curNumber);
        if (curNumber > k && !flag)
        {
            index = i + 1;
            flag = true;
        }
    }

    if (index == -1) printf("no numbers in sequence that bigger than k");
    else printf("index of first number that bigger than k is: %i", index);

    return 0;
}
