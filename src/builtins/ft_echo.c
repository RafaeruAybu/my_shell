#include "../minishell.h"

int 	ft_echo(t_todo *all)
{
	char	endsymbol;
	int		i;

	endsymbol = '\n';
	if (all->cur_cmds->args[0])
	{
		i = 1;
		if (!(ft_strcmp(all->cur_cmds->args[i], "-n")))
		{
			endsymbol = 0;
			i++;
		}
		while (all->cur_cmds->args[i])
		{
			write(1, all->cur_cmds->args[i],
				ft_strlen(all->cur_cmds->args[i]));
			i++;
			if (all->cur_cmds->args[i])
				write(1, " ", 1);
		}
	}
	write(1, &endsymbol, 1);
	return (0);
}
