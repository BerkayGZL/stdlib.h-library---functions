// chr 2 deðerini chr 1 de arar ve bulursa da bulduðu deðeri döndürür.
#include <stdio.h>

char** strstr(char* chr1, char* chr2){ // return olarak charArray ** olduðu için char** strstr olarak yazýlmýþtýr.
	 int count = 0;
	
	while (*chr1){
		while (*chr1 == *chr2){
		
		chr1++;
		chr2++;
		
		
			if (*chr2 == '\0'){
				
				char* ptr= (char*)count; // her girdiðinde int count deðeri ptr char pointer a atanýr.
				
	
				 char** charArray = (char**)malloc(2 * sizeof(char*)); // bellekte iki adet char pointer kadar yer ayrýlýr. * (arayden) *(malloc) kaynaklý 2(**) olur. 
				
				 *charArray = chr1; // karakter deðeri alýnýr.
				 *(charArray+1) = count; // count deðeri alýnýr.
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
	
	char* result_1 = *result; // char deðeri
	char* result_2 = *(result+1);  // count deðeri 
	 
	
	if (result_1 != NULL){
		printf("subsrting '%s' found at position %ld\n",chr2,result_2 );
	}
	
	else {
		printf("Substring '%s' not found in the string\n",chr2);
		
	}
	
	free(result); // free yapýlýr. 
	
	return 0;
}
