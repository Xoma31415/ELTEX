#include <stdio.h>
#define FULL_SIZE_OF_F_NAME 22
#define FULL_SIZE_OF_L_NAME 22
#define FULL_SIZE_OF_PHONE_NUM 12

struct Directory_of_subscriber
{
    char frist_name [FULL_SIZE_OF_F_NAME];
    char last_name [FULL_SIZE_OF_L_NAME];
    char phone_number [FULL_SIZE_OF_PHONE_NUM];

}Directory_of_subscriber;

int add_subscriber(struct Directory_of_subscriber *array_of_data, int current_size);
int delete_subscriber(struct Directory_of_subscriber *array_of_data, int index_of_elem_in_array, int current_size);
int search_subscriber(struct Directory_of_subscriber *array_of_data, int index_of_elem_in_array, int current_size);
int print_list(struct Directory_of_subscriber *array_of_data, int current_size);
int check_for_full_list(struct Directory_of_subscriber *array_of_data, int current_size);
