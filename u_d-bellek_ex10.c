#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p, n, i, toplam = 0;
	float ort = 0;
	
	printf("Kac eleman olsun ? ->");
	scanf("%d", &n);
	
	p = (int *)calloc(n, sizeof(int));
	
	printf("Elemanlari giriniz\n");
	for(i = 0;i < n;i++)
	{
		scanf("%d", p+i);
		toplam += *(p+i);
	}
	
	ort = toplam / n;
	
	printf(">>Elemanlarin toplami = %d\n>>Elemanlarin ortalamasi = %.2f", toplam, ort);
	
	free(p);
	
	return 0;
}
