#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: string dest.
 * @src: string source.
 * Return: pointer to concatenated string.
 */

char *_strcat(char *dest, char *src)
{
	int i = _strlen(dest);
	int j = 0;

	while (src[j])
		dest[i++] = src[j++];
	dest[i] = src[j];
	return (dest);
}

/**
 * _strlen - returns the length of a string.
 * @s: the string.
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int i = 0;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
 * _strcpy - copies a string
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	for (i = 0; src[i]; i++)
		;
	for (j = 0; j <= i; j++)
		dest[j] = src[j];
	return (dest);
}

/**
 * _strncmp - compares two strings until the n character.
 * @s1: string 1.
 * @s2: string 2.
 * @n: position.
 * Return: negative, positive or 0 if s1 is lower, bigger o match s2.
 */

int _strncmp(char *s1, char *s2, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
		if (s1[i] != s2[i])
		{
		return (s1[i] - s2[i]);
		}
	return (0);
}

/**
 * _strcmp - compares two strings.
 * @s1: string 1.
 * @s2: string 2.
 * Return: negative, positive or 0 if s1 is lower, biger o match s2.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (i = 0; s1[i] || s2[i]; i++)
		if (s1[i] != s2[i])
		{
		return (s1[i] - s2[i]);
		}
	return (0);
}
