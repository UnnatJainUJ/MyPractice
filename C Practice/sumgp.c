#include<stdio.h>
int main(){
    int a , n;
    float r;
    float sum=0;
    printf("Enter your integer \n");
    scanf("%d", &a);
    printf("Enter your multiplier\n ");
    scanf("%f", &r);
    printf("Enter values till you want sum \n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        sum= sum+ a;
        a= a*r;
    }
    printf("Your desired output is : %f", sum);
    



}