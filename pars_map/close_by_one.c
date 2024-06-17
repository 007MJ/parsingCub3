#include "../includes/cub3.h"

bool    fourdirection(char **map, int pos_x, int pos_y, int max_x)
{
    int max_y;
    int i;

    max_y = len_map(map);
    i = 0;
    while (i < 3)
    {
        if (pos_x > 0 && pos_x < max_x && pos_y > 0 && pos_y < max_y)
        {
            looking_for_six("NSWE10\n", map[pos_x][pos_y]);
        }
        i++;
    }
}

bool    close_by_one(char **map)
{
    int y;
    int x;

    y = 0;
    while (map[y] != NULL)
    {
        x = 0;
        while (map[y][x] != '\0' || map[y][x] != '\n')
        {
            if (map[y][x] == 0)
            {

            }
            x++;
        }
        y++;
    }
}