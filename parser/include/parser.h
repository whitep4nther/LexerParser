#ifndef PARSER_H
# define PARSER_H

# include <libft.h>
# include <stdlib.h>

typedef struct	s_tree
{
	char			*cmd;
	struct s_tree	*tr_left;
	struct s_tree	*tr_right;
}				t_tree;

void	parser(void);

#endif
