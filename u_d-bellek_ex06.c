#include <stdlib.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int min, n, *p, i, sira;
	
	printf("Bir n sayisi giriniz: "); scanf("%d", &n);
	
	p = (int *)malloc(n*sizeof(int));
	
	srand(time(0));
	
	for(i = 0;i < n;i++)
	{
		*(p+i) = rand()%100;
		printf("%d\t", *(p+i));
	}
	
	min = *p;
	
	for(i = 0;i < n;i++)
	{
		if(*(p+i) < min)
		{
			min = *(p+i);
			sira = i+1;
		}
	}
	
	printf("\nElemanlar arasinda en kucuk = %d\nSira numarasi : %d", min, sira);
	
	free(p);
	
	return 0;
}
