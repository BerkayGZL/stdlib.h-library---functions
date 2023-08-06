// Bir bellek bloðunu belirli bir deðerle doldurmak için kullanýlýr. 

#include<stdio.h>

void* my_memset(void* ptr, int value, int num) // void tipinde ptr pointer tanýmlandý. 
{ 
	char* p = (char*) ptr; // ptr pointer typecast yapýldý.
	
	for(int i=0; i<num; i++)
	{
		p[i] = value; // value  degeri sürekli p[i] degerine atandý.
		
	}
	
	return ptr;
}

int main() {
	
	char str[] = "berkay";
	
	my_memset(str, 'b', sizeof(str));
	
	printf("%s", str);
	
	
	return 0;
}
