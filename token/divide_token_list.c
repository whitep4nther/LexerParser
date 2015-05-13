#include <token.h>
#include <libft.h>

t_token		**divide_token_list(t_token **tk_list)
{
	t_token		**sub_token;
	t_token		*tmp;

	sub_token = (t_token **)malloc(sizeof(t_token *) * 2);
	sub_token[0] = NULL;
	sub_token[1] = NULL;
	if ((*tk_list)->next)
	{
		tmp = (*tk_list)->next;
		while (tmp)
		{
			push_back_token_list(new_token_list(ft_strdup(tmp->value), tmp->type), &sub_token[0]);
			tmp = tmp->next;
		}
	}
	if ((*tk_list)->prev)
	{
		tmp = (*tk_list)->prev;
		while (tmp)
		{
			push_token_list(new_token_list(tmp->value, tmp->type), &sub_token[1]);
			tmp = tmp->prev;
		}
	}
	return (sub_token);
}
