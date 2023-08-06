//Bir karakter dizisinin büyük/küçük harf duyarsýz karþýlaþtýrmasýný gerçekleþtiren bir standart kütüphane fonksiyonudur.

#include<stdio.h>

int my_strcasecmp (char* str1, char* str2)
{
	
	while(*str1 && *str2)// str1 ve str2 pointerlarý \0 olana kadar (null karakter olana kadar dönecekler) 
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
	
	return *str1 - *str2; // \0 (null) karakter arasýndaki farký döndürür. 
	
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
