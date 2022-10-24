#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ft_intlen(int n)
{
	int	res;
	int	i;
	
	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n >= 1)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char *ft_itoa(int n)
{
	int	sign;
	int	i;
	char	*str;
	
	i = 0;
	str = malloc(sizeof(char) * ft_intlen(n) + 1);
	if (!str)
		return (NULL);
	if (n == 0)
		str[i++] = '0';	
	if (n < 0)
	{
		n *= -1;
	}

}



int main(int ac, char **av)
{
	(void)ac;

	printf("%i\n%i\n", ft_intlen(atoi(av[1])), atoi(av[1]));
}
