#include <stdio.h>
#include <string.h>

char *dondur(char *tab, int n)
{
	int L = strlen(tab);
	
	if(n > L)
	{
		return NULL;
	}
	else 
	{
		return tab+n;
	}
	
}

int main()
{
	char dizi[] = "yazilim";
	char *ptr = dondur(dizi,2);
	
	if(ptr == NULL)
	{
		printf("NULL");
	}
	else
	{
		printf("%s", ptr);
	}
	
	
	return 0;
}
