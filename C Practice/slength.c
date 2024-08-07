#include <stdio.h>
#include<conio.h>
void main()
{

    char str[50];
    printf("ENter the string\n");
    gets(str);
    int i = 0;
    int sum = 0;
    while (str[i] != '\0')
    {

        sum = sum + 1;
        i++;
    }
    printf("Length of your string is %d", sum);

}