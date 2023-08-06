//bir karakter dizisine belirli bir uzunlukta baþka bir karakter dizisini eklemek için kullanýlýr.

#include<stdio.h>

char *strncat(char *dest, char *src, int n){
	
	char *ptr = dest;
	
	while(*ptr != '\0'){
		ptr++;
	}
	 
	while (n > 0 && *src != '\0') {
        *ptr = *src;
        ptr++;
        src++;
        n--;
    }
    
	
	*ptr = '\0';  // Eklenen karakter dizisini sonlandýr

   return dest;
}

int main (){
	char dest[20] = "Berkay";
	char *src = "Guzel";
	
	strncat(dest, src, 5);
	
	printf("Result string: %s\n", dest);
	
}
