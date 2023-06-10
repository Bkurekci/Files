#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
	char *c;
	
	c = (char *)calloc(100, sizeof(char));
	
	printf("Bir cumle giriniz: ");
	gets(c);
	
	printf(">>%s", c);
	
	free(c);
	
	return 0;
}
