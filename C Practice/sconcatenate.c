#include<stdio.h>
#include<conio.h>
void main()
{
    char str1[40], str2[40], str3[80];

    int i,j=0 ;
    printf("Enter first string\n");
    gets(str1);
    printf("Enter second string\n");
    gets(str2);
    for ( i = 0;str1[i]!='\0'; i++,j++)
    {
        str3[j]=str1[i];
    }
    for ( i = 0;str2[i]!='\0'; i++,j++)
    {
        str3[j]=str2[i];
    }
    str3[j]='\0';
    printf("The concatenated string is :\n %s",str3);

}