#include <stdlib.h>

void *ft_memset(void *s, int c, unsigned int len)
{
    unsigned char *pointer;

    pointer = (unsigned char *) s;

    while (len)
    {
        *pointer++ = (unsigned char)c;
        len--;
    }

    return s;
}

void    *ft_calloc(unsigned int nmemb, unsigned int size)
{
    void    *pointer;

    pointer = malloc(nmemb * size);
    if (pointer == 0)
    {
        return 0;
    }

    ft_memset(pointer, 0, nmemb * size);

    return pointer;
}

#include <stdio.h>

int main()
{
 
    // This pointer will hold the
    // base address of the block created
    int* ptr;
    int n, i;
 
    // Get the number of elements for the array
    n = 5;
    printf("Enter number of elements: %d\n", n);
 
    // Dynamically allocate memory using calloc()
    ptr = (int*)calloc(n, sizeof(int));
 
    // Check if the memory has been successfully
    // allocated by calloc or not
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {
 
        // Memory has been successfully allocated
        printf("Memory successfully allocated using calloc.\n");
 
        // Get the elements of the array
        for (i = 0; i < n; ++i) {
            ptr[i] = i + 1;
        }
 
        // Print the elements of the array
        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i) {
            printf("%d, ", ptr[i]);
        }
    }
 
    return 0;
}
