#include<stdio.h>

int main(){
int num1, num2, num3;
printf("Enter your numbers \n");
scanf("%d %d %d", &num1, &num2, &num3);

// if(num1>num2 && num1>num3){printf("%d is largest",num1);}
// if(num2>num1 && num2>num3){printf("%d is largest",num2);}
// if(num3>num2 && num3>num1){printf("%d is largest",num3);}

if(num1>num2){
    if(num1>num3){
        printf("The greatest number is %d",num1);
    }
    else{
        printf("The greates is %d", num3);
    }

}
else{
    if(num2>num3){printf("The greatest is %d", num2);}

    else {printf("The grreatest is %d", num3);}
}
return 0;
};