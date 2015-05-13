#include <token.h>

int		id_token_max(t_token *token)
{
	int		max;
	int		i;
	t_token	*tmp;

	tmp = token;
	i = 0;
	max = i;
	while (tmp)
	{
		if ((int)tmp->type > i && (int)tmp->type != 4)
			max = i;
		i++;
		tmp = tmp->next;
	}
	return (max);
}
