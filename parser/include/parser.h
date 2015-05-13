#ifndef PARSER_H
# define PARSER_H

# include <libft.h>
# include <stdlib.h>
# include <token.h>
# include <tree.h>
# include <stdio.h>//////////////

# define LEFT	0
# define RIGHT	1

# define INFIXE		1
# define SUFIXE		2
# define POSTFIXE	3

t_tree		*parser(t_token *tk_list);

#endif
