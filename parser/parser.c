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
	sub_tk = divide_token_list(&tk_list);
	free_token_list(&tk_list);
	dprintf(1, "%s\n", "");
	dprintf(1, "%s\n", "---------LEFT-----------");
	while (sub_tk && sub_tk[LEFT])
	{
		dprintf(1, "%d: %s\n", sub_tk[0]->type, sub_tk[0]->value);
		sub_tk[0] = sub_tk[0]->next;
	}
	dprintf(1, "%s\n", "\n---------RIGHT---------");
	while (sub_tk && sub_tk[RIGHT])
	{
		dprintf(1, "%d: %s\n", sub_tk[1]->type, sub_tk[1]->value);
		sub_tk[1] = sub_tk[1]->next;
	}
}
