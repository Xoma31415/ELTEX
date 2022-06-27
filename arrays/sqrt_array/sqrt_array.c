#include <stdio.h>
#include <math.h>
#define N 16


int main()
{
    int string, column, counter = 1;
    column = sqrt(N);
    string = sqrt(N);
    int sqrt_array [string][column];

    for (int i = 0; i < string; i++)
        {
            for (int j = 0; j < column; j++)
            {
                sqrt_array[i][j] = counter;
                counter++;

                printf("%d ", sqrt_array[i][j]);
            }
            printf("\n");
            
        }
        
    
    return 0;
}