#include <stdio.h>

long int my_atol(const char *str) {
    long int result = 0;
    int i = 0;

    for (; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            result = result * 10 + (str[i] - '0');
        } else {
            break;
        }
    }

    return result;
}

int main() {
	while(1){
	
    char str[20];
    printf("string olarak bir sayi giriniz = ");
    scanf("%s", str);
    long int sayi = my_atol(str);
    printf("sayi: %ld\n", sayi);
	}
	return 0;
}
