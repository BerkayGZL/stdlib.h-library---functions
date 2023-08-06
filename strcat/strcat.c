//iki null ile biten karakter dizisini birleþtirerek birinci diziye ekler.

#include <stdio.h>

char* my_strcat(char* destination, char* source) // my_strcat fonksiyonu des. ve source iki parametre alýr. 
{
    int dest_len = 0;
    while (destination[dest_len] != '\0') {
        dest_len++;
    }
    
    int i = 0;
    while (source[i] != '\0') {
        destination[dest_len + i] = source[i];
        i++;
    }
    
    destination[dest_len + i] = '\0';
    
    return destination;
}

int main() 
{
    char str1[40] = "Berkay";
    char str2[] = "Guzel";
    
    my_strcat(str1, str2);
    
    printf("Combined String: %s\n", str1);
    
    return 0;
}

