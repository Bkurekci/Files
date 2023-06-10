#include <stdio.h>

void *ft_memchr (const void *s, int c, size_t n)
{
    size_t  i;

    i = 0;
    while (i < n)
    {
        if ((*(unsigned char *)s++) == (unsigned char)c)
            return ((unsigned char *)s-1);
        i++;
    }
    return (0);
}

int main()
{
	char s[] = "Merhaba! Ben 42 ecole ogrencisi bukurekc";
	char *c = ft_memchr(s, 'h', 7);
	printf("%s\n", c);
}
