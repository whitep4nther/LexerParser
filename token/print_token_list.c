#include <token.h>
#include <libft.h>

void	print_token_list(t_token *tk)
{
	while (tk)
	{
		ft_putnbr(tk->type);
		ft_putstr(": ");
		ft_putendl(tk->value);
		tk = tk->next;
	}
}
