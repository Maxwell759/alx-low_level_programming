/**
*_putchar -writes the character c to stdout
*the character to print
*Return: on success or error -1
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
