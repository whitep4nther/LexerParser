#include <parser.h>

void	parser(t_token *tk_list)
{
	t_token		**sub_tk;
	t_token		*tmp;

	tmp = tk_list;
	while (tmp)
	{
		dprintf(1, "%d: %s\n", tmp->type, tmp->value);
		tmp = tmp->next;
	}
	tk_list = tk_list->next->next;
	sub_tk = divide_token_list(&tk_list);
	free_token_list(&tk_list);
	dprintf(1, "%s\n", "divided");
	dprintf(1, "%s\n", "-----------1-----------");
	while (sub_tk[LEFT])
	{
		dprintf(1, "%d: %s\n", sub_tk[0]->type, sub_tk[0]->value);
		sub_tk[0] = sub_tk[0]->next;
	}
	dprintf(1, "%s\n", "----------2-----------");
	while (sub_tk[RIGHT])
	{
		dprintf(1, "%d: %s\n", sub_tk[1]->type, sub_tk[1]->value);
		sub_tk[1] = sub_tk[1]->next;
	}
}
