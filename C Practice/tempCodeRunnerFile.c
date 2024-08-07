#include <stdio.h>
void sort(int[], int);
void sort(int a[], int elements)
{
    int i, j, temp;

    i = 0;
    while (i < (elements - 1))
    {
        j = i + 1;
        while (j < elements)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            j++;
        }
        i++;
    }
}
void main()
{
    int numbers[] = {75,89,12,27,84,73,69};
    int loop;
    int n = sizeof(numbers)/sizeof(numbers[0]);
    sort(numbers, n);
    printf("Sorted array \n");
    for (loop = 0; loop <n; loop++)
        printf(" %d ", numbers[loop]);
}
