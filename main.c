#include "includes/cub3.h"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        valide(av[1]);
    }
    else
        write(2, "Error\nargument need !\n", ft_strlen("Error\nargument need !\n"));
    return (EXIT_SUCCESS);
}