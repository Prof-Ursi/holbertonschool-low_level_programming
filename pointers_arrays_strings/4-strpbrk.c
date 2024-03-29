/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to the string to search through
 * @accept: substring to search for in s
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or return NULL if no bytes are found.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
