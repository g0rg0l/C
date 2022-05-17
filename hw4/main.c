#include <stdio.h>
#include "LinkedList.h"

int main() {

    int result;

    Item *head = NULL;
    char number[100000];

    char answer[100000];

    while (atoi(answer) != 7)
    {
        printf("Input number of action:\n");
        printf("    1) create first element of list\n");
        printf("    2) add element to the end of the list\n");
        printf("    3) delete element from end of the list\n");
        printf("    4) delete list\n");
        printf("    5) search element in list\n");
        printf("    6) show list\n");
        printf("    7) exit\n");

        scanf("%s",answer);

        if (isNumber(answer))
        {
            switch (atoi(answer))
            {
                case 1:
                    printf("Input value of future item:\n");
                    scanf("%s", number);
                    if (isNumber(number))
                    {
                        clear(&head);
                        addToStart(&head, atoi(number));
                    }
                    else printf("!!! error value !!!\n");

                    break;
                case 2:
                    printf("Input value of future item:\n");
                    scanf("%s", number);

                    if (isNumber(number)) addToEnd(&head, atoi(number));
                    else printf("!!! error value !!!\n");

                    break;
                case 3:
                    pop(&head);

                    break;
                case 4:
                    clear(&head);

                    break;
                case 5:
                    printf("Input value of searching item:\n");
                    scanf("%s", number);

                    if (isNumber(number))
                    {
                        result = has(head, atoi(number));
                        if (result) printf("There is an element in the list.\n");
                        else printf("There is no an element in the list.\n");
                    }
                    else printf("!!! error value !!!\n");

                    break;
                case 6:
                    show(head);

                    break;
            }
        }
        else printf("!!! error value !!!\n");
    }

    return 0;
}
