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
		id = id_token_max(tk_list);
		i = 0;
		while (i++ < id)
			tk_list = tk_list->next;
		sub_tk = divide_token_list(&tk_list);

		tmp = new_token_list(tk_list->value, tk_list->type);
		if (only_type_one(tk_list))
		{
			tk_list = tk_list->prev;
			while (tk_list)
			{
				push_back_token_list(new_token_list(tk_list->value, tk_list->type), &tmp);
				tk_list = tk_list->prev;
			}
			*tree = new_tree(tmp);
		}
		else
		{
			*tree = new_tree(tmp);
			parse_rec(&(*tree)->tr_left, sub_tk[0]);
			parse_rec(&(*tree)->tr_right, sub_tk[1]);
		}
		(void)only_type_one;
		//		{
		//			tk_list = tk_list->next;
		//			while (tk_list)
		//			{
		//				(*tree)->cmd = ft_strjoin((*tree)->cmd, tk_list->value);
		//				tk_list = tk_list->next;
		//			}
		//		}
		//if (sub_tk[0])
		//	join_trees(tree, new_tree(sub_tk[0]->value), LEFT);
		//	if (sub_tk[1])
		//			join_trees(tree, new_tree(sub_tk[1]->value), RIGHT);
	}
}

t_tree		*parser(t_token *tk_list)
{
	t_tree		*tree;

	tree = NULL;
	dprintf(1, "%s\n", "---print de la listes des tokens---");
	print_token_list(tk_list);
	dprintf(1, "%s\n", "");
	parse_rec(&tree, tk_list);

	dprintf(1, "%s\n", "---print de l'arbre---");
	print_tree(tree, POSTFIXE);
	free_token_list(&tk_list);
	return (tree);
}
