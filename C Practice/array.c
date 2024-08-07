#include<stdio.h>

int main(){
    int num[10], i, sum=0;
    printf("Enter your 10 numbers \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
        sum= sum+ num[i];
    };

    printf("The sum of numbers of array is %d", sum);
    




    return 0;
}