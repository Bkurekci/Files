#include <stdio.h>

char *gunismi(char *gundizi[], int size, int n)
{
	if(n >=1 && n <= 7)
	{
		return gundizi[n-1];
	}
	else
		return NULL;
}

int main()
{
	char *gunler[7] = {"Pazartesi","Sali","Carsamba","Persembe","Cuma","Cumartesi","Pazar"};
	int n;
	char *ptr; 
	
	scanf("%d", &n);
	
	ptr = gunismi(gunler, 7, n);
	
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
