#include "../includes/cub3.h"

char	*ft_memcpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst == 0 && src == 0)
	{
		return (0);
	}
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}