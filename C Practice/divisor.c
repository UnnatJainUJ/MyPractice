#include <stdio.h>
// #include <conio.h>

int main()
{
    int a;
    printf("Enter your number here:\n");
    scanf("%d", &a);
    printf("The number is divisible by :");
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            printf("%d , ", i);
        }
        else if((a%i) != 0)
        {
            continue;
        }
    }

    return 0;
}