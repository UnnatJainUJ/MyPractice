#include<stdio.h>
#include<conio.h>
// int sum(int *a, int*b, int*t){};
int sum(int *a, int *b, int *t ){
    *t= *a+ *b;
    return 0;
}
int main(){

    int num1, num2, total;
    printf("Enter your numbers:=");
    scanf("%d %d", &num1, &num2);
    sum(&num1, &num2, &total);
    printf("%d", total);
    getch();
    return 0;
}

// int sum(int *a, int *b, int *t ){
    // *t= *a+ *b;
    // return 0;
// }