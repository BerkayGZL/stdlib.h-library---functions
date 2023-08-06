// belirlenen karakteri uzun bir string ifade içinde bulup döndüren fonksiyondur.

#include<stdio.h>
void *my_memchr(void *ptr, int c, int num) // // void tipinde ptr pointer tanýmlandý.
{
    char *p = (char*)ptr; //  void tipindeki ptr pointerý type cast ile char dönüþtürülür.
    
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
    
    
    char *buffer = (char*) my_memchr(str,'z',sizeof(str)); // typecast yapýldý. void den char geçildi. 
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
