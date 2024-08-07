#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter your two numbers \n");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2)
    {
        printf("%d is greater than %d", num1, num2);
    }
    else if (num1 < num2)
    {
        printf("%d is smaller than %d", num1, num2);
    }
    else
    {
        printf("Both numbers %d and %d are equal", num1, num2);
    }

    return 0;
}