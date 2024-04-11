#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>


int main(int argc, char **argv)
{
	char	c;
	int		i;
	int		size;
	int		fd;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			write(1, "Dict Error\n", 11);
			return (0);
		}

		size = 1;
		i = 0;

		while (size > 0)
		{
			size = read(fd, &c, 1);
			printf("%c", c);
		}
		if (close(fd) == -1)
			write(1, "Dict Error\n", 11);
	}
	return (0);
}
