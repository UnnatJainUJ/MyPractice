#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter number of rows and column \n");
    scanf("%d %d", &num1, &num2);
    for (int i = 1; i <= num1; i++)
    {
        int a = 1;
        printf("\n");
        for (int j = 1; j <= num2; j++)
            if (i <= j)
            {
                printf("%d", a);
                a++;
            }
    }

    return 0;
}