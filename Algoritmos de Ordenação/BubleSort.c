#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int v[10] = {10,9,8,7,6,5,4,3,2,1};
    int tam = 10;
    int aux =0;
    int i;
    int j;
    int cont = 1;
    int x;
    
    printf("Inicial Array \n");
    for(x =0; x<tam; x++)
    {
            printf("%d ", v[x]);
            if(x==9) printf("\n \n");
    }
    
    for(i = tam-1; i>=1; i--)
    {
            for(j=0; j<i; j++)
            {
                    if(v[j]>v[j+1])
                    {
                        aux = v[j];
                        v[j] = v[j+1];    
                        v[j+1] = aux;          
                    }
            }    
            //    printf("After %d iteretations \n \n",cont);
                cont++;
                for(x =0; x<tam; x++)
                {
                        printf("%d ", v[x]);
                        if(x==9) printf("\n");
                }
    }
    
    printf("\nFinal Array \n");
    for(x =0; x<tam; x++)
    {
            printf("%d ", v[x]);
            if(x==9) printf("\n \n");
    }
    
   
    
    
  
  system("PAUSE");	
  return 0;
}
