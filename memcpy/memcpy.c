// src de bulunan bir karakteri target olarak belirlenen pointera yazma iþemini tamamlar. 
#include <stdio.h>

void *my_memcpy(void *target, const void *src, size_t n) // src deðeri okunacak ama deðiþmeyeceði için const olarak tanýmlandý.
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
