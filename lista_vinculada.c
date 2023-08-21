#include <stdio.h>
#include <stdlib.h>

typedef struct node{      /*Criando o n�*/
	int number;
	struct node *next; /*Armazena o endere�o do pr�ximo ponteiro*/
}
node;

int main(int argc, char *argv[]) {
	
	node *list = NULL;
	
	node *n = malloc(sizeof(node));   /* Alocando um n� tempor�rio perguntando o tamanho de um n�*/
	if (n == NULL)                   /*Verificando se h� mem�ria suficiente  */
	{
		return 1;
	}
	
	n -> number = 1;                     /* entrando no n� "n" , depois entrar no campo num�rico (number) e declarar 1*/
	n -> next = NULL;                    /*Entra no campo next e declara como NULL*/
	list = n;                            /*Atualizando a lista para apontar para esse valor*/
	
	n = malloc(sizeof(node));            /*Alocando um novo n�*/
	if (n == NULL)
	{
		free(list);
		return 1;
	}
	
	n -> number = 2;
	n -> next = NULL;
	list -> next = n;                           /* Colocando o 2 depois do 1 - Come�a no topo da lista, depois vai para o pr�ximo n�*/
	
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
	
	for(node *temp = list ; temp != NULL; temp = temp -> next)  /* D� um ponteiro tempor�rio chamdo "temp" e inicialize com o que estiver no in�cio da lista; continue fazendo desde que temp != NULL; em cada itera��o desse loop atualize meu ponteiro tempor�rio seja qualquer que seja o valor do pr�ximo campo do ponteiro tempor�rio*/
	{
		printf("%i", temp -> number);                        /* temp = temp -> next - pega tudo que voc� est� apontando, segue uma seta e, em seguida, atualiza a vari�vel tempor�ria para apontar para essa estrutura  */
	}
	
	while ( list != NULL)
	{
		node *temp = list -> next;
		free(list);
		list = temp;
	
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
