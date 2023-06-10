#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * ilk iki girdi karsilikli dovusen rakipkerin cani diger iki girdi ise verdikleri hasar
 * kim once olurse digeri kazanan oluyor onu yazdiriyoruz ve round sayisini yazdiriyoruz
 **/

int main()
{
    int HP1;
    int D1;
    int raund, l, n;
    scanf("%d%d", &HP1, &D1);
    int HP2;
    int D2;
    scanf("%d%d", &HP2, &D2);

    for(raund = 0;HP1 > 0 && HP2 > 0; raund++)
    {
        HP1 -= D2;
        HP2 -= D1;
    }
    if(HP1>HP2)
        printf("1");
    else
        printf("2");
    printf(" %d", raund);
    return 0;
}
