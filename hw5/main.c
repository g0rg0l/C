#include <stdio.h>
#include "string.h"
#define LENGTH 256

 void reverse(char *line)
{
    int i, length = strlen(line);

    for (i = length; i >= 0; i--) putchar(line[i]);
    putchar('\n');
}


int main()
{
    char line[LENGTH];

    while (fgets(line, LENGTH, stdin)) reverse(line);
}