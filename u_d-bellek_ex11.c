#include <stdio.h>
#include <stdlib.h>

int main()
{
	int m, n, i, j;
	printf("Satir ve sutun sayisini sirayla giriniz: ");
	scanf("%d %d", &m, &n);
	int **matris;
	
	matris=(int **)calloc(m, sizeof(int));
	
	for(i = 0;i < m;i++)
	{
		matris[i]= (int *)calloc(n, sizeof(int));
		for(j = 0;j < n;j++)
		{
			printf("Matris[%d][%d] = ",i ,j);
			scanf("%d", &matris[i][j]);
		}
	}
	
	for(i = 0;i < m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%3d", matris[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0;i < m;i++)
	{
		free((void *)matris[i]);
	}
	
	free((void *)matris);
	
	return 0;
}
