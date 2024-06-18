#include "../includes/cub3.h"

bool look_inside(char *s, int texture, int walls, bool track)
{
    if (!track && (texture != 4 ||  walls != 2))
    {
        if (s)
        {
                while (*s)
                {
                    if (*s != '\n' || *s != ' ')
                        return (err("Error\nData too early in the file\n"), false);
                    s++;
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
        if (pathtexture(map[i]) == true)
        {
            track = true;
            texture++;
        }
        if (wallscolors(map[i]) == true)
        {
            track = true;
            walls++;
        }
        if (look_inside(map[i], texture, walls, track) == false)
            return (false);
        i++;
    }
    return (true);
}


bool    error_map(char **map)
{
    if (!map)
        return (NULL);
    bool    is_found;

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
    // pathtexture(map);
    // wallscolors(map);
    map = getmap(load_files);
    r_map = removenewline(map);
    if (r_map)
    {
        for (int i = 0; r_map[i]!= NULL; i++)
            printf("%s", r_map[i]);
    }
    // if (error_map(r_map))
    //     return (r_map);
    return (NULL);
}