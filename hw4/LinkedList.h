#ifndef INC_01_03_22_LINKEDLIST_H
#define INC_01_03_22_LINKEDLIST_H

#include "item.h"
#include <malloc.h>
#include "string.h"
#include "stdio.h"

void addToEnd(Item **listHead, int number); // Добавить элемент в конец списка

void addToStart(Item **listHead, int number); // Добавить элемент в начало списка

void show(const Item *listHead); // Вывести список

void pop(Item **listHead); // Удалить последний элемент списка

int has(const Item *listHead, int n); // Проверить присутствие элемента в списке по значению

void clear(Item **listHead); // Удалить список

int getLength(const Item *listHead); // Получить количество элементов списка

int isNumber(char *n);

#endif //INC_01_03_22_LINKEDLIST_H
