// verilen karakterin b�y�k harf olup olmad���n� ��renmek i�in kullan�l�r. 
#include<stdio.h> 

int isupper(int c){
	if( 65 <= c && c<=90){
		return 1;
		
	} else {
		return 0;
	}
	
}

int main(){
	while(1){
		
		char ch;
		printf("bir karakter giriniz =");
		scanf("%c", &ch);
		
		getchar();
		
		if(isupper(ch)){
			printf("buyuk harf karakter girdiniz.\n");
		} else {
			printf("kucuk harf karakter girdiniz.\n");
		}
		
	}
}
