#include <stdio.h>

int main()
{
    int a, b, sum = 0, remainder;
    printf("Enter your number here :- ");
    scanf("\n %d", &a);
    b = a;
    while (a > 0)
    {
        sum = sum * 10 + a % 10;
        a = a / 10;
    }

    if (sum == b)
    {
        printf("Your number is palindrome");
    }
    else
    {
        printf("Number is not palindrome");
    }
    return 0;
}