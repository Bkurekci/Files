#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int **matris, m, n, i, j, toplam = 0;
	
	printf("Olusturulacak matrisin satir ve sutun boylarini giriniz :");
	scanf("%d %d", &m, &n);
	
	matris = (int **)malloc(m*sizeof(int *));
	
	for(i = 0;i < m;i++)
	{
		matris[i]= (int *)calloc(n, sizeof(int));
		for(j = 0;j < n;j++)
		{
			printf("Matris[%d][%d] = ", i, j);
			scanf("%d", &matris[i][j]);
		}
	}
	
	printf(">>Olusan matris<<\n");
	for(i = 0;i < m;i++)
	{
		for(j = 0;j < n;j++)
		{
			printf("%3d", matris[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0;i < m;i++)
	{
		for(j = 0;j < n;j++)
		{
			if(i == j)
				toplam += matris[i][j];
		}
	}
	
	printf("Kosegenlerin toplami = %d\n", toplam);
	
	for(i = 0;i < m;i++)
	{
		free((void *)matris[i]);
	}
	
	free(matris);
	
	printf("Bellek bosaltildi.");
	return 0;
}
