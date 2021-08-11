#include "../minishell.h"

void	ft_bzero(void *s, size_t n)
{
	char	*p;

	while (n)
	{
		p = s;
		*p = '\0';
		n--;
		s++;
	}
}
