#include<stdio.h>
#include<math.h>
{double num1,num2,result;
    int operator;
    printf("Enter first number: ");
    if (scanf("%lf", &num1) != 1) ;
    printf("Enter second number: ");
    if (scanf("%lf", &num2) != 1) ;
    printf("\n--- Calculator Menu ---\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    if (scanf("%d", &operator) != 1);
    switch (operator) {
        case 1:
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case 4:
            if (num2 == 0) {
                printf("Division by zero is not possible\n");
            } else {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            }
            break;
        default:
            printf("Invalid option\n");
}}
    
