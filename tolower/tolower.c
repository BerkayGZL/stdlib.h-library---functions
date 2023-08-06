// covert  from A to a char type 
#include<stdio.h>

int tolower(int input){
	
	if('A' <= input && 'Z' ){
		
		input = input + ('a' -'A');
		return input; 
	} else{
	return	input;
	} 
	 
}

int main() {

	char ch = 'A';
	char LowerCh = tolower(ch);

	printf("LowerCase chr: %c ", LowerCh);


return 0;	
}

