#include <stdio.h>

void toh(int, char, char, char);

int main()
{
    int num;
    printf("Enter total number of disks \n");
    scanf("%d", &num);
    toh(num, 'A', 'B', 'C');
    return 0;
}

void toh(int n, char from, char to, char aux)
{
    if (n == 1)
    {

        printf("Move disk %d from %c to %c\n", n, from, to);
    }
    else
    {
        toh(n - 1, from, aux, to);
        printf("Move disk %d from  %c to %c\n ", n, from, to);
        toh(n - 1, aux, to, from);
    }
};