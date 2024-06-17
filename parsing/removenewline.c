#include "../includes/cub3.h"

int len_remove_newline(char **map)
{
    int     i;
    int     len;
    bool    newline;

    i = 0;
    newline = true;
    len = 0;
    while (map[i])
    {
        if (map[i][0] != '\n' && newline == true)
            newline = false;
        if (newline == false)
            return (i);
        i++;
    }
    return (len);
}
int size_len(char **map)
{
    int i;

    i = 0;
    if (map)
    {
        while (map[i]!= NULL)
            i++;
    }
    return (i);
}
int end_remove_newline(char **map)
{
    int     i;
    int     len;
    bool    newline;

    i = size_len(map) - 1;
    newline = true;
    len = 0;
    while (i >= 0)
    {
        if (map[i][0] != '\n' && newline == true)
            newline = false;
        if (newline == false)
            return (i);
        i--;
    }
    return (len);
}

char    **removenewline(char **map)
{
    char    **new;
    int     start;
    int     y;
    int     end;
    int     r_size;

    end = end_remove_newline(map);
    start = len_remove_newline(map);
    r_size = (end - start) + 1;
    y = 0;
    new = malloc(sizeof(char **) * (r_size));
    if (!new)
        return (NULL);
    while (map[start] != NULL && start < end)
    {
        new[y] = map[start];
        y ++;
        start++;
    }
    return (new[y] = NULL, new);
}