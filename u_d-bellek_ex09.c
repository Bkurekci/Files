#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p, n, i, total = 0;
	
	printf("Kac adet sayi olsun? ->");
	scanf("%d", &n);
	
	p = (int *)calloc(n, sizeof(int));
	
	printf("Eleman degerlerini girelim:\n");
	for(i = 0;i < n;i++)
	{
		printf("%d. Eleman = ", i+1);
		scanf("%d", p+i);
		total += *(p+i);
	}
	
	printf("\nSayilarin toplami = %d", total);
	
	free(p);
	
	return 0;
}
