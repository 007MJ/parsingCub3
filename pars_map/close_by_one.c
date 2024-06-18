#include "../includes/cub3.h"

bool    direction_y(char **map, int pos_x, int pos_y, int max_x)
{
    int max_y;
    int i;

    max_y = size_len(map);
    // printf("[pos_x %d] - | - [pos_y %d] - |- [max_x %d] - | - [max_y %d] \n", pos_x, pos_y, max_x , max_y);
    i = 0;
    printf(" current pos [%c]\n", map[pos_y][pos_x]);
    if (pos_x > 0 && pos_x < max_x && pos_y > 0 && pos_y < max_y)
    {
        pos_y--;
        printf("move <- [%c]\n", map[pos_y][pos_x]);
        looking_for_six("NSWE10 \n", map[pos_y][pos_x]);
        pos_y++;
    }
    if (pos_x > 0 && pos_x < max_x && pos_y > 0 && pos_y < max_y)
    {
        // pos_y++;
        
        printf("map[%d][%d]\n", pos_y, pos_x);
        printf("move <- [%c]\n", map[pos_y][pos_x]);
        if (pos_y > 0 && pos_y < max_y)
            looking_for_six("NSWE10 \n", map[pos_y][pos_x]);
        pos_y--;
    }
    return (true);
}

bool    direction_x(char **map, int pos_x, int pos_y, int max_x)
{
    int max_y;
    bool    track;
    int i;

    max_y = size_len(map) - 1;
    i = 0;
    track = true;
    printf("x %d | y %d \n", pos_x, pos_y);
    printf("max_x %d | max_y %d \n", max_x, max_y);
    if (pos_x == 0 ||  pos_x == max_x || pos_y == 0 || pos_y == max_y)
        return (err("Error\nMap is not close : "), err(map[pos_y]), false);
    if (pos_x > 0 && pos_x < max_x && pos_y > 0 && pos_y < max_y)
    {
        pos_x--;
        track = looking_for_six("NSWE10", map[pos_y][pos_x]);
        pos_x++;
    }
    pos_x++;
    if (pos_x > 0 && pos_x < max_x && pos_y > 0 && pos_y < max_y && track == true)
    {
        track = looking_for_six("NSWE10", map[pos_y][pos_x]);
        pos_x--;
    }
    if (track)
        return (true);
    return (err("Error\nMap is not close : "), err(map[pos_y]), track);
}

bool    close_by_one(char **map)
{
    int y;
    int x;

    y = 0;
    while (map[y] != NULL)
    {
        x = 0;
        while (map[y][x] != '\0')
        {
            if (map[y][x] == '0')
            {
                direction_x(map, x, y, ft_strlen(map[y]));                              
                // direction_y(map, x, y, ft_strlen(map[y]));                              
            }
            x++;
        }
        y++;
    }
    return (true);
}