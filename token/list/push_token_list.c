/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_token_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihermell <ihermell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/11 02:49:59 by ihermell          #+#    #+#             */
/*   Updated: 2015/05/11 02:53:50 by ihermell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lexer.h"

void			push_token_list(t_token *token, t_token **tk_list)
{
	token->next = *tk_list;
	token->prev = NULL;
	if (*tk_list)
		(*tk_list)->prev = token;
	*tk_list = token;
}
