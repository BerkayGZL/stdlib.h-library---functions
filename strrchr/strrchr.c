#include <stdio.h>

char* strrchr (char* str, int character){
	
	char* last;
	
	for(; *str !='\0'; str++){
		
		if( *str == character){
			last = (char*)str;
		}
		
	}
	return last;
}

int main(){
	char str[] = "berkayyyguzel!";
    char ch = 'l';

    char* result = strrchr(str, ch);

    if (result != NULL) {
        printf("Last occurrence of '%c' found at position: %ld\n", ch, result - str);
    } else {
        printf("'%c' not found in the string.\n", ch);
    }

    return 0;

}
