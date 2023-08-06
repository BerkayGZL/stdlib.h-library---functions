// Bir bellek blo�unu belirli bir de�erle doldurmak i�in kullan�l�r. 

#include<stdio.h>

void* my_memset(void* ptr, int value, int num) // void tipinde ptr pointer tan�mland�. 
{ 
	char* p = (char*) ptr; // ptr pointer typecast yap�ld�.
	
	for(int i=0; i<num; i++)
	{
		p[i] = value; // value  degeri s�rekli p[i] degerine atand�.
		
	}
	
	return ptr;
}

int main() {
	
	char str[] = "berkay";
	
	my_memset(str, 'b', sizeof(str));
	
	printf("%s", str);
	
	
	return 0;
}
