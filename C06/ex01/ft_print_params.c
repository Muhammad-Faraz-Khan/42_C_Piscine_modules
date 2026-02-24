#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	j = 1;
	while (argc > j)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			i++;
		}
		write(1, argv[j], i);
		write(1, "\n", 1);
		j++;
	}
}
