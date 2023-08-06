// chr 2 de�erini chr 1 de arar ve bulursa da buldu�u de�eri d�nd�r�r.
#include <stdio.h>

char** strstr(char* chr1, char* chr2){ // return olarak charArray ** oldu�u i�in char** strstr olarak yaz�lm��t�r.
	 int count = 0;
	
	while (*chr1){
		while (*chr1 == *chr2){
		
		chr1++;
		chr2++;
		
		
			if (*chr2 == '\0'){
				
				char* ptr= (char*)count; // her girdi�inde int count de�eri ptr char pointer a atan�r.
				
	
				 char** charArray = (char**)malloc(2 * sizeof(char*)); // bellekte iki adet char pointer kadar yer ayr�l�r. * (arayden) *(malloc) kaynakl� 2(**) olur. 
				
				 *charArray = chr1; // karakter de�eri al�n�r.
				 *(charArray+1) = count; // count de�eri al�n�r.
				return charArray;
			}
		
			}
		chr1++;
		count++;
	}
	return NULL; 
	
}

int main(){
	
	
	char *chr1 ="berkay";
	char *chr2 = "rk";
	
	char**result = strstr(chr1, chr2);
	
	char* result_1 = *result; // char de�eri
	char* result_2 = *(result+1);  // count de�eri 
	 
	
	if (result_1 != NULL){
		printf("subsrting '%s' found at position %ld\n",chr2,result_2 );
	}
	
	else {
		printf("Substring '%s' not found in the string\n",chr2);
		
	}
	
	free(result); // free yap�l�r. 
	
	return 0;
}
