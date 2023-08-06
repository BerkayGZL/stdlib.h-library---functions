// iki adet pointeer tan�mlan�r. Birbirine g�re boyut kar���la�t�rmas� yap�l�r ve hangi string daha uzun oldu�u s�ylenir.
#include<stdio.h>

int my_memcmp(void* ptr1, void* ptr2, int n ){ // void tipinde ptr1 ve ptr 2 pointer tan�mlan�r.
	
	char* p1 = (char*) ptr1; // void tipindeki pointerlar  typecast ile char olan p1 pointer a a at�l�r.
	char* p2 = (char*) ptr2;
	
	for(int i=0; i<n; i++){
		
		if(p1[i] < p2[i]){
			return -1;
		}
		else if (p1[i] > p2[i]){
			return 1;
		}
	}
	return 0;
}

int main(){
	char str1[] = "berkay1";
	char str2[] = "berkay2";
	
	int result = my_memcmp(str1, str2, sizeof(str1));
	
	if(result <0 ){
		printf("str1 is less than str2\n");
	}
	else if(result >0){
		printf("str1 is greater than str2\n");
	}
	else{
		printf("str1 is equal to  str2\n");
	}
	
	return 0;
}
