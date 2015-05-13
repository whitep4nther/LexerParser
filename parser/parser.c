#include <parser.h>

static int	only_type_one(t_token *tk)
{
	while (tk)
	{
		if (tk->type > 1)
			return (0);
		tk = tk->next;
	}
	return (1);
}

static void	parse_rec(t_tree **tree, t_token *tk_list)
{
	t_token		**sub_tk;
	t_token		*tmp;
	int			id;
	int			i;

	if (tk_list)
	{
		tmp = tk_list;
		id = id_token_max(tk_list);
		i = 0;
		while (i++ < id)
			tk_list = tk_list->next;
		sub_tk = divide_token_list(&tk_list);

		*tree = new_tree(ft_strdup(tk_list->value));
		if (only_type_one(tk_list))
		{
			tk_list = tk_list->next;
			while (tk_list)
			{
				(*tree)->cmd = ft_strjoin((*tree)->cmd, tk_list->value);
				tk_list = tk_list->next;
			}
		}
		if (sub_tk[0])
			join_trees(tree, new_tree(sub_tk[0]->value), LEFT);
		if (sub_tk[1])
			join_trees(tree, new_tree(sub_tk[1]->value), RIGHT);
		parse_rec(&(*tree)->tr_left, sub_tk[0]);
		parse_rec(&(*tree)->tr_right, sub_tk[1]);
	}
}

t_tree		*parser(t_token *tk_list)
{
	t_tree		*tree;

	tree = NULL;
	print_token_list(tk_list);
	dprintf(1, "%s\n", "");
	parse_rec(&tree, tk_list);

	print_tree(tree, POSTFIXE);
	free_token_list(&tk_list);
	(void)tree;
	return (NULL);
}
