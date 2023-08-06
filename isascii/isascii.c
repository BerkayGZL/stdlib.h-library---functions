// karakterin ASCII olup olmadýðýný tanýmlamak için kullanýlýr. 
#include <stdio.h>

int isascii(int c) {
    
	if ( -1 < c < 128){
		return 1;
	} else{
		return 0;
	}
    
}

int main() {
    char ch;
    
    while(1){
	
    	printf(" bir karakter girin =  ");
    	scanf("%c", &ch);
 		
		getchar();
 		
    	if (isascii(ch)) {
        	printf("%c ASCII karakterdir.\n", ch);
    	} 
		else {
        	printf("%c ASCII karakter degildir.\n", ch);
    	}
	}
    return 0;
}
