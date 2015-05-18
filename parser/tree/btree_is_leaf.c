/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_is_leaf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihermell <ihermell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 19:22:29 by ihermell          #+#    #+#             */
/*   Updated: 2015/05/18 20:43:28 by ihermell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <btree.h>

int			btree_is_leaf(t_btree *tree)
{
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (0);
}
