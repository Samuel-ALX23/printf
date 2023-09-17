#include <stdio.h>
/**
 *_strln - calculates the length of a string
 *@str: is a string
 *
 *Return: lan.
 */
int _strln(char str[])
{
	int lan = 0;
	int n = 0;

	for (; str[n]; n++)
	{
		lan++;
	}
	return (lan);
}
