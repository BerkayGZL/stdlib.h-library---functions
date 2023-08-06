// Bu fonksiyon, null ile biten karakter dizisini karşılaştırarak alfabetik sıralamalarını belirler
#include <stdio.h>
int my_strcmp(char* str1, char*str2) // char tipinde iki pointer tanımlandı
{
	while(*str1 != '\0' && *str2 !='\n') // pointerda \0 (null) karakter olana kadar döndü
	{
		if (*str1 != *str2)  //  pointerlar birbirine eşit değilse return ile çık
		{
			return *str1 - *str2;
		}
		
		str1++;
		str2++;
		
	}
	
	return *str1-*str2;
}

int main ()
{
	char str1[] = "berkay";
	char str2[] = "berkay1";
	
	int result = my_strcmp(str1,str2);
	
	if (result == 0)
	{
        printf("Karakter dizileri ayni.\n");
    } 
	else if (result < 0) 
	{
        printf("str1, str2'den once gelir.\n");
    } 
	else 
	{
        printf("str1, str2'den sonra gelir.\n");
    }
	
	return 0;
}
