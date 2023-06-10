#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max 30

void olustur(int kume[])
{
	int i, n;
	kume[0] = 0;
	printf("Kume kac elemanli olsun? ->");
	scanf("%d", &n);
	
	
	printf("Elemanlari giriniz:\n");
	for(i = 1;i <= n;i++)
	{
		scanf("%d", &kume[i]);
	}
	
	kume[0] = n;
}

void print(int kume[])
{
	int n, i;
	n = kume[0];
	
	printf("\n\n>>>Sonuc\n");
	for(i = 1;i <= n;i++)
	{
		printf(">>Eleman[%d] = %d\n\n", i, kume[i]);
	}
}

void birlestir(int kume1[], int kume2[], int kume3[])
{
	int i, n;
	kume3[0] = 0;
	n = kume1[0];
	
	for(i = 0;i <=n ;i++)
	{
		kume3[i] = kume1[i];
	}
	
	n = kume2[0];
	 
	for(i = 1;i <=n;i++)
	{
		if(!uyemi(kume3, kume2[i]))
		{
			kume3[++kume3[0]] = kume2[i];
		}
	}
	 
}

int uyemi(int kume[], int x)
{
	int i, n;
	n = kume[0];
	
	for(i = 1;i <= n;i++)
	{
		if(x == kume[i])
		{
			return 1;
		}
	}
	return 0;
}

void birlestir_all(int kume1[], int kume2[], int kume3[], int kume4[])
{
	int i, n;
	kume4[0] = 0;
	n = kume1[0];
	
	for(i = 0;i <=n ;i++)
	{
		kume4[i] = kume1[i];
	}
	
	n = kume2[0];
	 
	for(i = 1;i <=n;i++)
	{
		if(!uyemi(kume4, kume2[i]))
		{
			kume4[++kume4[0]] = kume2[i];
		}
	}
	
	n = kume3[0];
	
	for(i = 1;i <= n;i++)
	{
		 if(!uyemi(kume4, kume3[i]))
		 {
		 	kume4[++kume4[0]] = kume3[i];
		 }
	}
	 
}

void kesisim(int kume1[], int kume2[], int kume4[])
{
	int i, n;
	kume4[0] = 0;
	n = kume1[0];
	
	for(i = 1;i <= n;i++)
	{
		if(uyemi(kume2, kume1[i]))
		{
			kume4[++kume4[0]] = kume1[i];
		}
	}
}

void uclu_kesisim(int kume1[], int kume2[], int kume3[], int kume4[], int kume5[])
{
	int i, n;
	
	n = kume2[0];
	kume5[0] = 0;
	
	for(i = 0;i <= n;i++)
	{
		kume5[i]=kume2[i];
	}
	
	n = kume3[0];
	
	for(i = 1;i <= n;i++)
	{
		if(uyemi(kume5, kume3[i]))
		{
			kume4[++kume4[0]] = kume3[i];
		}
	}
	
	n = kume1[0];
	kume1[0] = 0;
	
	for(i = 1;i <= n;i++)
	{
		if(!uyemi(kume5, kume1[i]))
		{
			kume4[++kume4[0]] = kume1[i];
		}
	}
	
}

void fark(int kume1[], int kume2[], int kume4[])
{
	int i, n;
	n = kume1[0];
	kume4[0] = 0;
	
	for(i = 1;i <= n;i++)
	{
		if(!uyemi(kume2, kume1[i]))
		{
			kume4[++kume4[0]] = kume1[i];
		}
	}
	
}

void total_fark(int kume1[], int kume2[], int kume3[], int kume4[], int kume5[])
{
	int i, n;
	kume5[0] = 0;
	n = kume2[0];
	
	for(i = 0;i <=n ;i++)
	{
		kume5[i] = kume2[i];
	}
	
	n = kume3[0];
	 
	for(i = 1;i <=n;i++)
	{
		if(!uyemi(kume5, kume3[i]))
		{
			kume5[++kume5[0]] = kume3[i];
		}
	}
	
	n = kume1[0];
	kume4[0] = 0;
	
	for(i = 1;i <= n;i++)
	{
		if(!uyemi(kume5, kume1[i]))
		{
			kume4[++kume4[0]] = kume1[i];
		}
	}
	
	
	
	for(i = 1;i <= n;i++)
	{
		if(!uyemi(kume5, kume3[i]))
		{
			kume4[++kume4[0]] = kume3[i];
		}
	}
}

int main()
{
	int kume1[max], kume2[max], kume3[max], kume4[max], kume5[max];
	int operatr;
	
	kume1[0] = kume2[0] = kume3[0] = 0;
	
	do
	{
		
		printf("1) 3 tane kume olusturun.\n");
		printf("2) Olusturdugunuz kumeleri ekrana yazdirin.\n");
		printf("3) Programdan cýkmak icin 15'e basin.\n");
		printf("1-kume olusturma\n2-kume yazdirma\n3-1.kume ile 2.kume birlesim\n4-1.kume ile 3.kume birlesim\n5-2.kume ile 3.kume birlesim\n6-butun kumeleri birlestir\n7-1.kume ve 2.kume kesisim\n8-1.kume ve 3.kume kesisim\n9-2.kume ve 3.kume kesisim\n10-Uc kumenin kesisimi\n11-1.kume ve 2.kume farki\n12-1.kume ve 3.kume farki\n13-2.kume ve 3.kume farki\n");
		
		scanf("%d", &operatr);
		
		switch(operatr)
		{
			case 1:
				printf("\n1. kumeyi olusturun\n");
				olustur(kume1);
				printf("\n2. kumeyi olusturun\n");
				olustur(kume2);
				printf("\n3. kumeyi olusturun\n");
				olustur(kume3);
				break;
			case 2:
				printf("\nKume 1:\n");
				print(kume1);
				printf("\nKume 2:\n");
				print(kume2);
				printf("\nKume 3:\n");
				print(kume3);
				break;
			case 3:
				birlestir(kume1, kume2, kume4);
				print(kume4);
				break;
			case 4:
				birlestir(kume1, kume3, kume4);
				print(kume4);
				break;
			case 5:
				birlestir(kume2, kume3, kume4);
				print(kume4);
				break;
			case 6:
				birlestir_all(kume1, kume2, kume3, kume4);
				print(kume4);
				break;
			case 7:
				kesisim(kume1, kume2, kume4);
				print(kume4);
				break;
			case 8:
				kesisim(kume1, kume3, kume4);
				print(kume4);
				break;
			case 9:
				kesisim(kume2, kume3, kume4);
				print(kume4);
				break;
			case 10:
				uclu_kesisim(kume1, kume2, kume3, kume4, kume5);
				print(kume4);
				break;
			case 11:
				fark(kume1, kume2, kume4);
				print(kume4);
				break;
			case 12:
				fark(kume1, kume3, kume4);
				print(kume4);
				break;
			case 13:
				fark(kume2, kume3, kume4);
				print(kume4);
				break;
			case 14:
				total_fark(kume1, kume2, kume3, kume4, kume5);
				print(kume4);
				break;
			default:
				printf("\nLutfen gecerli bir sayi girin: [1-15]");
				break;
		}
		
	}while(operatr != 15);
	
	return 0;
}
