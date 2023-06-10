#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>

int main()
{
	FILE *dosya;
	int *p, n, i;
	char c;
	
	printf("Kac adet sayi olsun? ->");
	scanf("%d", &n);
	
	p = (int *)malloc(n*sizeof(int));
	
	srand(time(0));
	
	for(i = 0;i < n;i++)
	{
		*(p+i) = rand()%100;
		printf("Eleman %d = %d\n", i+1, *(p+i));
	}
	
	dosya=fopen("dersler.txt", "w");
	
	if(dosya == NULL)
	{
		printf("Dosya olusturma hatasi !!!");
	}
	else
	{
		fprintf(dosya, "Bellekten alinan dizi:\n");
		for(i = 0;i < n;i++)
		{
			fprintf(dosya, "Eleman %d = ", i+1);
			fprintf(dosya, "%d\n", *(p+i));
		}
		
		printf("Yazdirma islemi basarili...");
		
	}
	
	fclose(dosya);// dosya yazdýrma iþleminden sonra kapatýlmalý. Aksi takdirde hata alacaksýn. ;P
	
	dosya = fopen("dersler.txt", "r");
	
	printf("Dosya okunuyor...\n");
	
	do
	{
		c = getc(dosya);
		if(c != EOF)
		{
			putchar(c);
		}
	}while(c != EOF);
	
	fclose(dosya);
	free(p);
	
	printf(">>Dosya kapatildi\n>>Bellek bosaltildi");
	
	return 0;
}
