#include<stdio.h>
#include<stdlib.h>

void blah() {
	int x,y,z;
}

int main() {
	int *ptr = (int*)malloc(1024);
	getchar();
	blah();
	printf("no debugger present\n");
	return 0;
	printf("debugger present\n");
	getchar();
}