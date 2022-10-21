#include <unistd.h>
#include <stdlib.h>

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		n *= -1;
		ft_putchar_fd('-', fd);
	}
	if (n > 9)
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putnbr_fd((n % 10), fd);
	}
	if (n < 10)
		ft_putchar_fd((n + '0'), fd);
}
int main(int ac, char **av)
{
	(void)ac;
	ft_putnbr_fd(atoi(av[1]), 1);
}
