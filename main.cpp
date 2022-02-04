#include <iostream>
#include "problems/stringFunctions/stringFunctions.h"

int main()
{
    const int N = 1024;
    char str[N];

    gets(str);
    std::cout << checkForBracketsBalance(str);

    return 0;
}