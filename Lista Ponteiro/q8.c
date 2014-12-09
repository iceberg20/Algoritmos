#include <stdio.h>
#include <stdlib.h> 

int main(int argc, char **argv){
         int x;
         int *ptr;
         ptr = &x;
         scanf("%d",ptr);
         printf("%d \n", x);
         return 0;
}
