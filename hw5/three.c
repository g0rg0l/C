#include <stdio.h>

int main()
{
    int symbol;

    while ((symbol = getchar()) != EOF)
    {
        if (symbol == ' ') printf("\n");
        else printf("-");
    }
}
