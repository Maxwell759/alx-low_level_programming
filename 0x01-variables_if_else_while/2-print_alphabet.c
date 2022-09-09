#include <stdio.h>
#include <ctype.h>
/**
*main - Program to print alphabet letter followed by new line
*
*Return: return 0
*/
int main(void)
{
	int leter;

	for (leter = 'a'; leter <= 'z'; leter++)
	{
		leter = tolower(leter);
		putchar(leter);
	}
	putchar('\n');
	return (0);
}
