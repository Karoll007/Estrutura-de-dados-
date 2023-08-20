#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int *list = malloc(3 * sizeof(int));
	int i;

	if(list == NULL ) 	/*Checar se o valor da lista é nulo*/
	{ 
	
		return 1;
	}
	printf("Primeira lista: \n");
	
	list[0] = 1;
	list[1] = 2;
	list[2] = 3;
	
		for(i = 0; i<3; i++){
		printf("%d\n", list[i]);
	}
	int *temp = realloc (list, 4 * sizeof(int)); /* realloc - realocar um pedaço de memória 4x o tamanho do int, mas realocar  especificamente a variável "list". */
	
	if (temp == NULL)
	{
		free(list);
		return 1;
	}
	
	temp[3] = 4;
	
	
	
	
	
		printf(" \nSegunda lista: ");
	for(i = 0; i<4; i++)
	{
		printf("\n%d", list[i]);
	}
	
	return 0;
}

/* Nesse código foi utilizado "realloc" para realocar um pedaço ESPECÍFICO de memória (list). Para se ultilizar realloc são necessários dois argumentos:
o primeiro é o endereço de um pedaço dememória (list). Na linha 24 o endereço alocado por malloc (linha 7) é devolvido para realloc e indicando o endereço a ser REdimensionado e
realocado para o tamanho 4. Ao ultilizar o "realloc" torna-se desnecessário copiar os valores de uma variável para a variável temporária, realloc copia o antigo no novo de forma
automática. Devolve o endereço de um novo endereço de memória grande o suficiente para caber os novos valores.  */

	/*
	for(i = 0; i<3; i++)  - Isso torna-se desnecessário, visto que, realloc dará um pedaço de memória maior além de devolver o que você já havia solicitado automaticamente
	{
		temp[i] = list [i] - copiar valores da lista original p/ a lista temporária
	}; 
    */

