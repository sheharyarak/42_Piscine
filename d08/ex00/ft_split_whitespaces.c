#include <stdlib.h>
#include <stdio.h>

int        word_counter(char *str)
{
	int     word_count;
	int     i;

	i = 0;
	word_count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\t' || str[i]==32 || str[i] == '\n')
		{
			if (i == 0)
				word_count++;
			else
			{
				if (str[i - 1] != '\t' && str[i - 1] != 32 && str[i - 1] != '\n')
				{
					word_count++;
				}
			}
		}
		i++;
	}
	return (word_count + 1);
}

int        ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char    *word_pointer(char *str, int start, int end)
{
	char *word;
	int i;

	i = 0;
	word = (char*)malloc(sizeof(char) * (end - start) + 1);
	while (start < end && str[start] != '\0')
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

char        **ft_split_whitespaces(char *str)
{
	char    	**string_array;
	int     	word_count;
	int        	i;
	int        	j;
	int     	k;

	i = 0;
	word_count = word_counter(str);
	string_array = (char**)malloc(sizeof(char*)*(word_count + 1));
	k = 0;
	while (i <= word_count)
	{
		j = k;
		while (str[k] != '\t' && str[k] != 32 && str[k] != '\n' && str[k] != '\0')
			k++;
		string_array[i] = word_pointer(str, j, k);
		k++;
		i++;
	}
	string_array[i - 1] = 0;
	return (string_array);
}

int main (void)
{
	char *arr = "	 hello		 its 		me";
	char **array = ft_split_whitespaces(arr);
	while (*arr)
	{
		printf("%s", arr);
		arr++;
	}
}