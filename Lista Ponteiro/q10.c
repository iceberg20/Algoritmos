#include <stdio.h>
#include <stdlib.h> 

int main(int argc,char **argv){

	int pulo[3];
	pulo[0] = 1;
	pulo[1] = 2;
	pulo[2] = 3;
	printf("%d \n", *(pulo +2));

	return 0;
}

