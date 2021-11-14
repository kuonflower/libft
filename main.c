#include "libft.h"

int	main(int argc, char *argv[])
{
	printf("%d", ft_isalpha(argc));
	printf("%d", ft_isalpha((int)argv[1][0]));
	return (0);
}
