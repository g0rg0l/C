#ifndef INC_01_03_22_ITEM_H
#define INC_01_03_22_ITEM_H

typedef struct Item  // Структура, описывающая элемент списка
{
    int value;
    struct Item *next;

} Item;

#endif //INC_01_03_22_ITEM_H
