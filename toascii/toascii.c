// girilen karakter deðerini ASC2 deðerine çeviren program örneði
# include<stdio.h>

int toascii (int input){
	
	input = input & 0x7F;
	return input;
}

int main(){
	
	char ch = '1';
	
	int asc2value = toascii(ch);
	
	printf("The ASCII Value: %d", asc2value);
	
	
	
	return 0; 
}
