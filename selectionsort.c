#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int n, i, j, konum, bos;
	printf("Kac adet sayi girilecek? ->");
	scanf("%d", &n);
	
	int dizi[n];
	
	srand(time(0));
	printf("Dizi elemanlari\n");
	
	for(i=0;i<n;i++)
	{
		dizi[i] = rand()%100;
		printf("%d\t", dizi[i]);
	}
	
	for(i = 0;i < (n-1);i++)
	{
		konum = i;
		for(j = i+1;j < n;j++)
		{
			if(dizi[konum] > dizi[j])
			{
				konum = j;
			}
		}
		if(konum != i)
		{
			bos = dizi[i];
			dizi[i] = dizi[konum];
			dizi[konum] = bos;
		}
	}
	
	printf("\nDizinin siralanmis hali\n");
	for(i = 0;i < n;i++)
	{
		printf("%d\t", dizi[i]);
	}
	
	return 0;
}
