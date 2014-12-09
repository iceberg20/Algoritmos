#include <stdio.h>
#include <stdlib.h> 

void swap (int *a, int *b)
{
	int aux = *a;
	*a = *b;
	*b = aux;
}

int main(int argc,char **argv){

			int a =2;
			int b =3;
			int *p1 = &a;
			int *p2 = &b;
			printf("*p1 = %d \n", *p1);
			printf("*p2 = %d \n", *p2);
			printf("Swap(p1,p2) \n");
			swap(p1,p2);
			printf("*p1 = %d \n", *p1);
			printf("*p2 = %d \n", *p2);

           return 0;
}

