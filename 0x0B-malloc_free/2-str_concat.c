#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to newly allocated space
 */

char *str_concat(char *s1, char *s2)
{
	int s1len = 0;
	int s2len = 0;
	int i;
	char *output;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2len++;

	output = malloc(sizeof(char) * (s1len + s2len) + 1);

	if (output == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		output[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		output[s1len + i] = s2[i];
	return (output);
}
