#include <stdio.h>
#include "include/struct.h"


int main()
{
    int answer = 0, index_of_note = 0, searching_elem = 0;
    struct Directory_of_subscriber list_of_subscriber [FULL_SIZE_STRUCT];
    
    printf("Hello, User! Please, choose the number: \n\n");
    do
    {
        printf("1.Add subscriber\n2.Delete subscriber\n3.Search subscriber.\n4.Print the list\n0.Exit\n\n>_");
        scanf("%d", &answer);
        switch (answer)
        {
        case 1:
            add_subscriber(list_of_subscriber);
            break;
        case 2:
            printf("Enter the index of note: ");
            scanf("%d", &index_of_note);
            delete_subscriber(list_of_subscriber, index_of_note);
            break;
        case 3:
            printf("Enter the index of note: ");
            scanf("%d", &index_of_note);
            searching_elem = search_subscriber(list_of_subscriber, index_of_note);
            if (searching_elem == -1)
            {
                printf("This element is not exist!\n\n");
            } else
            {
                printf("The element %d is found.\n\n", searching_elem);
            }
            
            break;
        case 4:
            print_element_of_list(list_of_subscriber);
            break;
        case 0:
            printf("Good bye, User!\n\n");
            break;
        
        default:
            printf("Error!\n\n");
            break;
        }
    } while (answer != 0);
    
    return 0;
}