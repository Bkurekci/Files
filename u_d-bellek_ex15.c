#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
	int i = 0;
	
	while(*str)
	{
		i++;
		str++;
	}
	return i;
}

int main()
{
	char *kelime;
	int i, j;
	kelime = (char *)malloc(10*sizeof(char));
	
	printf("Kelime giriniz :");
	gets(kelime);
	
	for(i = 0;i < ft_strlen(kelime);i++)
	{
		for(j = 0;j <= i;j++)
		{
			printf("%2c", *(kelime+j));
		}
		printf("\n");
	}
	
	free(kelime);
	
	return 0;
}
