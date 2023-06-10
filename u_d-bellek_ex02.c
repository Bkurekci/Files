#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int n, i, *p;
	
	srand(time(0));
	
	n = rand()%7+1;
	
	printf("%d elemanli dizi olusturuldu.\n", n);
	
	p = (int *)malloc(n*sizeof(int));
	
	for(i = 0;i < n;i++)
	{
		*(p+i) = rand()%100;
		printf("Eleman %d = %d Karesi = %d\n", i+1, *(p+i), (*(p+i))*(*(p+i)));
	}
	
	free(p);
	
	return 0;
}
