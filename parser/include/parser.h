#ifndef PARSER_H
# define PARSER_H

# include <libft.h>
# include <stdlib.h>
# include <token.h>
# include <stdio.h>//////////////

# define LEFT	0
# define RIGHT	1

typedef struct	s_tree
{
	char			*cmd;
	struct s_tree	*tr_left;
	struct s_tree	*tr_right;
}				t_tree;

void	parser(t_token *tk_list);

#endif
