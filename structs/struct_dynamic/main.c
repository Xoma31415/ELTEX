#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <alloca.h>
#include "include/struct.h"


int main()
{
    int searching_elem = 0, index_of_elem = 0, answer = 0, counter = 0;
    struct Directory_of_subscriber *list = malloc(counter * sizeof(struct Directory_of_subscriber));

    printf("Hello, User! Choose the number: \n\n");

    do
    {
        printf("1. Add the subscriber\n2. Delete the subscriber\n3. Search the subscriber\n4. Print the list\n0. Exit\n");
        printf("\n\n>_");
        scanf("%d", &answer);
        switch (answer)
        {
        case 1:
            searching_elem = check_for_full_list(list, counter);
            if (searching_elem == -1)
            {
                add_subscriber(list, counter);
                
            } else
            {
                counter++;
                list = realloc(list, counter * sizeof(struct Directory_of_subscriber));
                add_subscriber(list, counter);
            }
            
            break;
        case 2:
            printf("Enter the index of list: ");
            scanf("%d", &index_of_elem);
            delete_subscriber(list, index_of_elem, counter);
            break;
        case 3:
            printf("Enter the index of list: ");
            scanf("%d", &index_of_elem);
            searching_elem = search_subscriber(list, index_of_elem, counter);
            if (searching_elem = -1)
            {
                printf("This element is not exist!\n\n");
            } else
            {
                printf("The element is found!\n\n");
            }
            break;
        case 4:
            print_list(list, counter);
            break;
        case 0:
            printf("Good bye, User!\n\n");
            break;
        default:
            printf("Error!\n\n");
            break;
        }

    } while (answer != 0);
    


    free(list);
    return 0;
}