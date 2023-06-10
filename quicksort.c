#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void quicksort(int *tab, int ilk, int son)
{
	int gecici, pivot, i, j;
	if(ilk < son)
	{
		pivot = ilk;
		i = ilk;
		j = son;
		
		while(i < j)
		{
			while(tab[j] <= tab[pivot] && i < son)
			{
				i++;
			}
			while(tab[j] > tab[pivot])
			{
				j--;
			}
			
			if(i<j)
			{
				gecici = tab[i];
				tab[i] = tab[j];
				tab[j] = gecici;
			}
		}
		gecici = tab[pivot];
		tab[pivot] = tab[j];
		tab[j] = gecici;
		
		quicksort(tab, ilk, j-1);
		quicksort(tab, j+1, son);
		
	}
}

int main()
{
	int n, i, j;
	
	printf("Dizi kac elemanli olsun? ->");
	scanf("%d", &n);
	
	int dizi[n];
	
	srand(time(0));
	
	printf("Dizi olusturuluyor...\n");
	for(i = 0;i < n;i++)
	{
		dizi[i] = rand()%100;
		printf("%d\t", dizi[i]);
	}
	
	printf("\nDizi duzenleniyor...\n");
	
	quicksort(dizi, 0, n-1);
	
	printf("Dizinin duzenlenmis hali\n");
	for(i = 0;i < n;i++)
	{
		printf("%d\t", dizi[i]);
	}
	
	return 0;
}
