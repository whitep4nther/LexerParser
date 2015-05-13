/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihermell <ihermell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/12 22:24:14 by ihermell          #+#    #+#             */
/*   Updated: 2015/05/12 22:56:57 by ihermell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOKEN_H
# define TOKEN_H

# include <stdlib.h>
# include <stdio.h>///////////

typedef enum			e_tk_type
{
	TK_DEFAULT,
	TK_CMD_ARG,
	TK_CMD_SEPARATOR,
	TK_AND_OPERATOR,
	TK_SUBCOMMAND
}						t_tk_type;

typedef struct			s_token
{
	char				*value;
	t_tk_type			type;
	struct s_token		*next;
	struct s_token		*prev;
}						t_token;

t_token					*new_token_list(char *value, t_tk_type type);
void					push_token_list(t_token *token, t_token **tk_list);
void					push_back_token_list(t_token *token, t_token **tk_list);
t_token					**divide_token_list(t_token **tk_list);
void					free_token_list(t_token **tk_list);

#endif
