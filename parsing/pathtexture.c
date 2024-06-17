#include "../includes/cub3.h"

bool pathtexture(char *data)
{
    int     i;
    bool    still;

    i = 0;
    still = false;
      if (!data)
        return (false);
    while (data[i] != '\0')
    {
        if (still == true && i == 1)
        {
            i++;
            if (data[i] == ' ')
                return (true);
        }
        if (ft_isupper(data[i])  == 1)
            still = true;
        else
            still = false;
        i++;
    }
    return (false);
}
