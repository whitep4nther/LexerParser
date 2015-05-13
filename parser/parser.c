#include <parser.h>

t_tree		*parser(t_token *tk_list)
{
	t_tree		*tree;
	t_token		**sub_tk;
	t_token		*tmp;

	tree = NULL;
	tmp = tk_list;
	tk_list = tk_list->next;
	sub_tk = divide_token_list(&tk_list);
	tree = new_tree(ft_strdup(tk_list->value));
	join_trees(&tree, new_tree(sub_tk[0]->value), LEFT);
	join_trees(&tree, new_tree(sub_tk[1]->value), RIGHT);
	print_tree(tree, INFIXE);
	free_token_list(&tk_list);
	(void)tree;
	return (NULL);
}
