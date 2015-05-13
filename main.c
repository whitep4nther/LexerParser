#include <lexer_parser.h>

int		main(int ac, char **av)
{
	t_token	*tk;
	(void)ac;
	(void)av;
	if (ac > 1)
	{
		tk = lex(av[1]);
		parser(tk);
	}

	return (0);
}
