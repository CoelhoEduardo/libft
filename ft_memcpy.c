void  ft_memcpy(void *dest, void *src, unsigned int n)
{
  char  *csrc;
  char  *cdest;
  unsigned int i;

  i = 0;
  csrc = src;
  cdest = dest;

  while (i < n)
  {
    cdest[i] = csrc[i];
    i++;
  }
}

#include<stdio.h> 
#include<string.h> 
int main(void)
{
  char  csrc[] = "Tudo isso é para 42! vamo q vamo";
  char  cdest[] = "Testando";

  ft_memcpy(cdest, csrc, strlen(csrc)+1);
  printf("Copied string is %s", cdest);

  int isrc[] = {10, 20, 30, 40, 50}; 
  int n = sizeof(isrc)/sizeof(isrc[0]); 
  int idest[n], i; 
  ft_memcpy(idest, isrc, sizeof(isrc)); 
  printf("\nCopied array is "); 
  for (i=0; i<n; i++) 
    printf("%d ", idest[i]);

  return (0);
}
