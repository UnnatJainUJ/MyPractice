#include <stdio.h>

int main()
{
    int a, b, sum = 0, remainder[20000];
    printf("Enter your number here :- ");
    scanf("\n %d", &a);
    b = a;
    int i=0;
    while (a > 0)
    {
        remainder[i]= a%10;
        a = a / 10;
        i++;
    }
    for (int j = 0; j < i; j++)
    {
        sum= sum + (remainder[j]*remainder[j]*remainder[j]);
    }
    if (sum == b)
    {
        printf("Your number is armstrong");
    }
    else
    {
        printf("Number is not armstrong");
    }
    return 0;
}