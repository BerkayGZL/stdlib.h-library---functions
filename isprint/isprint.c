// karakterin yzd�r�l�p yazd�r�lamad���n�n kontrol�n� yapar.

#include<stdio.h>
int isprint(int c){

		return c>=0x20 && c<=0x7E;
}


int main(){
	
	while(1){
	
		char ch;
		printf("bir karakter giriniz = ");
		
		scanf("%c",&ch);
		getchar(); // 5 yaz�nca entera bas�nca enter' � da karakter olarak al�yordu. ama getchar(); yaz�nca sorun ��z�ld�.
		if(isprint(ch)){
			printf("%c karakter yazdirilir.\n", ch);
		} else {
			printf("%c karakter yazdirilamaz.\n", ch);
		}
	
	}
		
}

