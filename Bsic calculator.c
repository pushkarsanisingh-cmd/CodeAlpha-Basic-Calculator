#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double x, y;
    int op;

    printf("Simple Calculator\n");
    printf("-----------------\n");
    printf("Enter first number: ");
    if (scanf("%lf", &x) != 1)
    {
        fprintf(stderr, "Invalid input.\n");
        return EXIT_FAILURE;
    }
    printf("Enter second number: ");
    if (scanf("%lf", &y) != 1)
    {
        fprintf(stderr, "Invalid input.\n");
        return EXIT_FAILURE;
    }

    printf("Choose operation:\n");
    printf("  1) Add (+)\n");
    printf("  2) Subtract (-)\n");
    printf("  3) Multiply (*)\n");
    printf("  4) Divide (/)\n");
    printf("Enter choice (1-4): ");
    if (scanf("%d", &op) != 1)
    {
        fprintf(stderr, "Invalid operation choice.\n");
        return EXIT_FAILURE;
    }

    switch (op)
    {
    case 1:
        printf("%.2f + %.2f = %.2f\n", x, y, x + y);
        break;
    case 2:
        printf("%.2f - %.2f = %.2f\n", x, y, x - y);
        break;
    case 3:
        printf("%.2f * %.2f = %.2f\n", x, y, x * y);
        break;
    case 4:
        if (y == 0.0)
        {
            fprintf(stderr, "Error: division by zero.\n");
            return EXIT_FAILURE;
        }
        printf("%.2f / %.2f = %.2f\n", x, y, x / y);
        break;
    default:
        fprintf(stderr, "Unknown option. Please choose 1-4.\n");
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
