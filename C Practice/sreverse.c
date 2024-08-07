#include <stdio.h>
int main()
{
   char str1[1000], str2[1000];
   int a, b, count = 0;

   printf("Input your string\n");
   gets(str1);


   while (str1[count] != '\0')
      count++;

   b = count - 1;

   for (a = 0; a < count; a++) {
      str2[a] = str1[b];
      b--;
   }

   str2[a] = '\0';

   printf("%s\n", str2);

   return 0;
}