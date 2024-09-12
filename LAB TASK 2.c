#include <stdio.h>

int main() {
    char operator;
    float num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); 

    if (operator != '+' && operator != '-' && operator != '*' && operator != '/') {
        printf("Error: Invalid operator.\n");
        return 1;
    }

    printf("Enter two operands: ");
    if (scanf("%f %f", &num1, &num2) != 2) {
        printf("Error: Invalid input for operands.\n");
        return 1;
    }

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
    }

    return 0;
}
