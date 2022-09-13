#include <stdio.h>
#include <ctype.h>
/**
*main - Program to print alphabet letters in all cases followed by new line
*
*Return: return 0
*/
int main(void)
{
	int ltr;

	for (ltr = 'a'; ltr <= 'z'; ltr++)
	{
		ltr = tolower(ltr);
		putchar(ltr);
		if (ltr == 'z')
		{
			ltr = 'A';
			for (; ltr <= 'Z'; ltr++)
			{
				putchar(ltr);
			}
			break;
		}
	}
	putchar('\n');
	return (0);
}
