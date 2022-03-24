#include <stdio.h>

int reverse(int a)
{
    int b = 0;

    while (a > 0)
    {
        b = 10 * b + (a % 10);
        a /= 10;
    }

    return b;
}


int main() {

    printf("%i", reverse(12345));  // 54321

    return 0;
}
