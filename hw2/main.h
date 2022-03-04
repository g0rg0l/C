#ifndef INC_01_03_22_MAIN_H
#define INC_01_03_22_MAIN_H

#include "item.h"

void addToEnd(Item **listHead, int number);

void addToStart(Item **listHead, int number);

void show(const Item *listHead);

void pop(Item **listHead);

int has(const Item *listHead, int n);

void clear(Item **listHead);

int getLength(const Item *listHead);


#endif //INC_01_03_22_MAIN_H
