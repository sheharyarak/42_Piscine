#include "bsq.h"

char **bsq(char **map, int height, int width)
{
    int x;
    int y;
    int x_max;
    int y_max;
    int len;
    
    y = 0;
    len = 1;
    while (y + len < height)
    {
        x = 0;
        while (x + len < width)
        {
            if (place_box(map, x, y, len) == 1)
            {
                x_max = x;
                y_max = y;
                len++;
            }
            x++;
        }
        y++;
    }
}
