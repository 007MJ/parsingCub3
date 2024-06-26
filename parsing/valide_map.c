#include "../includes/cub3.h"

bool look_inside(char *s, int walls, int texture)
{
    bool is;

    is = false;
    if (walls == 2 && texture == 4)
        return (true);
    else if (pathtexture(s) == false && wallscolors(s) == false && (walls != 2|| texture != 4))
    {
        if (s)
        {
            while (*s != '\0')
            {
                if (*s == '\n' || *s == 32)
                    s++;
                else
                    return (err("Error\nData too early in the file\n"), false);
            }
        }
    }
    return (true);
}

bool    last_map(char **map)
{   
    int     i;
    int     texture;
    int     walls;
    bool    track;

    i = 0;
    texture = 0;
    walls = 0;
    track = false;
    while (map[i] != NULL)
    {
        if (pathtexture(map[i]) == true && texture <= 3)
            texture++;
        if (wallscolors(map[i]) == true && walls < 2)
            walls++;
        if (look_inside(map[i], walls, texture) == false)
            return (false);
        i++;
    }
    return (true);
}

bool    error_map(char **map)
{
    bool    is_found;
    if (!map)
        return (NULL);

    is_found = false;
    is_found = look_space(map);
    if (!is_found)
       is_found = six_char_invalide(map);
    if (!is_found)
       close_by_one(map);
    return (is_found);
}

char ** valide_map(char *file)
{
    char    **load_files;
    char    **map;
    char    **r_map;

    load_files = getfile(file);
    if (last_map(load_files) == false)
        return (NULL);
    // pathtexture(map);
    // wallscolors(map);
    map = getmap(load_files);
    r_map = removenewline(map);
    // if (r_map)
    // {
    //     for (int i = 0; r_map[i]!= NULL; i++)
    //         printf("%s", r_map[i]);
    // }
    // if (error_map(r_map))
    //     return (r_map);
    return (NULL);
}