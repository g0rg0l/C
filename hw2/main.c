#include <stdio.h>
#include <malloc.h>
#include "main.h"


int main() {

    int answer = 0;
    int result = 0;
    Item *head = NULL;

    int number;

    while (answer != 7)
    {
        printf("Input number of action:\n");
        printf("    1) create first element of list\n");
        printf("    2) add element to the end of the list\n");
        printf("    3) delete element from end of the list\n");
        printf("    4) delete list\n");
        printf("    5) search element in list\n");
        printf("    6) show list\n");
        printf("    7) exit\n");
        scanf("%i",&answer);

        switch (answer)
        {
            case 1:
                printf("Input value of future item:\n");
                scanf("%i", &number);
                clear(&head);
                addToStart(&head, number);
                break;
            case 2:
                printf("Input value of future item:\n");
                scanf("%i", &number);
                addToEnd(&head, number);
                break;
            case 3:
                pop(&head);
                break;
            case 4:
                clear(&head);
                break;
            case 5:
                printf("Input value of searching item:\n");
                scanf("%i", &number);

                result = has(head, number);
                if (result) printf("There is an element in the list.");
                else printf("There is no an element in the list.");
                break;
            case 6:
                show(head);
                break;
        }

    }

    return 0;
}

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
}  // Получение длинны списка
