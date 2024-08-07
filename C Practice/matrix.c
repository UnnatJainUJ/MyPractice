#include <stdio.h>
#include <conio.h>
int main()
{
    int x, y, i, j, ch = 1;
    int A[15][15];
    int B[15][15];
    int sum[15][15], sub[15][15];
    printf("Enter number of rows of first matrix:\n");
    scanf("%d", &x);
    printf("Enter number of columns of first matrix:\n");
    scanf("%d", &y);
    printf("Rows and columns of first matrix are %d %d\n", x, y);
    printf("Enter number of rows of second matrix:\n");
    scanf("%d", &i);
    printf("Enter number of columns of second matrix:\n");
    scanf("%d", &j);
    printf("Rows and columns of second matrix are %d %d\n", i, j);

    printf("Enter elements of first matrix\n");
    for (int g = 0; g < x; g++)
    {
        for (int h = 0; h < y; h++)
        {
            scanf("%d", &A[g][h]);
        }
    };

    printf("Enter elements of second matrix:\n");
    for (int o = 0; o < i; o++)
    {
        for (int p = 0; p < j; p++)
        {
            scanf("%d", &B[o][p]);
        }
    };
    while (ch > 0)
    {
        printf("Press 0 to exit.\nPress 1 for addition of matrix.\nPress 2 for subtraction.\nPress 3 for multiplication ");
        printf("Enter your number :\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            if ((x == i) && (y == j))
            { printf("The resultant matrix is:\n");
                for (int g = 0; g < x; g++)
                {
                    for (int h = 0; h < y; h++)
                    {
                        sum[g][h] = A[g][h] + B[g][h];
                        printf("%3d", sum[g][h]);
                    }
                    printf("\n");
                };
            }
            else
            {
                printf("Addtion doesn't exist\n");
            }
            break;
        case 2:
            if ((x == i) && (y == j))
            {printf("The resultant matrix is:\n");
                for (int g = 0; g < x; g++)
                {
                    for (int h = 0; h < y; h++)
                    {
                        sub[g][h] = A[g][h] - B[g][h];
                        printf("%3d", sub[g][h]);
                    }
                    printf("\n");
                };
            }
            else
            {
                printf("Subtraction doesn't exist\n");
            }
            break;
        case 3:
            if (y == i)
            {printf("The resultant matrix is:\n");
                int k;
                for (int g = 0; g < x; g++)
                {
                    for (int h = 0; h < j; h++)
                    {
                        sum[g][h] = 0;
                        for (k = 0; k < x; k++)
                        {
                            sum[g][h] += A[g][k] * B[k][h];
                        }
                        printf("%3d", sum[g][h]);
                    }
                    printf("\n");
                }
            }
            else
            {
                printf("Multiplication can't be done.\n");
            }
            break;
        }
        // getch();
        // printf("Press 0 to exit.");
    }
    return 0;
}