#include <parser.h>

t_tree		*parser(t_token *tk_list)
{
	t_tree		*tree;
	t_token		**sub_tk;
	t_token		*tmp;

	tree = NULL;
	tmp = tk_list;
	sub_tk = divide_token_list(&tk_list);
	free_token_list(&tk_list);
	tree = new_tree("PARENT");
	join_trees(&tree, new_tree("L"), LEFT);
	join_trees(&tree, new_tree("R"), RIGHT);
	join_trees(&tree->tr_left, new_tree("LL"), LEFT);
	join_trees(&tree->tr_left, new_tree("LR"), RIGHT);
	print_tree(tree, SUFIXE);
//	ft_putendl(tree->tr_right->cmd);
	(void)tree;
	return (NULL);
}
