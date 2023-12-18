#include <stdio.h>

int main() {
	int a = 0;
	int b = 5;
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	printf("a + b = %d \n",a+b);
	
	if (a > b){
		printf("a > b\n");
	} else {
		printf("a < b\n");
	}
	
	for (unsigned int i = 0; i < 10; i++){
		printf("i = %d\n",i);
	}	
	return 0;
}
