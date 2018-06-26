#include <iostream>

int main(int argc, char **argv)
{
	int		i;
	i = 0;
	argc--;
	argv++;
	if (!argc)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (argc--)
	{
		while (*argv[i])
		{
			if (*argv[i] >= 'a' && *argv[i] <= 'z')
				std::cout << (char)(*argv[i]++ - 32);
			else
				std::cout << *argv[i]++;
		}
		i++;
	}
	std::cout << std::endl;
	return (0);
}
