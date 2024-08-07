#include <stdio.h>
#include<conio.h>
void main()
{   int i;
    char str1[50],str2[50];
    printf("ENter the string\n");
    gets(str1);
    for ( i = 0; str1[i]!='\0'; i++)
    {
        str2[i]= str1[i];
    }
    str2[i]='\0';
    printf("Your original string is : \n %s\n Your copied string is :\n %s", str1, str2);
    


}