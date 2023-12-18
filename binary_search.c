#include <stdio.h>

typedef enum { false, true} bool;

int main(){
	int N = 4;
	int list[N];
	list[0] = 1;
	list[1] = 2;
	list[2] = 5;
	list[3] = 15;
	
	bool find = false;
	int start = list[0];
	int end = list[3];
	int value = 5;
	int mil = ((start + end) % 2);
	printf("value searched = %d\n",value);

	printf("list = ");	
	for(int i=0;i < N;i++){
		printf(" %d",list[i]);
	}
	printf("\n");
	while((find != true) == (start <= end)){
		mil = ((start + end) %2);
		if (mil == value){
			find = true;
		} else {
			if (value > list[mil]){
				start = mil + 1;
			}else {
				end = mil - 1;
			}
		}
	}
	if (find == true){
		printf(" au rang %d",mil);
	}
	else {
		printf("pas dans le tableau");
	}
	return 0;
}
