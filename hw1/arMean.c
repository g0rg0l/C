#include <stdio.h>


int main() {

    double n = 5, curNum, s = 0;

    printf("Input numbers:\n");

    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%lf", &curNum);
        s += curNum;
    }

    printf("An arithmetic mean is %f", s / n);

    return 0;
}
