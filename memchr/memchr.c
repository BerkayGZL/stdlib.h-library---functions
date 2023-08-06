// belirlenen karakteri uzun bir string ifade i�inde bulup d�nd�ren fonksiyondur.

#include<stdio.h>
void *my_memchr(void *ptr, int c, int num) // // void tipinde ptr pointer tan�mland�.
{
    char *p = (char*)ptr; //  void tipindeki ptr pointer� type cast ile char d�n��t�r�l�r.
    
    for (int i=0; i<num; i++)
	{
      if (p[i] == (char) c) 
	  {
            return (void*)(p + i);
      }
    }

    return NULL;
}

int main()
{
    char str[] = "berkayguzel";
    
    
    char *buffer = (char*) my_memchr(str,'z',sizeof(str)); // typecast yap�ld�. void den char ge�ildi. 
    if (buffer != NULL)
    {
        printf ("found character:  %s\n", buffer);
    }
    else
    {
        printf ("didn't find character': \n");
    }
    return 0;
}
