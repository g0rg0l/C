#include <stdio.h>

int getSpecSymbols(char *str)
{
    int count = 0;

    while (*str)
    {
        if (*str == ' ' || *str == '\n' || *str == ',' ||
        *str == '.' || *str == '-' || *str == '/' ||
        *str == ';' || *str == '!' || *str == '?') count ++;

        str++;
    }

    return count;
}


int main() {

    char str[] = "Hello,\n world!";

    printf("%i", getSpecSymbols(str));

    return 0;
}
