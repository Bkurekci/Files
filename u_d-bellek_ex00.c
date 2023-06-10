#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j;
	int **m=(int **)malloc(3*sizeof(int));
	
	for(i = 0;i < 3;i++)
	{
		m[i]=(int *)malloc(4*sizeof(int));//her bir satýrý için 4 elemanlýk yer açtým.
		for(j = 0;j < 4;j++)
		{
			m[i][j]=i*10+j+1;
			printf("%3d",m[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
