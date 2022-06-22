#include <stdio.h>
#include <unistd.h>

int	get_lasttchar(char *str)
{
	int	i;

	while (str[i])
	{
		i++;
	}
	i--;
	while (str[i] == ' ' || str[i] == '\t')
	{
		i--;
	}
	write(1, &i, 1);
	return (i);
}

int	main(int argc, char **argv)
{
	int	i;
	int	x;

	x = get_lasttchar(argv[1]);
	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (i <= x)
		{
			if (argv[1][i] != ' ' && argv[1][i] != '\t')
			{
				write(1, &argv[1][i], 1);
				if (argv[1][i + 1] == ' ' || argv[1][i + 1] == '\t')
					write(1, " ", 1);
				i++;
			}
			while (argv[1][i] == ' ' || argv[1][i] == '\t')
				i++;
		}
	}
	write(1, &x, 1);
	write(1, "\n", 1);
	return (0);
}
