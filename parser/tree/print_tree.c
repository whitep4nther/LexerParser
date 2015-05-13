#include <tree.h>
#include <libft.h>

static void		infixe(t_tree *tree)
{
	if (tree)
	{
		infixe(tree->tr_left);
		infixe(tree->tr_right);
		ft_putendl(tree->cmd);
	}
}

static void		sufixe(t_tree *tree)
{
	if (tree)
	{
		sufixe(tree->tr_left);
		ft_putendl(tree->cmd);
		sufixe(tree->tr_right);
	}
}

static void		postfixe(t_tree *tree)
{
	if (tree)
	{
		ft_putendl(tree->cmd);
		postfixe(tree->tr_left);
		postfixe(tree->tr_right);
	}
}

void	print_tree(t_tree *tree, int mode)
{
	if (mode == 1)
		infixe(tree);
	else if (mode == 2)
		sufixe(tree);
	else if (mode == 3)
		postfixe(tree);
}
