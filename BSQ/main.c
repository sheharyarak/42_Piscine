# include "bsq.h"

int main(int argc, char *argv[])
{
	int i;
	int file;
	char *buf;
	char **map;

	if (argc == 1)
		return rfterm();
	else
	{
		i = 1;
		while (i < argc)
		{
			file = open(argv[i], O_RDONLY);
			if (file < 0)
				return (ret_err());
			read(file, buf, BUFF_SIZE);
			map = get_map(buf);
			print_map(bsq(map, map_width(map), map_height(map)));
			i++;
		}
	}
	return (0);
}
