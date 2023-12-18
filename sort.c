#include <stdio.h>

int main(){
	int a[3] = {1,2,3};
	for (int i=0;i < 3;i++){
		if (a[i] == 2){
			printf("value found at index = %d\n",i);
		}
	}
	return 0;
}
