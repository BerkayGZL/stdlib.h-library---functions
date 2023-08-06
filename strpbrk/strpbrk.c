// str1 karakter dizisinde str2 sesli harf varlýðýna bakar.

#include <stdio.h>

char *strpbrk(char *str1, char *str2 ){
	
	for (; *str1 != '\0'; str1++){
		
		char* char_ptr;
		for( char_ptr = str2; *char_ptr != '\0'; char_ptr++){
			
			if(*str1 == *char_ptr){
				
				return (char *)str1;
			}
		}
	}
}

int main() {
    char str1[] = "bbbberkay";
    char str2[] = "aeiou"; // Set of vowels

    char* result = strpbrk(str1, str2);

    if (result != NULL) {
        printf("First vowel found: %c\n", *result);
    } else {
        printf("No vowels found.\n");
    }

    return 0;
}
