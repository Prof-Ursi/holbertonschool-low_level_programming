/**
  * _memcpy - Copies memory area
  * @src: source memory area
  * @dest: destination of the copy
  * @n: bytes of memory to copy from src
  *
  * Return: dest, containing the copy
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
