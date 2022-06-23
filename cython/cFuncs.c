#include "cFuncs.h"

int _factorial(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return _factorial(n - 1) * n;
    }
}

int _fibonacci(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return _fibonacci(n - 1) + _fibonacci(n - 2);
    }
}

double _get_pi()
{
    return M_PI;
}

double _get_e()
{
    return M_E;
}

double _sin(double angle)
{
    return sin(angle * _get_pi() / 180);
}

double _cos(double angle)
{
    return cos(angle * _get_pi() / 180);
}

int _combinations(int n, int k)
{
    if (k < n)
    {
        return (int) _factorial(n) / _factorial(k) / _factorial(n - k);
    }
    else if (k == n) return 1;
    else return 0;
}
