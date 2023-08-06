// karakterin yzdýrýlýp yazdýrýlamadýðýnýn kontrolünü yapar.

#include<stdio.h>
int isprint(int c){

		return c>=0x20 && c<=0x7E;
}


int main(){
	
	while(1){
	
		char ch;
		printf("bir karakter giriniz = ");
		
		scanf("%c",&ch);
		getchar(); // 5 yazýnca entera basýnca enter' ý da karakter olarak alýyordu. ama getchar(); yazýnca sorun çözüldü.
		if(isprint(ch)){
			printf("%c karakter yazdirilir.\n", ch);
		} else {
			printf("%c karakter yazdirilamaz.\n", ch);
		}
	
	}
		
}

