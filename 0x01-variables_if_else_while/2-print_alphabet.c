#include <stdio.h>
#include <ctype.h>
/**
*main - Prints the last digit of random number
*
*Return: Return 0
*/
int main(void)
{
	int x ;
 for( x = 'a'; x <= 'z'; x++) 
    {
        x = tolower(x);
        putchar(x); 
    }
	putchar('\n');
    return 0;
}