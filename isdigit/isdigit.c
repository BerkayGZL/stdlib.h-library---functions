//bir karakter dizisinin tamamen sayýsal karakterlerden oluþup oluþmadýðýný kontrol eden bir fonksiyondur. 
//Bu fonksiyon, bir karakter dizisi (string) alýr ve bu dizinin tüm karakterlerinin sayýsal (0-9 arasýndaki) karakterler olup olmadýðýný kontrol eder. 
#include <stdio.h>

int isdigit(char c) {
    
	if (c >= '0' && c <= '9') {
        return 1;
    } else {
        return 0;
    }
}

int main (){
	
	char ch;
	while (1){
		

		printf("Bir karakter girin = ");
		scanf("%c",&ch);
	
		getchar();
    
		if (isdigit(ch)) {
        	printf("%c karakter sayisaldir.\n", ch);
    	} 
		else {
        	printf("%c karakter sayisal degildir.\n", ch);
    		}
	}
	
return 0;	
}
