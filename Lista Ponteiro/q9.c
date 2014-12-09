#include <stdio.h>
#include <stdlib.h> 

void funcao(char *a, char *b) {
           do {
                *b = *a;
                a++;
                b++;
           } while (*a != '\0');
	*b = *a; 
}

int main(int argc,char **argv){

	char t1[10] = "1111";
	char t2[10] = "2222";
	funcao(t1,t2);

	printf("%s \n", t1);
	printf("%s \n", t2);



	return 0;
}

