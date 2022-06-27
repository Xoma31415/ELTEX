#include <stdio.h>

int main()
{
    int rand_num = 270533154;
    char* ptr_byte = &rand_num;

    for (int i = 0; i < sizeof(int); i++)
    {
        printf("%d ", ptr_byte[i]);
    }

    printf("\n");

    ptr_byte[0] = 35;

    for (int i = 0; i < sizeof(int); i++)
    {
        printf("%d ", ptr_byte[i]);
    }

    printf("\n");

    printf("%d is your changed num\n\n", rand_num);
    return 0;
}