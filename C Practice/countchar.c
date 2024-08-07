#include <stdio.h>

int main() {

	int upper = 0, lower = 0 , num=0, special=0;
	char c;

	FILE* fp = fopen("huehue.txt", "r");

	if (fp == NULL)
		return 0;


	while (1) {

		c = fgetc(fp);

		if (c == EOF)
			break;

		
		if (c >= 'A' && c <= 'Z')
			{++upper;}
		
		else if (c >= 'a' && c <= 'z')
			{++lower;}

        
        else if (c>='0' && c<='9' )
            {++num;}
          
        else 
        ++special;

	}

	fclose(fp);

	printf("Uppercase: %d\nLowercase: %d\nNumerical: %d\nSpecial:%d  ", upper, lower,num, special);

}