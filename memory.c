#include <stdio.h>

int main(){

	unsigned int mem = 15;
	unsigned int *ptr = &mem;
	printf("memory address = %p\n",ptr);
	return 0;
}
