//Bu fonksiyon iki karakter dizisini büyük/küçük harf duyarsýz olarak karþýlaþtýrýr.
#include<stdio.h>

int strncasecmp(char *s1, char *s2, int n){
	
	while(n>0){
		
		char c1 = *s1;
		char c2 = *s2;
		
		if (c1 >= 'A' && c1 <='Z'){
			c1 +=32;
		}
		if (c2 >= 'A' && c2 <='Z'){
		c2 +=32;
		}
		
		if (c1 != c2){
			return c1-c2;
		}
		
		if(c1 =='\0'){
			break;
		}
		
		s1++;
		s2++;
		n--;
	}
	
	return 0;
}


int main(){
	
	char *str1 = "BERKAY";
	char *str2 = "berkay";
	
	int result = strncasecmp(str1, str2, 5);
	
	if (result == 0) {
        printf("The strings are equal.\n");
    } 
	else if (result < 0) {
        printf("str1 comes before str2.\n");
    } 
	else {
        printf("str2 comes before str1.\n");
    }
    
    return 0;
}
