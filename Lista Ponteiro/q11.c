#include <stdio.h>
#include <stdlib.h> 

void capitalize(char *string) {
    char *ptr = string++;
    char *ant = string;

    char dif = 'a' - 'A';
    *ptr = *ptr - dif;
    while (*ptr != '\0') {
       if (*ant >= 'a' && *ant <= 'z') {
       		if( *ptr == ' ' )
       	  	 *ant = *ant - dif;
	}
		ptr++;
		ant++;
	}
}

int main(int argc,char **argv){

	char nome[20] = "italo berg marques";
	capitalize(nome);
	printf("%s\n", nome);
	

	return 0;
}