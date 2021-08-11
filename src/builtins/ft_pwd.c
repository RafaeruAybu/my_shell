#include "../minishell.h"

int	ft_pwd(void)
{
	char	*pwd;

	pwd = NULL;
	pwd = getcwd(pwd, 0);
	ft_putendl_fd(pwd, 1);
	free(pwd);
	return (0);
}
