#include <stdio.h>
// #include <conio.h>
main()
{

    float num1;
    float num2;
    char op;
    float result;

    printf("Enter the first number\n\a");
    scanf("%f", &num1);
    printf("Chose Operator\n");
    scanf(" %c", &op);
    printf("Enter the second number\n");
    scanf("%f", &num2);

    switch (op)
    {
    case '+':
        result = num1 + num2;
        printf("%f + %f = %f", num1, num2, result);
        break;

    case '-':
        result = num1 - num2;
        printf("%f - %f = %f", num1, num2, result);
        break;

    case '*':
        result = num1 * num2;
        printf("%f X %f = %f", num1, num2, result);
        break;

    case '/':
        result = num1 / num2;
        printf("%f / %f = %f", num1, num2, result);
        break;

    default:
        printf("Invalid input\n ***Please try again***");
        break;
    }
}
