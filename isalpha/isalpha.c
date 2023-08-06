// alfabede olup olmadýðýný kontrol etmek için kullanýlýr. 
#include <stdio.h>

int my_isalpha(int c) {
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
       
	 	char ch;
    	printf("Bir karakter girin: ");
    	scanf("%c", &ch);

    	if (my_isalpha(ch)) {
        	printf("%c bir harftir.\n", ch);
    	} else {
        	printf("%c bir harf degildir.\n", ch);
    	}
    return 0;
}
