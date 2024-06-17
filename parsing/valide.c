#include "../includes/cub3.h"


bool    error_map(char **map)
{
    look_space(map);
    six_char_invalide(map);
    close_by_one(map);
    return (true);
}

bool valide(char *file)
{
    char    **load_files;
    char    **map;
    char    **r_map;

    load_files = getfile(file);
    // pathtexture(map);
    // wallscolors(map);
    map = getmap(load_files);
    r_map = removenewline(map);
    //  for (int i = 0; r_map[i]!= NULL; i++)
    //     printf("%s", r_map[i]);
    error_map(r_map);
    return (true);  
}