// src de bulunan bir karakteri target olarak belirlenen pointera yazma i�emini tamamlar. 
#include <stdio.h>

void *my_memcpy(void *target, const void *src, size_t n) // src de�eri okunacak ama de�i�meyece�i i�in const olarak tan�mland�.
{
    char *ptarget = (char*) target;        
    const char *psrc = (const char*)src;    
    
    while (n--)
    {
        *ptarget++ = *psrc++;    
    }
    
    return target;
}

int main()
{
    const char src[] = "Berkay Guzel!!!";
    char target[20];
    
    my_memcpy(target, src, sizeof(src));
    
    printf("src : %s\n", src);
    printf("target : %s\n", target);
    
    return 0;
}
