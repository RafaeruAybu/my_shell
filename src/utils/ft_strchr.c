#include "../minishell.h"

char	*ft_strchr(const char *s, int n)
{
	if (*s != '\0' && *s != (char)n)
	{
		while (*++s)
		{
			if (*s == (char) n)
				return ((char *) s);
		}
	}
	if (*s == (char)n)
		return ((char *)s);
	return (0);
}
