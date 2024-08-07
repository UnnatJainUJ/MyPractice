#include <stdio.h>

int main()
{
    int a[3][3], i, j, m, n = 0, count;
    int b[3][9];

    printf("Enter your input in matrix  \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    // to check whether input is equal to 0

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] != 0)
            {

                b[0][n] = i;
                b[1][n] = j;
                b[2][n] = a[i][j];
                n++;
            };
        }
    }

    printf("Your initial matrix is :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Your desired matrix is: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf(" %d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}