#include "shell.h"

/**
 * _strlen - return the length of a string
 * @str: the input string
 *
 * Return: length of the string
 */
int _strlen(char *str)
{
	int ind = 0;

	if (!str)
		return (0);

	while (*str++)
		ind++;
	return (ind);
}

/**
 * _strcmp - compare between two strangs.
 * @str1: the first string
 * @str2: the second string
 *
 * Return: negative if str1 < str2, positive if str1 > str2, zero if str1 == str2
 */
int _strcmp(char *str1, char *str2)
{
	while (*str1 && *str2)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	if (*str1 == *str2)
		return (0);
	else
		return (*str1 < *str2 ? -1 : 1);
}

/**
 * starts_with - know if needle starts with haystack
 * @haystack: the string
 * @needle: the substring to find
 *
 * Return: address of next char of haystack or NULL
 */
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * _strcat - concatenate two strings
 * @dest: the first string
 * @src: the second string
 *
 * Return: pointer to the first string
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}
