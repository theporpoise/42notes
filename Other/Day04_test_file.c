#include <stdio.h>
#include "ft_iterative_power.c"

int main()
{
	printf("%d\n", ft_iterative_power(1, 3));
	printf("%d\n", ft_iterative_power(2, 3));
	printf("%d\n", ft_iterative_power(3, 0));
	printf("%d\n", ft_iterative_power(10, -1));
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(-3, 2));
	printf("%d\n", ft_iterative_power(-4, -10));
	printf("%d\n", ft_iterative_power(12, 500));
	printf("%d\n", ft_iterative_power(13, 30));
	printf("%d\n", ft_iterative_power(-10, 4));
}
