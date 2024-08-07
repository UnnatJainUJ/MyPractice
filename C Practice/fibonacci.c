#include <stdio.h>
// using namespace std;
int main()
{
    int num,a,b;
    printf("Enter the number upto which you want the series\n");
    scanf("%d", &num);
    printf("Enter first two number of the series\n");
    scanf("%d %d", &a , &b);
    long numb[num];
    numb[0] = a;
    numb[1] = b;
    if (num > 2)
    {
        for (int i = 2; i < num; i++)
        {
            numb[i] = numb[(i - 1)] + numb[(i - 2)];
        }
    }
    printf("Your series is :\n");
    for (int x = 0; x < num; x++)
    {
        printf("%d\n",numb[x]);
    }

    return 0;
}