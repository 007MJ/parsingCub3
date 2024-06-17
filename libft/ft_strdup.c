#include "../includes/cub3.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		lenght;
	char	*ptr;

	lenght = ft_strlen(s1) + 1;
	i = 0;
	ptr = malloc(lenght * sizeof(*s1));
	if (!ptr)
		return (NULL);
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}