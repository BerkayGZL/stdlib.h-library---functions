//fonksiyonu, verilen karakterin noktalama iþareti olup olmadýðýný kontrol eden bir standart C iþlevidir.
#include<stdio.h>
int ispunct(int c) {
    if ((c >= 0x21 && c <= 0x2F) || (c >= 0x3A && c <= 0x40) || (c >= 0x5B && c <= 0x60) || (c >= 0x7B && c <= 0x7E)) {
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
		if(ispunct(ch)){
			printf("%c karakter noktalama isaretidir.\n", ch);
		} else {
			printf("%c karakter noktalama isareti degildir.\n", ch);
		}
	
	}
		
}


