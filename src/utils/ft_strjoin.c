#include "../minishell.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*p;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	p = ft_calloc(len, sizeof(char));
	if (p == NULL)
		return (NULL);
	ft_strlcat(p, s1, len);
	ft_strlcat(p, s2, len + 1);
	return (p);
}
