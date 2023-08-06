// Bu fonksiyon, null ile biten karakter dizisini kar��la�t�rarak alfabetik s�ralamalar�n� belirler
#include <stdio.h>
int my_strcmp(char* str1, char*str2) // char tipinde iki pointer tan�mland�
{
	while(*str1 != '\0' && *str2 !='\n') // pointerda \0 (null) karakter olana kadar d�nd�
	{
		if (*str1 != *str2)  //  pointerlar birbirine e�it de�ilse return ile ��k
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
