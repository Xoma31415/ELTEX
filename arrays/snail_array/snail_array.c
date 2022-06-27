#include <stdio.h>
#include <math.h>
#define SIZE 5

int main ()
{
    int nautilus_array[SIZE][SIZE];
    int last_val = pow(SIZE, 2);

    
    int str_index = 0, col_index = 0, begin_edge = 0, end_edge = SIZE - 1;
    int current_num = 1;

    for (;;)
    {
        if (str_index >= col_index)
        {
            for (; col_index < end_edge; col_index++)
            {
                nautilus_array[str_index][col_index] = current_num;
                current_num++;
            }
            if (current_num == last_val)
            {
                nautilus_array[str_index][col_index] = current_num;
                break;
            }
            
        }
        if (str_index == begin_edge && col_index == end_edge)
        {
            for (; str_index < end_edge; str_index++)
            {
                nautilus_array[str_index][col_index] = current_num;
                current_num++;
            }
        }
        if (str_index == end_edge && col_index == end_edge)
        {
            for (; col_index > begin_edge; col_index--)
            {
                nautilus_array[str_index][col_index]  = current_num;
                current_num++;
            }

        }
        if (str_index == end_edge && col_index == begin_edge)
        {
            begin_edge++;
            end_edge--;
            for (; str_index > begin_edge; str_index--)
            {
                nautilus_array[str_index][col_index] = current_num;
                current_num++;
            }
            
        }
        
    }

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("%3d  ", nautilus_array[i][j]);
        }
        printf("\n\n");
        
    }
    
        

    return 0;
}