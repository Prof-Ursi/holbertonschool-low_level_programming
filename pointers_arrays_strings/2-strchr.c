/**
  * _strchr - locate character in string
  * @s: source string
  * @c: character to find
  *
  * Return: the string after the character found
  * NULL (\0) if not found
  */
char *_strchr(char *s, char c)
{
	int length_s = 0
	int i;

	while (s[length_s] != '\0') //or while (s[length_s])
	{
		length_s++;
	}

	for (i = 0; i <= length_s; i++)
	{
		if (c == s[i])
		{
			s += i;
			return (s);
		}
	}

	return ('\0');
}
