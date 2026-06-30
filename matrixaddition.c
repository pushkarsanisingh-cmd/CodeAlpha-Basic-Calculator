#include <stdio.h>

int main()
{
    int a[2][2], b[2][2];
    int result[2][2], transpose[2][2];
    int i, j, k, choice;

    printf("Enter elements of first 2x2 matrix:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of second 2x2 matrix:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("\n===== MATRIX MENU =====\n");
    printf("1. Matrix Addition\n");
    printf("2. Matrix Multiplication\n");
    printf("3. Transpose of First Matrix\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        // Matrix Addition
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                result[i][j] = a[i][j] + b[i][j];
            }
        }

        printf("\nResult of Matrix Addition:\n");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf("%d\t", result[i][j]);
            }
            printf("\n");
        }
        break;

    case 2:
        // Matrix Multiplication
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                result[i][j] = 0;
                for (k = 0; k < 2; k++)
                {
                    result[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        printf("\nResult of Matrix Multiplication:\n");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf("%d\t", result[i][j]);
            }
            printf("\n");
        }
        break;

    case 3:
        // Transpose of First Matrix
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                transpose[j][i] = a[i][j];
            }
        }

        printf("\nTranspose of First Matrix:\n");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf("%d\t", transpose[i][j]);
            }
            printf("\n");
        }
        break;

    case 4:
        printf("Program Exited.\n");
        break;

    default:
        printf("Invalid Choice!\n");
    }

    return 0;
}