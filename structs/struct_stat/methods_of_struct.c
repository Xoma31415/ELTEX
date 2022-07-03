#include "include/struct.h"
#include <string.h>


int add_subscriber(struct Directory_of_subscriber *array_of_data)
{
    int save_index_for_add = 0, check_for_empty_first_name = 0, check_for_empty_last_name = 0, check_for_empty_phone_num = 0;
    for (int i = 0; i <= FULL_SIZE_STRUCT; i++)
    {
        check_for_empty_first_name = strlen(array_of_data[i].first_name);
        check_for_empty_last_name = strlen(array_of_data[i].last_name);
        check_for_empty_phone_num = strlen(array_of_data[i].phone_num);

        if (i == FULL_SIZE_STRUCT && ((check_for_empty_first_name != 0) && (check_for_empty_last_name != 0) && (check_for_empty_phone_num != 0)))
        {
            printf("Error: list is full!\n\n");
            return 0;
        }

        if ((check_for_empty_first_name == 0) && (check_for_empty_last_name == 0) && (check_for_empty_phone_num == 0))
        {
            save_index_for_add = i;
            break;
        }
    }
    printf("Enter the last name: ");
    scanf("%s", array_of_data[save_index_for_add].last_name);
    printf("Enter the first name: ");
    scanf("%s", array_of_data[save_index_for_add].first_name);
    printf("Enter the phone number: ");
    scanf("%s", array_of_data[save_index_for_add].phone_num);
    printf("\n\n");

    return 0;
}

int delete_subscriber(struct Directory_of_subscriber *array_of_data, int index_of_element_in_array)
{
    int searching_value = search_subscriber(array_of_data, index_of_element_in_array);
    int compare_first_field_of_struct = 0, compare_second_field_of_struct = 0;

    if (searching_value == -1)
    {
        printf("The element is not exist!\n\n");
        return 0;
    } 
    else
    {
        for (int i = searching_value; i <= FULL_SIZE_STRUCT; i++)
        {
            if (i == FULL_SIZE_STRUCT)
            {
                for (int j = 0; j <= FULL_LENGTH_L_NAME; j++)
                {
                    array_of_data[i].last_name[j] = '\0';
                    array_of_data[i].first_name[j] = '\0';

                }
                for (int j = 0; j <= FULL_LENGTH_NUM_PHONE; j++)
                {
                    array_of_data[i].phone_num[j] = '\0';
                }
                break;
            }

            compare_first_field_of_struct = strlen(array_of_data[i].first_name);
            compare_second_field_of_struct = strlen(array_of_data[i+1].first_name);

            if (compare_first_field_of_struct > compare_second_field_of_struct)
            {
                for (int j = 0; j <= compare_second_field_of_struct; j++)
                {
                    array_of_data[i].first_name[j] = array_of_data[i+1].first_name[j];
                }                
            } else
            {
                for (int j = 0; j <= compare_first_field_of_struct; j++)
                {
                    array_of_data[i].first_name[j] = array_of_data[i+1].first_name[j];
                }   
            }

            compare_first_field_of_struct = strlen(array_of_data[i].last_name);
            compare_second_field_of_struct = strlen(array_of_data[i+1].last_name);

            if (compare_first_field_of_struct > compare_second_field_of_struct)
            {
                for (int j = 0; j <= compare_second_field_of_struct; j++)
                {
                    array_of_data[i].last_name[j] = array_of_data[i+1].last_name[j];
                }
                
            } else
            {
                for (int j = 0; j <= compare_first_field_of_struct; j++)
                {
                    array_of_data[i].last_name[j] = array_of_data[i+1].last_name[j];
                }
            }

            compare_first_field_of_struct = strlen(array_of_data[i].phone_num);
            compare_second_field_of_struct = strlen(array_of_data[i+1].phone_num);

            if (compare_first_field_of_struct > compare_second_field_of_struct)
            {
                for (int j = 0; j <= compare_second_field_of_struct; j++)
                {
                    array_of_data[i].phone_num[j] = array_of_data[i+1].phone_num[j];
                }
                
            } else
            {
                for (int j = 0; j <= compare_first_field_of_struct; j++)
                {
                    array_of_data[i].phone_num[j] = array_of_data[i+1].phone_num[j];
                }
                

            }
            
        }
        
    }
    
    return 0;

}

int search_subscriber(struct Directory_of_subscriber *array_of_data, int index_of_element_in_array)
{
    int check_for_empty_first_name = strlen(array_of_data[index_of_element_in_array].first_name), check_for_empty_last_name = strlen(array_of_data[index_of_element_in_array].last_name), check_for_empty_phone_num = strlen(array_of_data[index_of_element_in_array].phone_num);
    if ((index_of_element_in_array > FULL_SIZE_STRUCT) || ((check_for_empty_first_name == 0) && (check_for_empty_last_name == 0) && (check_for_empty_phone_num == 0)))
    {
        return -1;
    } else
    {
        return index_of_element_in_array;
    }

    return 0;
    
}

int print_element_of_list(struct Directory_of_subscriber *array_of_data)
{
    int check_for_empty_first_name = 0, check_for_empty_last_name = 0, check_for_empty_phone_num = 0;
    printf("First Name | Last Name | Phone number \n");
    for (int i = 0; i <= FULL_SIZE_STRUCT; i++)
    {
        check_for_empty_first_name = strlen(array_of_data[i].first_name);
        check_for_empty_last_name = strlen(array_of_data[i].last_name);
        check_for_empty_phone_num = strlen(array_of_data[i].phone_num);

        if ((check_for_empty_first_name == 0) && (check_for_empty_last_name == 0) && (check_for_empty_phone_num == 0))
        {
            return 0;
        } else
        {
            printf("%d.1 %-3s ", i, array_of_data[i].first_name);
            printf("%d.2 %-3s ", i, array_of_data[i].last_name);
            printf("%d.3 %-3s", i, array_of_data[i].phone_num);
        }

        printf("\n\n");
    }

    return 0;
}