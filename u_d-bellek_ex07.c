#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void diziolustur(int *p, int n)
{
	int i;
	printf("Dizi olusturuluyor...\n");
	
	for(i=0;i<n;i++)
	{
		*(p+i) = rand()%100;
		printf("%d\t", *(p+i));
	}
}

void dizi_sirala(int *src, int size)
{
	int i, j, gecici;
	
	for(i=0;i<size-1;i++)
	{
		for(j = 0;j < size-i-1;j++)
		{
			if((*(src+j)) > (*(src+j+1)))
			{
				gecici = *(src+j);
				*(src+j) = *(src+j+1);
				*(src+j+1) = gecici;
			}
		}
	}
	
	printf("\nKucukten buyuge siralanmis hali:\n");
	for(i = 0;i < size;i++)
	{
		printf("%d\t", *(src+i));
	}
}

void dizi_buyuk(int *p, int n)
{
	int max, i;
	
	max = *p;
	
	for(i = 0;i < n;i++)
	{
		if(*(p+i) > max)
			max = *(p+i);
	}
	
	printf("\n>>En buyuk sayi = %d", max);
	
}

int main()
{
	int *p, n, i;
	
	printf("Bir n sayisi giriniz: "); scanf("%d", &n);
	
	p = (int *)malloc(n*sizeof(int));
	
	srand(time(0));
	
	diziolustur(p, n);
	dizi_sirala(p, n);
	dizi_buyuk(p, n);
	
	free(p);
	
	return 0;
}
