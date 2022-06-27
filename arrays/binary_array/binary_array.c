#include <stdio.h>
#include <math.h>
#define N 9

int main()
{
    int string, column, counter = sqrt(N) - 1;
    string = sqrt(N);
    column = sqrt(N);
    int binary_array [string][column];

    for (int i = 0; i < string; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if(j < counter)
            {
                binary_array[i][j] = 0;
            } else
            {
                binary_array [i][j] = 1;
            }

            printf(" %d ", binary_array[i][j]);
        }
        printf("\n\n");
        counter--;
        
    }
    
    return 0;
}