#include <stdio.h>
#include <stdlib.h>

int main(int argc, char**argv){
	
	int a=2;
	int *ptr = &a;
	printf("%d \n", *ptr);
	*ptr = 3;
	printf("%d \n", *ptr);
	return 0;
}