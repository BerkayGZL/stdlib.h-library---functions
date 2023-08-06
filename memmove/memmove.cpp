// belirli sayýda bir baytý bir bellek komutundan baþka bir bellek komutuna kopyalamak için kullanýlýr.
#include<stdio.h>

void* my_memmove(void* target, void* source, int n){ // void tipinde target ve source pointer tanýmlandý.
	
	char* trgt = (char*) target;  // tanýmlanan target ve source pointerlarý typecast ile trgt ve src yapýldý. 
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
