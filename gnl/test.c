#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	(void)ac;
	char *str;
	char *str2;
	char *temp;

	str = malloc(sizeof(char) * (strlen(av[1]) + 1));
	strcat(str, av[1]);
	printf("%s\n", str);
	temp = strdup(str);
	str = malloc(sizeof(char) * (strlen(str) + strlen(av[2]) + 1));
	printf("%s\n", str);
	str = strcat(temp, av[2]);
	printf("%s\n", str);
	str = malloc(sizeof(char) * (strlen(str) + strlen(av[3]) + 1));
	strcat(str, av[3]);
	printf("%s\n", str);
}
