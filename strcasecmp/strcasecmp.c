//Bir karakter dizisinin b�y�k/k���k harf duyars�z kar��la�t�rmas�n� ger�ekle�tiren bir standart k�t�phane fonksiyonudur.

#include<stdio.h>

int my_strcasecmp (char* str1, char* str2)
{
	
	while(*str1 && *str2)// str1 ve str2 pointerlar� \0 olana kadar (null karakter olana kadar d�necekler) 
	{
		char c1 = *str1;
		char c2 = *str2;
		
		if(c1 >= 'A' && c1 <= 'Z')
		{
			c1 = c1 + 32;
		}
		
		if(c2 >= 'A' && c2 <='Z')
		{
			c2 = c2 + 32;
		}
		
		str1++;
		str2++;
	}
	
	return *str1 - *str2; // \0 (null) karakter aras�ndaki fark� d�nd�r�r. 
	
} 

int main()
{
	char str1[] = "BERKAY";
	char str2[] = "berkay";
	
	int result = my_strcasecmp(str1,str2);
		
		if(result == 0)
		{
			printf("strings are equal\n");
		}
		else if (result < 0)
		{
			printf("str1 is less than str2 \n ");	
		}	
		else
		{
			printf("str1 is greater than str2\n");
		}
	
	
	return 0;
}
