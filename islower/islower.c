//bir karakterin küçük harf olup olmadýðýný kontrol eder.
#include <stdio.h>

int islower(char c) {
    if (c >= 'a' && c <= 122 ) {
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
    
		if (islower(ch)) {
        	printf("%c karakter kucuk harftir.\n", ch);
    	} 
		else {
        	printf("%c karakter kucuk harf degildir.\n", ch);
    		}
	}
	
return 0;	
}
