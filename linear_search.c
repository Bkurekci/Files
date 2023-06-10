#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i, n, to_find, sira;
	printf("Kac elemanli bir dizi istiyorsunuz ? ->");
	scanf("%d", &n);
	
	int dizi[n];
	
	printf("Dizi olusturuluyor...\n");
	
	for(i=0;i<n;i++)
	{
		dizi[i] = rand()%100;
		printf("%d\t", dizi[i]);
	}
	
	printf("\nAranacak olan sayiyi giriniz:");
	scanf("%d", &to_find);
	
	for(i = 0;i < n;i++)
	{
		if(dizi[i]==to_find)
		{
			sira = i+1;
			printf("Sayi %d. siradadir.", sira);
			break;
		}
	}
	
	if(i == n)
		printf("%d sayisi dizide bulunmamaktadir.", to_find);
	
	return 0;
}
