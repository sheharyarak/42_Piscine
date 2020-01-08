int place_box(char **map, int x, int y, int length)
{
    int i;
    int j;

    j = 0;
    while(j < length)
    {
        i = 0;
        while (i < length)
        {
            if(map[j][i] == 'o')
                return (0);
            else
                i++;
        }
    }
    return (1);
}