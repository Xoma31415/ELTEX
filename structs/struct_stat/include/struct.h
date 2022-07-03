#include <stdio.h>
#define FULL_SIZE_STRUCT 100
#define FULL_LENGTH_L_NAME 22
#define FULL_LENGTH_F_NAME 22
#define FULL_LENGTH_NUM_PHONE 12

struct Directory_of_subscriber
{
    char last_name [FULL_LENGTH_L_NAME], first_name [FULL_LENGTH_F_NAME], phone_num [FULL_LENGTH_NUM_PHONE];
} Directory_of_subscriber;

int add_subscriber(struct Directory_of_subscriber *array_of_data);
int delete_subscriber(struct Directory_of_subscriber *array_of_data, int index_of_element_in_array);
int search_subscriber(struct Directory_of_subscriber *array_of_data, int index_of_element_in_array);
int print_element_of_list(struct Directory_of_subscriber *array_of_data);