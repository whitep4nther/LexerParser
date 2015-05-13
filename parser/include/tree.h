#ifndef TREE_H
# define TREE_H

# include <libft.h>
# include <stdio.h>/////

# define T_LEFT		0
# define T_RIGHT	1

# define INFIXE		1
# define SUFIXE		2
# define POSTFIXE	3

typedef struct	s_tree
{
	char			*cmd;
	struct s_tree	*tr_left;
	struct s_tree	*tr_right;
}				t_tree;

t_tree		*new_tree(char *cmd);
void		join_trees(t_tree **parent, t_tree *child, int away);
void		print_tree(t_tree *tree, int mode);

#endif
