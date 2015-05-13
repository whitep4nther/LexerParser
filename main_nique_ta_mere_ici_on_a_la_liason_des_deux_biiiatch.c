#include <lexer_parser.h>

int		main(int ac, char **av)
{
	(void)ac;
	(void)av;
	if (ac > 1)
		lex(av[1]);

	return (0);
}
