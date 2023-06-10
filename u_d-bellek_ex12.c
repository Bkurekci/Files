#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int m, n, i, j=0, *d1, *d2, *d3;
	printf("Birinci dizi kac elemanli olsun?");
	scanf("%d", &m);
	
	d1 = (int *)calloc(m, sizeof(int));
	
	printf("Ikinci dizi kac elemanli olsun?");
	scanf("%d", &n);
	
	d2 = (int *)calloc(n, sizeof(int));
	
	srand(time(0));
	
	printf(">>>1. dizi elemanlari\n");
	for(i =0;i < m;i++)
	{
		*(d1+i) = rand()%100;
		printf("%d\t", *(d1+i));
	}
	
	printf("\n>>>2. dizi elemanlari\n");
	for(i =0;i < n;i++)
	{
		*(d2+i) = rand()%100;
		printf("%d\t", *(d2+i));
	}
	printf("\nDiziler basarili sekilde olusturuldu.\n");
	
	d3 = (int *)calloc(m+n, sizeof(int));
	
	for(i = 0;i < m;i++)
	{
		*(d3+j) = *(d1+i);
		j++;
	}
	
	for(i = 0;i < n;i++)
	{
		*(d3+j) = *(d2+i);
		j++;
	}
	
	printf("\n>>>Iki dizinin birlestirilmis hali\n");
	
	for(i = 0;i < j;i++)
	{
		printf("%d\n", *(d3+i));
	}
	
	free(d1);
	free(d2);
	free(d3);
	
	printf("Islem sonlandirildi, bellekler bosaltildi.");
	
	return 0;
}
