 // bir karakter dizisini ba�ka bir karakter dizisine kopyalamak i�in kullan�l�r.
 
#include<stdio.h>

void *my_strcpy(char* destination, char* source) // my_strcpy fonksiyonu destination ve source tipinde iki pointer ile tan�mland�.
{
	while(*source != '\0')
	{
	
	*destination++ = *source++; // karakter kopyalamas� burada ger�ekle�ir
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
