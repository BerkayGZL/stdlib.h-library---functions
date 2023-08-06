// atoi str"12345" ifadesini tam sayýya çevirmek için kullanýlýr. örneðin 123 için 1*10+2=12,  12*10+3=123  
#include <stdio.h>

int my_atoi(const char *str) {
    int result = 0; 
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
    char str[5];
    printf("string olarak bir sayi giriniz = ");
    scanf("%s", str);
    int sayi = my_atoi(str);
    printf("Sayi: %d\n", sayi);
    }
	return 0;
}
