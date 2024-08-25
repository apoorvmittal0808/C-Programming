/*Write a program to determine whether a character entered by the user is
lowercase or not.*/
#include <stdio.h>
main()
{
	char ch;
	printf("Enter the character ");
	scanf("%c",&ch);
	if(ch>='a' && ch<='z')
	{
		printf("'%c' is lower case.",ch);
	}
	else
	{
		printf("'%c' is not lower case.",ch);
	}
}
