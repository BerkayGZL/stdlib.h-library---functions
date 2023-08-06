// Bir karakter dizisinin bir uzunlu�unu ba�ka bir karakter dizisine kopyalamak i�in kullan�l�r. 

#include<stdio.h>

char *strncpy(char* target, char*source, int n){
	char* d = target;
	int i = 0;
	
	while (i<n && *source != '\0'){
		
		*d = *source;
		d++;
		source++;
		i++;
		
	}
	
	while ( i < n ){
		
		*d = '\0';
		d++;
		i++;
		
	}
	
	return target;
}

int main(){
	char target[20];
	
	char* source = "berkay!!!guzel!!!";
	strncpy(target, source,sizeof(target));
	
	printf("copied string of characters : %s \n", target);
	
	return 0;
}
