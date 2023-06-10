#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*Klavyeden girilen bir kelimenin harflerini bir harf arttırarak aşağıdaki gibi yazan C programını yazınız


   Kelime giriniz:canan
   c
   c a
   c a n
   c a n a
   c a n a n*/

   char kelime[100];
   int i=0;
   int j=0;
   printf("Lutfen bir kelime giriniz\n");
   gets(kelime);

   while(i<strlen(kelime))
   {
       j=0;
       while(j<=i)
       {
           printf("%c ",kelime[j]);
           j++;
       }
       printf("\n");

       i++;
   }

    return 0;
}
