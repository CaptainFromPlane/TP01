#include <stdio.h>
#include <unistd.h>

void task1(){
	printf("Task1\n");
	sleep(1);
}

void task2(){
	printf("Task2\n");
	sleep(2);
}
void task3(){
	printf("Task3\n");
	sleep(3);
}

int main(){
	while(1){
		task1();
		task2();
		task3();
	}
}