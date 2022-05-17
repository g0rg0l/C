#include "LinkedList.h"

void addToStart(Item **listHead, int number)
{
    Item *item = (Item*) malloc(sizeof(Item));
    item->value = number;
    item->next = (*listHead);
    (*listHead) = item;
}  // Добавление элемента в начало списока

void show(const Item *listHead)
{
    printf("list:\n");

    if (!listHead) printf("empty.\n");
    else
    {
        while (listHead)
        {
            printf("%i -> ", listHead->value);
            listHead = listHead->next;
        }
        printf("\n");
    }
}  // Вывести список в консоль

void addToEnd(Item **listHead, int number)
{
    Item *item = (Item*) malloc(sizeof(Item));
    item->value = number;

    if (!(*listHead)) addToStart(listHead, number);
    else
    {
        Item *last = (*listHead);

        while (last->next) last = last->next;
        item->next = NULL;
        last->next = item;
    }
}  // Добавление элемента в конец списока

void pop(Item **listHead)
{
    if ((*listHead))
    {
        if (getLength((*listHead)) == 1)
        {
            clear(listHead);
        }
        else
        {
            Item *cur = (*listHead);

            while (cur->next->next) cur = cur->next;
            cur->next = NULL;
        }
    }
}  // Удалить последний элмент списка

int has(const Item *listHead, int n)
{
    if (!(listHead)) return 0;
    else
    {
        while (listHead)
        {
            if (listHead->value == n) return 1;
            listHead = listHead->next;
        }
        return 0;
    }
}  // Проверка на наличие элемента, со значением n в списке

void clear(Item **listHead)
{
    (*listHead) = NULL;
}  // Очистка списка

int getLength(const Item *listHead)
{
    int count = 0;

    while (listHead)
    {
        count++;
        listHead = listHead->next;
    }

    return count;
}

int isNumber(char *n) {

    int i = (int) strlen(n);
    int isnum = (i>0);
    while (i-- && isnum) {
        if (!(n[i] >= '0' && n[i] <= '9')) {
            isnum = 0;
        }
    }
    return isnum;
}
