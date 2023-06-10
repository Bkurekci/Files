#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, i, j, gecici;
    
	printf("Kac adet sayi uretilecek? ->\n");
    scanf("%d",&n);
    int dizi[n];
	
	srand(time(0));
	
    printf("Dizi elemanlari olusturuluyor...\n");
	
    for(i=0;i<n;i++)
    {
        dizi[i] = rand()%100;
    }
    
    printf("Dizi elemanlari\n");
    
	for(i=0;i<n;i++)
    {
        printf("%d\n",dizi[i]);
    }
	
    for(i=1;i<n;i++)
    {
        j=i;
        while(j>0 && dizi[j]<dizi[j-1])
        {
            gecici=dizi[j];
            dizi[j]=dizi[j-1];
            dizi[j-1]=gecici;
			
            j--;
        }
    }
    
	printf("\n Siralanmis Dizi Elemanlari\n");
    
	for(i=0;i<n;i++)
    {
        printf("%d\t",dizi[i]);
    }
	
    return 0;
}
