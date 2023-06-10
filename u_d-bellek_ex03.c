#include <stdio.h>
#include <stdlib.h>

int main()
{
	int gecici, *src, *dest, i;
	
	src =(int *)malloc(5*sizeof(int));
	dest= (int *)malloc(5*sizeof(int));
	
	printf("src adli bellegin elemanlarini girelim:\n");
	for(i = 0;i < 5;i++)
	{
		printf("Eleman %d = ", i+1);
		scanf("%d", &(*(src + i)));
	}
	printf("dest adli bellegin elemanlarini girelim:\n");
	for(i = 0;i < 5;i++)
	{
		printf("Eleman %d = ", i+1);
		scanf("%d", &(*(dest+i)));
	}
	
	printf("Iki dizinin yerleri degistiriliyor...\n");
	
	for(i = 0;i < 5;i++)
	{
		gecici = *(src+i);
		*(src+i) = *(dest+i);
		*(dest+i)=gecici;
		printf("_");
	}
	
	printf("\n>>src adli bellekteki dizi\n");
	for(i = 0;i < 5;i++)
	{
		printf("%d\t", *(src + i));
	}
	printf("\n");
	printf(">>dest adli bellekteki dizi\n");
	for(i = 0;i < 5;i++)
	{
		printf("%d\t", *(dest + i));
	}
	
	free(src);
	free(dest);
	
	printf("\nProgram basarili sekilde sonlandi.\n");
	printf("-------------------------------------------\n");
	return 0;
}
