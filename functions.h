#ifndef BOOK_ABOUT_CPP_FUNCTIONS_H
#define BOOK_ABOUT_CPP_FUNCTIONS_H

int getSumOfNaturalNumbers(int n); // Рекурсивная функция расчёта суммы n-натуральных чисел

int getSumOfNaturalNumbersTestGoTo(int n); // функция расчёта суммы n-натуральных чисел, реализованная на go to

void printMatrixOfNaturalNumbers(); // функция, выводящая матрицу натуральных чисел (3x5)

int getFactorial(int n); // функция, расчитывающая фаториал числа n

double getSin(double x); // функция, расчитывающая синус угла x

void printMatrixByPnt(); // функция, выводящая матрицу чисел, используя указатели

void printScalarProduct(); // функция, выводящая скалярное произведение введённых с клавиатуры векторов

void printVectorProduct(); // функция, выводящая векторное произведение введённых с клавиатуры векторов

void printBubbleSort(); // функция, сортирующая массив методом пузырька

void printMatrixProduct(int a[][3], int b[][3]); // функция, вычисляющая произведение матриц (3x3) * (3x3)

void printDetMatrix(int A[][2]); // функция, вычисляющая определитель матрицы (2x2)

#endif //BOOK_ABOUT_CPP_FUNCTIONS_H
