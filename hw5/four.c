#include <stdio.h>
#include <string.h>
#define LENGTH 256


int main()
{
    char line[LENGTH];

    while (fgets(line, LENGTH, stdin)) if (strlen(line) > 80) puts(line);
}
