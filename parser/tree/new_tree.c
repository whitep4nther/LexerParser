#include <tree.h>

t_tree	*new_tree(t_token *tk)
{
	t_tree	*new;

	new = (t_tree *)malloc(sizeof(t_tree));
	new->tk = tk;
	new->tr_left = NULL;
	new->tr_right = NULL;
	return (new);
}
