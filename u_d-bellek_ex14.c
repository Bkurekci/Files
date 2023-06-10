#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *cumle)
{
	int i = 0;
	while(*cumle)
	{
		i++;
		cumle++;
	}
	
	return (i);
}

int main()
{
	char *cumle, c;
	int m, i, l;
	cumle = (char *)malloc(50*sizeof(int));
	
	printf("Bir cumle giriniz: ");
	gets(cumle);
	printf("%s\n", cumle);
	
	m = ft_strlen(cumle);
	
	for(i = m-1;i >= 0;i--)
	{
		printf("%c", *(cumle+i));
	}
	
	free(cumle);
	return 0;
}
