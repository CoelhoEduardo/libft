#include <stdlib.h>

void  ft_memmove(void *dest, void *src, unsigned int n)
{
  char  *cdest;
  char  *csrc;
  unsigned int  i;

  cdest = dest;
  csrc = src;
  i = 0;

  if (cdest == csrc)
  {
    return;
  }

  if (cdest > csrc)
  {
    while (i < n)
    {
      cdest[i] = csrc[i];
      i++;
    }
  }
  else 
  {
    i = n;
    while (i > 0)
    {
      cdest[i - 1] = csrc[i - 1];
      i--;
    }
  }
}

#include <stdio.h>
int main() {
    char source[] = "Hello, World!";
    char destination[20];

    // Copiando a string source para destination com sobreposição segura.
    ft_memmove(destination, source, 13);

    printf("Destination: %s\n", destination);

    return 0;
}
