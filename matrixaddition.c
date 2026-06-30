#include <stdio.h>

#define SIZE 2

// Function to input a matrix
void inputMatrix(int matrix[SIZE][SIZE])
{
    int i, j;
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[SIZE][SIZE])
{
    int i, j;
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function for matrix addition
void addMatrix(int a[SIZE][SIZE], int b[SIZE][SIZE], int result[SIZE][SIZE])
{
    int i, j;
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

// Function for matrix multiplication
void multiplyMatrix(int a[SIZE][SIZE], int b[SIZE][SIZE], int result[SIZE][SIZE])
{
    int i, j, k;

    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            result[i][j] = 0;
            for (k = 0; k < SIZE; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

// Function for transpose
void transposeMatrix(int matrix[SIZE][SIZE], int transpose[SIZE][SIZE])
{
    int i, j;

    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }
}

int main()
{
    int a[SIZE][SIZE], b[SIZE][SIZE];
    int result[SIZE][SIZE], transpose[SIZE][SIZE];
    int choice;

    printf("Enter First Matrix:\n");
    inputMatrix(a);

    printf("\nEnter Second Matrix:\n");
    inputMatrix(b);

    do
    {
        printf("\n===== MATRIX OPERATIONS =====\n");
        printf("1. Matrix Addition\n");
        printf("2. Matrix Multiplication\n");
        printf("3. Transpose of First Matrix\n");
        printf("4. Display Matrices\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addMatrix(a, b, result);
            printf("\nMatrix Addition:\n");
            displayMatrix(result);
            break;

        case 2:
            addMatrix(a, b, result);
            printf("\nMatrix Multiplication:\n");
            multiplyMatrix(a, b, result);
            displayMatrix(result);
            break;

        case 3:
            transposeMatrix(a, transpose);
            printf("\nTranspose of First Matrix:\n");
            displayMatrix(transpose);
            break;

        case 4:
            printf("\nFirst Matrix:\n");
            displayMatrix(a);

            printf("\nSecond Matrix:\n");
            displayMatrix(b);
            break;

        case 5:
            printf("Exiting Program...\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 5);

    return 0;
}