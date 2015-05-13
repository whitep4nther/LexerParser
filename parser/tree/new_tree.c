#include <tree.h>

t_tree	*new_tree(char *cmd)
{
	t_tree	*new;

	new = (t_tree *)malloc(sizeof(t_tree));
	new->cmd = cmd;
	new->tr_left = NULL;
	new->tr_right = NULL;
	return (new);
}
