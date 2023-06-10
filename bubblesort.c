#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i, n, j, gecici;
	printf("Kac adet sayi uretilecek? ->");
	scanf("%d", &n);
	
	int dizi[n];
	srand(time(0));
	
	printf(">>Dizi elemanlari\n");
	
	for(i = 0;i < n;i++)
	{
		dizi[i] = rand()%100;
		printf("%d\t", dizi[i]);
	}
	
	printf("\nDizi duzenleniyor...\n");
	
	for(i = 0;i < (n-1);i++)
	{
		for(j = 0;j < (n-1-i);j++)
		{
			if(dizi[j] > dizi[j+1])
			{
				gecici = dizi[j];
				dizi[j] = dizi[j+1];
				dizi[j+1] = gecici;
			}
		}
	}
	
	printf(">>Dizinin siralanmis hali\n");
	
	for(i = 0;i < n;i++)
	{
		printf("%d\t", dizi[i]);
	}
	
	return 0;
}
