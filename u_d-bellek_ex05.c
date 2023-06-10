#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, n, t=0, c=0, *tek, *cift;
	printf("Kaca kadar sayi almak istiyorsunuz? ->"); scanf("%d", &n);
	
	tek = (int *)malloc((n/2+1)*sizeof(int));
	cift = (int *)malloc((n/2+1)*sizeof(int));
	
	printf("Bellek tahsis islemi basarili..\n");
	
	for(i = 0;i <= n;i++)
	{
		if(i%2 == 0)
		{
			*(cift+c) = i;
			c++;
		}
		else
		{
			*(tek+t) = i;
			t++;
		}
	}
	
	printf("Ayirma islemi basarili\n");
	
	printf(">>Tek sayilar\n");
	for(i = 0;i < t;i++)
	{
		printf("%d\n", *(tek+i));
	}
	printf("\n");
	printf(">>Cift sayilar\n");
	for(i = 0;i < c;i++)
	{
		printf("%d\n", *(cift+i));
	}
	
	free(tek);
	free(cift);
	
	printf("Bellek bosaltildi");
	return 0;
}
