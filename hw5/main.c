#include <stdio.h>

int main()
{
    int symbol;

    while ((symbol = getchar()) != EOF)
    {
        if (symbol == ' ') putchar('\n');
        else putchar(symbol);
    }

    return 0;
}
