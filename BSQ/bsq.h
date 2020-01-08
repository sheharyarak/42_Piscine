#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#define BUFF_SIZE 4096

char **get_map(char *map);
int check_map(char **map);
int place_box(char **map, int x, int y, int length);
int rfterm();
int ret_err();
char **bsq(char *map_string, int height, int width);
int map_height(char **map);
int map_width(char **map);
void print_map(char **map);