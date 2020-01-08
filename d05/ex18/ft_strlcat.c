unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned	int i;
	unsigned	int j;

	i = 0;
	while (src[i] != '\0')
		i++;
	j = 0;
	while (dest[j] != '\0' && j < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + j);
}
