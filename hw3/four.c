#include <stdio.h>

int isPrime(int n)
{
    int d = 0;

    if (n < 2) return 0;
    else
    {
        int i;
        for (i = 2; i < n + 1; i++)
        {
            if (n % i == 0) d++;
        }

        return (d <= 1) ? 1 : 0;
    }
}


int main() {

    printf("%i", isPrime(7));  // 1 - true; 0 - false

    return 0;
}
