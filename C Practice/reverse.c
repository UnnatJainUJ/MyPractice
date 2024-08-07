#include<stdio.h>

int main(){
int a, sum=0 ,remainder;
printf("Enter your number here :- ");
scanf("\n %d", &a);
while(a>0){
    sum= sum*10 + a%10;
    a= a/10;



}
printf("Your reversed number is:- %d", sum);
return 0;

}