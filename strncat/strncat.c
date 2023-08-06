//bir karakter dizisine belirli bir uzunlukta ba�ka bir karakter dizisini eklemek i�in kullan�l�r.

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
    
	
	*ptr = '\0';  // Eklenen karakter dizisini sonland�r

   return dest;
}

int main (){
	char dest[20] = "Berkay";
	char *src = "Guzel";
	
	strncat(dest, src, 5);
	
	printf("Result string: %s\n", dest);
	
}
