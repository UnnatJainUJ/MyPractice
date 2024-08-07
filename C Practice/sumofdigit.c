#include<stdio.h>

int main(){
    int num1, sum=0;
    scanf("%d", &num1);

    while(num1 > 0){
        sum= sum+ (num1%10);
        num1 = num1/10;

    }
    printf("Sum of digits is %d ", sum);
    return 0;
}