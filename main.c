#include <stdio.h>


int main() {

    int n, sum = 0, curNumber;

    scanf("%i", &n);

    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%i", &curNumber);
        sum += curNumber;
    }

    printf("%i", sum);

    return 0;
}
