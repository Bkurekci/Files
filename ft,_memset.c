#include <stdio.h>

void *ft_memset(void *b, int c, size_t len)
{
	size_t index;

	index = 0;
	while (index < len)
	{
		((char *)b)[index] = c;
		index++;
	}
	return (b);
}

int main()
{
	char s[] = "Merhaba! Ben 42 ecole ogrencisi bukurekc";
	char *c = ft_memset(s, 'O', 7);
	printf("%s\n", c);
}
