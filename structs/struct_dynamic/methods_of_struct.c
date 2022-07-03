#include "include/struct.h"
#include <string.h>

int add_subscriber(struct Directory_of_subscriber *array_of_data, int current_size)
{
    printf("Enter the first name: ");
    scanf("%s", array_of_data[current_size - 1].frist_name);
    printf("Enter the last name: ");
    scanf("%s", array_of_data[current_size - 1].last_name);
    printf("Enter the phine number: ");
    scanf("%s", array_of_data[current_size - 1].phone_number);

    printf("\n\n");

    return 0;
}

int delete_subscriber(struct Directory_of_subscriber *array_of_data, int index_of_elem_in_array, int current_size)
{
    int searching_elem = search_subscriber(array_of_data, index_of_elem_in_array, current_size);
    int compare_first_elem = 0, compare_second_elem = 0;

    if (searching_elem == -1)
    {
        printf("This element is not exist!\n\n");
        return 0;
    } else
    {
        for (int i = searching_elem; i < current_size; i++)
        {
            if (i == current_size - 1)
            {
                for (int j = 0; j <= FULL_SIZE_OF_F_NAME; j++)
                {
                    array_of_data[i].frist_name[j] = '\0';
                }

                for (int j = 0; j <= FULL_SIZE_OF_L_NAME; j++)
                {
                    array_of_data[i].last_name[j] = '\0';
                }

                for (int j = 0; j <= FULL_SIZE_OF_PHONE_NUM; j++)
                {
                    array_of_data[i].phone_number[j] = '\0';
                }
            }

            compare_first_elem = strlen(array_of_data[i].frist_name);
            compare_second_elem = strlen(array_of_data[i+1].frist_name);
            if (compare_first_elem > compare_second_elem)
            {
                for (int j = 0; j <= compare_second_elem; j++)
                {
                    array_of_data[i].frist_name[j] = array_of_data[i+1].frist_name[j];
                }
                
            } else
            {
                for (int j = 0; j <= compare_first_elem; j++)
                {
                    array_of_data[i].frist_name[j] = array_of_data[i+1].frist_name[j];
                }
                
            }
            
            compare_first_elem = strlen(array_of_data[i].last_name);
            compare_second_elem = strlen(array_of_data[i+1].last_name);
            if (compare_first_elem > compare_second_elem)
            {
                for (int j = 0; j <= compare_second_elem; j++)
                {
                    array_of_data[i].last_name[j] = array_of_data[i+1].last_name[j];
                }
                
            } else
            {
                for (int j = 0; j <= compare_first_elem; j++)
                {
                    array_of_data[i].last_name[j] = array_of_data[i+1].last_name[j];
                }
                
            }

            compare_first_elem = strlen(array_of_data[i].phone_number);
            compare_second_elem = strlen(array_of_data[i+1].phone_number);
            if (compare_first_elem > compare_second_elem)
            {
                for (int j = 0; j <= compare_second_elem; j++)
                {
                    array_of_data[i].phone_number[j] = array_of_data[i+1].phone_number[j];
                }
                
            } else
            {
                for (int j = 0; j <= compare_first_elem; j++)
                {
                    array_of_data[i].phone_number[j] = array_of_data[i+1].phone_number[j];
                }
                
            }
            
            
        }
        
    }
    return 0;
}

int search_subscriber(struct Directory_of_subscriber *array_of_data, int index_of_elem_in_array, int current_size)
{
    int check_for_empty_first_name = 0, check_for_empty_last_name = 0, check_for_empty_phone_num = 0;
    for (int i = 0; i <= current_size; i++)
    {
        check_for_empty_first_name = strlen(array_of_data[i].frist_name);
        check_for_empty_last_name = strlen(array_of_data[i].last_name);
        check_for_empty_phone_num = strlen(array_of_data[i].phone_number);
        if (index_of_elem_in_array > current_size || (check_for_empty_first_name == 0) && (check_for_empty_last_name == 0) && (check_for_empty_phone_num == 0))
        {
            return -1;
        }

        if (i == index_of_elem_in_array)
        {
            return index_of_elem_in_array;
        }
        
        
    }
    
    return 0;
}

int print_list(struct Directory_of_subscriber *array_of_data, int current_size)
{
    int check_for_empty_first_name = 0, check_for_empty_last_name = 0, check_for_empty_phone_num = 0;
    for (int i = 0; i < current_size; i++)
    {
        check_for_empty_first_name = strlen(array_of_data[i].frist_name);
        check_for_empty_last_name = strlen(array_of_data[i].last_name);
        check_for_empty_phone_num = strlen(array_of_data[i].phone_number);

        if ((check_for_empty_first_name == 0) && (check_for_empty_last_name == 0) && (check_for_empty_phone_num == 0))
        {
            break;
        } else
        {
            printf("%d.1 %s\n", i, array_of_data[i].frist_name);
            printf("%d.2 %s\n", i, array_of_data[i].last_name);
            printf("%d.3 %s\n\n", i, array_of_data[i].phone_number);
        }
        
    }
    

}

int check_for_full_list(struct Directory_of_subscriber *array_of_data, int current_size)
{
    int check_for_empty_first_name = 0, check_for_empty_last_name = 0, check_for_empty_phone_num = 0;
    for (int i = 0; i < current_size; i++)
    {
        check_for_empty_first_name = strlen(array_of_data[i].frist_name);
        check_for_empty_last_name = strlen(array_of_data[i].last_name);
        check_for_empty_phone_num = strlen(array_of_data[i].phone_number);

        if ((check_for_empty_first_name == 0) && (check_for_empty_last_name == 0) && (check_for_empty_phone_num == 0))
        {
            return -1;
        }
           
    }

    return 0;
    
}