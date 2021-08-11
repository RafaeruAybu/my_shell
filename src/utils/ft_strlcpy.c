#include "../minishell.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	const char	*s;
	size_t		n;

	s = src;
	n = dsize;
	if (!dst || !src)
		return (0);
	if (dsize)
	{
		while (--n)
		{
			*dst = *src++;
			if (*dst++ == '\0')
				break ;
		}
	}
	if (n == 0)
	{
		if (dsize)
			*dst = '\0';
		while (*src)
			src++;
		src++;
	}
	return (src - s - 1);
}
