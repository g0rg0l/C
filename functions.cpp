#include <iostream>
#include <cmath>

int getFactorial(int n) {
    if (n < 0) {
        return 0;
    }
    else if (n == 0) {
        return 1;
    }
    else {
        return getFactorial(n - 1) * n;
    }
}

int getSumOfNaturalNumbers(int n) {
    if (n <= 0)
    {
        return 0;
    }
    else
    {
        return getSumOfNaturalNumbers(n - 1) + n;
    }
}

void printMatrixOfNaturalNumbers() {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 5; j++) {
            std::cout << (j - 1) * 3 + i << " ";
        }
        std::cout << "" << std::endl;
    }
}

int getSumOfNaturalNumbersTestGoTo(int n) {
    int s = 0, i = 1;

    label:
    s += i++;

    if (n >= i) goto label;

    return s;
}

double getSin(double x)
{
    return sin(x * 3.1415 / 180);
}

void printMatrixByPnt()
{
    int array[4][5], *p;

    for (int i = 0; i < 4; i++) {
        p = array[i];
        for (int j = 0; j < 5; j++) {
            *(p + j) = 5 * i + j + 1;
            printf("%4d", array[i][j]);
        }
        printf("\n");
    }
}

void printScalarProduct()
{
    // Инициализация переменных
    int a[3];
    int b[3];
    int out = 0;

    // Ввод данных
    std::cout << "a:" << std::endl;
    for (int i = 0; i < 3; i++)
    {
        std::cin >> a[i];
    }

    std::cout << "b:" << std::endl;
    for (int i = 0; i < 3; i++)
    {
        std::cin >> b[i];
    }

    // Расчёт
    for (int i = 0; i < 3; i++)
    {
        out += a[i] * b[i];
    }

    //Вывод результата на экран
    std::cout << "a.b = " << out << std::endl;
}

void printVectorProduct()
{
    // Инициализация переменных
    int a[3];
    int b[3];
    int out[3];

    // Ввод данных
    std::cout << "a:" << std::endl;
    for (int i = 0; i < 3; i++)
    {
        std::cin >> a[i];
    }

    std::cout << "b:" << std::endl;
    for (int i = 0; i < 3; i++)
    {
        std::cin >> b[i];
    }

    //Расчёт
    for (int i = 0; i < 3; i++)
    {
        out[i] = a[(i + 1) % 3] * b[(i + 2) % 3] - a[(i + 2) % 3] * b[(i + 1) % 3];
    }

    // Вывод результата
    std::cout << "[a.b] =";
    for (int i = 0; i < 3; i++)
    {
        std::cout << " " << out[i];
    }

}

void printBubbleSort()
{
    int n = 20;
    int array[n];

    // Начальное сообщение и заполнение массива исходными данными
    std::cout << "Before:" << std::endl;
    for (int i = 0; i < n; i++)
    {
        array[i] = rand() % n;
        std::cout << array[i] << " ";
    }
    std::cout << "\n";

    // Сортировка
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                std::swap(array[j], array[j+1]);
            }
        }
    }

    // Окончательное сообщение и вывод отсортированного массива
    std::cout << "After:" << std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cout << array[i] << " ";
    }
}

void printMatrixProduct(int a[][3], int b[][3])
{
    int out[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            out[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                out[i][j] += a[i][k] * b[k][j];
            }
            std::cout << out[i][j] << " ";
        }
        std::cout << "\n";
    }
}

void printDetMatrix(int A[][2])
{
    int out = A[0][0] * A[1][1] - A[0][1] * A[1][0];

    std::cout << "det(A) = " << out << std::endl;
}
