#include <token.h>

void	free_token_list(t_token **tk_list)
{
	t_token		*tmp;

	if (tk_list)
	{
		tmp = *tk_list;
		while (tmp && (*tk_list)->next)
		{
			tmp = (*tk_list)->next;
			free((*tk_list)->value);
			free(*tk_list);
			*tk_list = tmp;
		}
	}
}
