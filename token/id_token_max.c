#include <token.h>

int		id_token_max(t_token *token)
{
	int		max;
	int		pos;
	int		i;
	t_token	*tmp;

	tmp = token;
	i = 0;
	pos = 0;
	max = 1;
	while (tmp)
	{
		if ((int)tmp->type >= max && (int)tmp->type != 4)
		{
			max = (int)tmp->type;
			pos = i;
		}
		i++;
		tmp = tmp->next;
	}
	return (pos);
}
