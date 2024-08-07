#include<stdio.h>
#include<conio.h>

int main(){
int a,i;
unsigned long int fact=1;
printf("Enter your number here:");
scanf("%d", &a);
for (i = 1; i <= a; i++)
{
   fact *= i;
};
printf("Your factorial is : %u", fact);

    return 0;
}
