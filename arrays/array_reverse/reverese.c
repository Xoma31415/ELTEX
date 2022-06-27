#include <stdio.h>
#define N 5

int main()
{
    int begin_array[N];
    for (int i = 0; i < N; i++)
    {
        begin_array[i] = i + 1;
    }
    
    int reverse_array[N];
    for (int i = 0; i < N; i++)
    {
        int counter = i + 1;
        reverse_array[i] = begin_array[N-counter];
        printf(" %d ", reverse_array[i]);
        
    }

    printf("\n");
    
    

    return 0;
}