#include <stdio.h>

int getSpacesCount(char *str)
{
    int count = 0;

    while (*str)
    {
        if (*str == ' ') count++;
        str++;
    }

    return count;
}


int main() {

    char str[] = "Hello, world!";

    printf("%i", getSpacesCount(str));

    return 0;
}
