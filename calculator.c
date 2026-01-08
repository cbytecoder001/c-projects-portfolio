#include<stdio.h>
#include<conio.h>

// Simple calculator program
int main()
{
    int num1, num2;
    char operator;
    int result;

    // Input numbers and operator
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);
    
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Perform calculation based on operator
    switch(operator)
    {
        case '+':
            result = num1 + num2;
            printf("%d + %d = %d\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d - %d = %d\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d * %d = %d\n", num1, num2, result);
            break;
        case '/':
            if(num2 != 0)
            {
                result = num1 / num2;
                printf("%d / %d = %d\n", num1, num2, result);
            }
            else
                printf("Error: Division by zero!\n");
            break;
        default:
            printf("Invalid operator!\n");
    }

    getch();
    return 0;
}
