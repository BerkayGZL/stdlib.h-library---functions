// covert  from a to A char type 
#include<stdio.h>

int tolower(int input){
	
	if('a' <= input && 'z' ){
		
		input = input - ('a' -'A');
		return input; 
	} else{
	return	input;
	} 
	 
}

int main() {

	char ch = 'a';
	char LowerCh = tolower(ch);

	printf("LowerCase chr: %c ", LowerCh);


return 0;	
}

