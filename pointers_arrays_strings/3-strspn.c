/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: substring
 * @accept: char
 * Return: Number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int j;

	while (s[a] != '\0')
	{
		for (a = 0; accept[j] != '\0'; j++)
		{
			if (s[a] == accept[j])
				break;
		}
		if (accept[j] == '\0')
			return (a);
		a++;
	}
	return (a);
}
