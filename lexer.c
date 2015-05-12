/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihermell <ihermell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/11 00:02:29 by ihermell          #+#    #+#             */
/*   Updated: 2015/05/11 23:56:25 by ihermell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lexer.h"
#include <stdio.h>

t_token			*lex(char *str)
{
	t_lexer		*lexer;
	t_token		*tk_list;
	t_token		*token;

	tk_list = NULL;
	lexer = init_lexer(str);
	while ((token = next_token(str, lexer)) != NULL)
		push_token_list(token, &tk_list);
	while (tk_list)
	{
		printf("tk/ %s\n", tk_list->value);
		printf("    type: %d\n", tk_list->type);
		tk_list = tk_list->next;
	}	
	(void)tk_list;
	return (NULL);
}
