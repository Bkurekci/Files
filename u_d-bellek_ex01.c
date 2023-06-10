#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p;
	int i, n;
	
	printf("Bir n sayisi giriniz:"); scanf("%d", &n);
	
	p = (int *)malloc(n*sizeof(int));
	
	for(i = 0;i < n;i++)
	{
		printf("Eleman %d = ", i+1);
		scanf("%d", &(*(p+i)));
	}
	printf("\n---Elemanlarimiz---\n");
	for(i = 0;i < n;i++)
	{
		printf("Eleman %d = %d\n", i+1, *(p+i));
	}
	
	
	
	return 0;
}
