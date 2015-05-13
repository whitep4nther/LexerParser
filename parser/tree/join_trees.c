#include <tree.h>

void		join_trees(t_tree **parent, t_tree *child, int away)
{
	((away == T_LEFT) ? ((*parent)->tr_left = child) : ((*parent)->tr_right = child));
}
