#include<stdio.h>
int main(){
int a,b;
printf("Enter values of your number:-\n" );
scanf("%d \n %d", &a,&b);
printf("First number is %d and second one is %d",a,b );
a= a + b;
b= a - b;
a= a - b;
printf("\nNow first number is %d and second one is %d", a,b);


    getchar();
    return 0;
}