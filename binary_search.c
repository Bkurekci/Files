#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void dizi_olustur(int *tab, int size)
{
	int i;
	for(i = 0;i < size;i++)
	{
		*(tab+i)=rand()%100;
		printf("%d\t", *(tab+i));
	}
}

void sirala(int *tab, int size)
{
	int i, j, bos;
	
	for(i = 0;i < (size-1);i++)
	{
		for(j = 0;j < (size-1-i);j++)
		{
			if(*(tab+j) > *(tab+j+1))
			{
				bos = *(tab+j);
				*(tab+j) = *(tab+j+1);
				*(tab+j+1) = bos;
			}
		}
	}
}

void arabul(int *tab, int size, int tf)
{
	int ilk = 0, son = size-1, orta = (ilk+son)/2;
	
	while(ilk <= son)
	{
		if(*(tab+orta) < tf)
		{
			ilk = orta+1;
		}
		else if(*(tab+orta) == tf)
		{
			printf("%d sayisi %d. sirada bulundu.\n", tf, orta+1);
			break;
		}
		else
		{
			son = orta-1;
		}
		orta = (ilk+son)/2;
	}
	if(ilk > son)
		printf("%d bulunamadi.", tf);
	
}

int main()
{
	int n, i, to_find;
	printf("Dizi kac elemanli olsun? ->");
	scanf("%d", &n);
	
	int dizi[n];
	
	srand(time(0));
	
	dizi_olustur(dizi, n);
	sirala(dizi, n);
	
	printf("\n>>Dizinin siralanmis hali\n");
	for(i = 0;i < n;i++)
	{
		printf("%d\t", dizi[i]);
	}
	
	printf("\nAradiginiz sayiyi girin:");
	scanf("%d", &to_find);
	arabul(dizi, n, to_find);
	
	return 0;
}
