#include <stdio.h>
#include <malloc.h>
#include "mm.h"
#include "memlib.h"

int main() {
	mem_init();
	int *p[10];
	int *p2[10];
	for (int i = 0; i < 10; i++) {
	        p[i] = malloc(32);
		printf("0x%x\n",p[i]);
	}
	for (int i = 0; i < 10; i++) {
		if (i % 2 != 0)
			free(p[i]);
	}
	for (int i = 0; i < 10; i++) {
		p2[i] = malloc((i+1)*8);
		printf("0x%x\n",p2[i]);
	}
	return 0;
}
