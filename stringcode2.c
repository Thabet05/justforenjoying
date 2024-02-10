#include "shell.h"

/**
 * _strcpy - copy of a string
 * @des: the destination string
 * @src: the source string
 * Return: a pointer to the destination string
 */
char *_strcpy(char *des, char *src)
{
	int ind = 0;

	if (des == src || src == 0)
		return (dest);
	while (src[ind])
	{
		des[ind] = src[ind];
		ind++;
	}
	des[ind] = 0;
	return (des);
}

/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 * Return: pointer to the duplicated string
 */
char *_strdup(const char *str)
{
	int length = 0;
	char *ret;

	if (str == NULL)
		return (NULL);
	while (*str++)
		length++;
	ret = malloc(sizeof(char) * (length + 1));
	if (!ret)
		return (NULL);
	for (length++; length--;)
		ret[length] = *--str;
	return (ret);
}

/**
 *_puts - prints an input string
 *@str: the string to be printed
 * Return: Nothing
 */
void _puts(char *str)
{
	int ind = 0;

	if (!str)
		return;
	while (str[ind] != '\0')
	{
		_putchar(str[ind]);
		ind++;
	}
}

/**
 * _putchar - writes the character c to stdout
 * @ch: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char ch)
{
	static int ind;
	static char buf[WRITE_BUF_SIZE];

	if (ch == BUF_FLUSH || ind >= WRITE_BUF_SIZE)
	{
		write(1, buf, ind);
		ind = 0;
	}
	if (ch != BUF_FLUSH)
		buf[ind++] = ch;
	return (1);
}
