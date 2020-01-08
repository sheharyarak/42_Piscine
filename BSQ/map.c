#include "bsq.h"

char **get_map(char *map)
{
	int		i;
	int		height;
	int		width;
	char	**map_out;

	i = 0;
	height = 0;
	width = 0;
	while (map[width] != '\n')
		width++;
	while (map[i] != '\0')
	{
		if (map[i] == '\n')
			height++;
		i++;
	}
	map_out = (char **)malloc(sizeof(char *) * height);
	while (i < height)
	{
		map_out[i] = (char *)malloc(sizeof(char) * width);
	}
	return (map_out);
}

int check_map(char **map)
{

}

void print_map(char **map)
{
	int i;
	int j;

	i = 0;
	while (*map[i])
	{
		j = 0;
		while (map[i][j])
		{
			write(1, &map[i][j], 1);
			j++;
		}
	}
}

int map_width(char **map)
{
	int i;

	i = 0;
	while (map[0][i] != '\n')
		i++;
	return (i);
}

int map_height(char **map)
{
	int i;

	i = 0;
	while (*map[i])
		i++;
	return (i);
}