#include <stdio.h>


int main()
{
    int first_number = 0, second_number = 0, rezult_of_oper = 0;
    char sign_of_oper = 0;

    printf("Enter the first number: ");
    scanf("%d", &first_number);
    printf("Enter the second number: ");
    scanf("%d", &second_number);
    printf("Enter the sign of operation: ");
    getchar();
    scanf("%c", &sign_of_oper);


    switch (sign_of_oper)
    {
    case '+':
        rezult_of_oper = summarize(first_number, second_number);
        break;
    case '-':
        rezult_of_oper = residual(first_number, second_number);
        break;
    case '/':
        rezult_of_oper = segmentation(first_number, second_number);
        break;
    case '*':
        rezult_of_oper = multiplication(first_number, second_number);
        break;
    default:
        printf("Sorry but this sign is not exist!\n\n");
        break;
    }

    printf("\n\n%d\n\n", rezult_of_oper);
    
    return 0;
}