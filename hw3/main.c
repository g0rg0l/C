#include <stdio.h>

double minThreeFloat(double n1, double n2, double n3)
{
    if (n1 < n2) return (n1 < n3) ? n1 : n3;
    else return (n2 < n3) ? n2 : n3;
}


int main() {

    printf("%f", minThreeFloat(2.17, 1.53, 3.91));  // 1.53

    return 0;
}
