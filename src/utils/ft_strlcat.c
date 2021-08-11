#include "../minishell.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	const char	*d;
	const char	*s;
	size_t		n;
	size_t		dlen;

	d = dst;
	s = src;
	n = dsize;
	while (n-- && *dst)
		dst++;
	dlen = dst - d;
	n = dsize - dlen;
	if (n-- == 0)
		return (dlen + ft_strlen(src));
	while (*src)
	{
		if (n)
		{
			*dst++ = *src;
			n--;
		}
		src++;
	}
	*dst = '\0';
	return (dlen + (src - s));
}
