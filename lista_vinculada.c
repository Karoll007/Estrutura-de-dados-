#include <stdio.h>
#include <stdlib.h>

typedef struct node{      /*Criando o nó*/
	int number;
	struct node *next; /*Armazena o endereço do próximo ponteiro*/
}
node;

int main(int argc, char *argv[]) {
	
	node *list = NULL;
	
	node *n = malloc(sizeof(node));   /* Alocando um nó temporário perguntando o tamanho de um nó*/
	if (n == NULL)                   /*Verificando se há memória suficiente  */
	{
		return 1;
	}
	
	n -> number = 1;                     /* entrando no nó "n" , depois entrar no campo numérico (number) e declarar 1*/
	n -> next = NULL;                    /*Entra no campo next e declara como NULL*/
	list = n;                            /*Atualizando a lista para apontar para esse valor*/
	
	n = malloc(sizeof(node));            /*Alocando um novo nó*/
	if (n == NULL)
	{
		free(list);
		return 1;
	}
	
	n -> number = 2;
	n -> next = NULL;
	list -> next = n;                           /* Colocando o 2 depois do 1 - Começa no topo da lista, depois vai para o próximo nó*/
	
	n = malloc(sizeof(node));
	if(n == NULL)
	{
		free (list -> next);
		free(list);
		return 1;
	}
	
	n -> number = 3;
	n -> next = NULL;
	list -> next ->next = n;
	
	/*Imprimindo a lista*/
	
	for(node *temp = list ; temp != NULL; temp = temp -> next)  /* Dê um ponteiro temporário chamdo "temp" e inicialize com o que estiver no início da lista; continue fazendo desde que temp != NULL; em cada iteração desse loop atualize meu ponteiro temporário seja qualquer que seja o valor do próximo campo do ponteiro temporário*/
	{
		printf("%i", temp -> number);                        /* temp = temp -> next - pega tudo que você está apontando, segue uma seta e, em seguida, atualiza a variável temporária para apontar para essa estrutura  */
	}
	
	while ( list != NULL)
	{
		node *temp = list -> next;
		free(list);
		list = temp;
	
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
