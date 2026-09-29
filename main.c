#include <stdio.h>

int main(void)
{
    int op1, op2;

    printf("Input two integers: ");
    scanf("%d %d", &op1, &op2);
    
    printf("%i + %i = %i\n", op1, op2, op1 + op2);
    printf("%i - %i = %i\n", op1, op2, op1 - op2);
    printf("%i * %i = %i\n", op1, op2, op1 * op2);
    printf("%i / %i = %i\n", op1, op2, op1 / op2);
    printf("%i %% %i = %i\n", op1, op2, op1 % op2);

    return 0;

}