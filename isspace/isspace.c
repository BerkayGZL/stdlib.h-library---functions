//bir karakterin bo�luk, sekme, yeni sat�r gibi beyaz alan karakterleri olup olmad���n� kontrol etmek i�in kullan�l�r
#include <stdio.h>

int isspace(int c) {
    if (c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\f' || c == '\v') {
        return 1;
    } else {
        return 0;
    }
}


int main(){
	
	while(1){
	
		char ch;
		printf("bir karakter giriniz = ");
		
		scanf("%c",&ch);
		getchar(); 
		if(isspace(ch)){
			printf("%c karakterde bosluk, tab vs vardir.\n", ch);
		} else {
			printf("%c karakterde bosluk, tab vs yoktur.\n", ch);
		}
	
	}
		
}
