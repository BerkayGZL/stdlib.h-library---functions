//  mutlak deðer 
#include <stdio.h>

int main()
{
	
	while (1) {
		
        int sayi;
        printf("Bir sayi giriniz: ");
        scanf("%d", &sayi);
        //sayi = (sayi < 0) ? -1 * sayi : sayi;
        printf("Mutlak degeri: %d\n", (sayi < 0) ? -1 * sayi : sayi);
        
    }


    return 0;
}
