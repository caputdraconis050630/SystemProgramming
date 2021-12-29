#include <stdio.h>
#include <stdlib.h>

void *Malloc(size_t size) 
{
    void *p;

    if ((p  = malloc(size)) == NULL)
	perror("Malloc error");
    return p;
}

