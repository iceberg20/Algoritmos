/* IFRN - Ítalo Berg */

#include <stdio.h>
#include <stdlib.h>

struct ListaNumero{
	int numero;
	struct ListaNumero * proximo;
};


struct ListaNumero * inserirInicio(int numero, struct ListaNumero * lista)
{
	struct ListaNumero * novo;
	novo = (struct ListaNumero*) malloc(sizeof(struct ListaNumero));
	novo->numero = numero;
	if(lista == NULL) {
		lista = novo;
		printf(">>>>> Numero adicionado com sucesso! <<<<< \n");
	}
	else {
		novo->proximo = lista;
		lista = novo;
		printf(">>>>> Numero adicionado com sucesso! <<<<< \n");
	}

	return lista;
}

struct ListaNumero * inserirFim(int numero, struct ListaNumero * inicio)
{
	struct ListaNumero * novo = NULL;
	struct ListaNumero * ptr;
	ptr = inicio;
	novo = (struct ListaNumero*) malloc(sizeof(struct ListaNumero));
	novo->numero = numero;
	if( ptr == NULL){
		inicio = novo;
		printf(">>>>> Numero adicionado com sucesso! <<<<< \n");
	}
	else {
		while(ptr->proximo != NULL) {
		   	ptr = ptr->proximo;
		}
		ptr->proximo = novo;
		novo->proximo = NULL;
		printf(">>>>> Numero adicionado com sucesso! <<<<< \n");
	}
	return inicio;
}   

void exibir(struct ListaNumero * inicio)
{
	struct ListaNumero * ptr = NULL;
	ptr = inicio;
	if(ptr == NULL){
		printf(">>>>> Lista Vazia! <<<<< \n");
	}
	else {
		while(ptr != NULL){
			printf("%d ",ptr->numero);
			ptr = ptr->proximo;
		}
		printf("\n------- Fim da Listagem ---- \n");
	}
}

struct ListaNumero * removerInicio(struct ListaNumero * inicio){
		struct ListaNumero * velho;
		if(inicio != NULL){
			velho = inicio;
			inicio = inicio->proximo;
			free(velho);
		}
		else {
			printf(">>>>> Não há nada para remover! <<<<< \n");
			printf(">>>>> Lista Vazia! <<<<< \n");
		}

		return inicio;
}

struct ListaNumero * removeFim(struct ListaNumero * inicio){
		struct ListaNumero * velho, *ptr;
		ptr = inicio;
		if(inicio != NULL){
			while(ptr->proximo != NULL){
				ptr = ptr->proximo;
			}
			velho = ptr;
			ptr = inicio->proximo;
			free(velho);
		}
		else {
			printf(">>>>> Não há nada para remover! <<<<< \n");
			printf(">>>>> Lista Vazia! <<<<< \n");
		}

		return inicio;
}





int main(int argc, char** argv)
{
 	struct ListaNumero * inicio = NULL;
 	int op = 0;
 	int numero = 0;
 	while(op != 5){
 		printf("Digite <1> para inserir no inicio, <2> listar <3> inserir no fim <4> remover no inicio e <5> para sair \n");
 		scanf("%d", &op);
 		if(op == 1){
 			printf("Digite o numero a ser adicionado: \n");
 			scanf("%d", &numero);
 			inicio = inserirInicio(numero, inicio); 			
 		}
 		else if(op == 2){
 			printf("Exibindo lista.... \n");
 			exibir(inicio);

 		}
 		else if(op ==3){
 			printf("Digite o numero a ser adicionado: \n");
 			scanf("%d", &numero);
 			inicio = inserirFim(numero, inicio);
 		}
 		else if(op == 4){
 			inicio = removerInicio(inicio);
 		}
 		else op =5;
 	}
	return 0;
}