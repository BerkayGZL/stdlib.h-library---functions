//bir karakterin kontrol karakteri olup olmadýðýný kontrol eder.
#include <stdio.h>

int my_iscntrl(int c) {
    
	if ((0 <= c && c <= 31) || c == 127){
		
		return 1;		
	}
	else {
		return 0;
	}
}

int main (){
	
	char ch;
	while (1){
		

		printf("Bir karakter girin = ");
		scanf("%c",&ch);
	
		getchar();
    
		if (my_iscntrl(ch)) {
        	printf("%c Kontrol karakteridir.\n", ch);
    	} 
		else {
        	printf("%c Kontrol karakteri degildir.\n", ch);
    		}
	}
	
return 0;	
}
