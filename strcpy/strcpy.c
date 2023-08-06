 // bir karakter dizisini baþka bir karakter dizisine kopyalamak için kullanýlýr.
 
#include<stdio.h>

void *my_strcpy(char* destination, char* source) // my_strcpy fonksiyonu destination ve source tipinde iki pointer ile tanýmlandý.
{
	while(*source != '\0')
	{
	
	*destination++ = *source++; // karakter kopyalamasý burada gerçekleþir
	}
	
	return destination;
}

int main() {
    char destination[20];
    char source[] = "berkay!guzel!";

    my_strcpy(destination, source);

    printf("copy string : %s\n", destination);

    return 0;
}
