#include <stdio.h>
#include <stdlib.h> 

int main(int argc,char **argv){

	char *string = "italo berg marques";
	
	printf("%c \n",*string);
	printf("%c \n",*(string+1));
	printf("%d \n",*string);
	printf("%d \n",*string+1);
	char a = 'a';
	char b = 'b';
	char *a = &a;
	char *A = &b;
	char *ptr;
	printf("%c = %d \n", *a, *a);
	printf("%c = %d \n", *A, *A);
	char dif = 'a' - 'A';
	*ptr = *ptr - dif;
	printf("%c = %d \n", *ptr, *ptr;


	return 0;
}