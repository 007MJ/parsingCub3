
#include "../includes/cub3.h"

char	*ft_memmove(char *dst, char *src, size_t len)
{
	if (dst >= src)
	{
		while (len > 0)
		{
			dst[len - 1] = src[len - 1];
			len--;
		}
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}