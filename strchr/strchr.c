// bir karakter dizisinde belirli bir karakterin ilk bulunduğu konumu bulmayı sağlar.

#include <stdio.h>

char *my_strchr(char *str, int character) 
{
    
	while (*str != '\0') 
	{
        if (*str == character) 
		{
            return (char *)str;
        }
        str++;
    }
    
    return NULL;
}

int main() {
    char str[] = "Berkay Guzel!!";
    char *result = my_strchr(str, 'G');

    if (result != NULL) 
	{
        printf("Karakter bulundu: %s\n", result);
    } 
	else 
	{
        printf("Karakter bulunamadi.\n");
    }

    return 0;
}

