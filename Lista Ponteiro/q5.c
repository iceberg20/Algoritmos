#include <stdio.h>
#include <stdlib.h> 

int main(int argc,char **argv){
           int a,b;
           int *pa, *pb;
           a = 10;
           b = 20;
           pa = &a;
           pb = &b;
           *pa = *pb * 2;
           printf("%d,%d\n",a,b);
           return 0;
}