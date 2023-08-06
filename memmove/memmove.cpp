// belirli say�da bir bayt� bir bellek komutundan ba�ka bir bellek komutuna kopyalamak i�in kullan�l�r.
#include<stdio.h>

void* my_memmove(void* target, void* source, int n){ // void tipinde target ve source pointer tan�mland�.
	
	char* trgt = (char*) target;  // tan�mlanan target ve source pointerlar� typecast ile trgt ve src yap�ld�. 
	char* src = (char*) source;
	
	if(trgt < src){
		for(int i=0; i<n; i++){
			trgt[i] = src[i];
		}
	}
	
	return target;
} 

int main (){
	
	char str1[] = "berkayguzel";
	char str2[20];
	 
	my_memmove(str2, str1, sizeof(str1));
	
	printf("target: %s", str2);
	
	return 0;
}
