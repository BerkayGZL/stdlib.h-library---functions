#include<stdio.h>

int strlen(char*str)
{
	int length=0;
	
	while(*str != '\0')
	{
		length++;
		str++;
	}
	
	return length;
}

int main ()
{
	char str[] = "berkay";
	int length = 0;
	
	length = strlen(str);
	
	printf("character long is: %d", length);
	
	
	return 0;
}
