#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Prints the last digit of random number
*
*Return: Return 0
*/
int main(void)
{
	int x ;
 for( x = 'a'; x <= 'z'; x++) // jumps from 'A'(65) to 'B'(66) to ... in order.
    {
        x = tolower(x);
        putchar(x); // the return value is returned as a parameter
    }
	putchar('\n');
    return 0;
}