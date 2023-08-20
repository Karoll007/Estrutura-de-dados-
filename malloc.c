#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int *list = malloc(3 * sizeof(int));
	int i;

	if(list == NULL ) 	/*Checar se o valor da lista é nulo*/
	{ 
	
		return 1;
	}
	/*operação matemática de ponteiro - Vá para o endereço *list e adicione "tal numero" lá (1,2,3)
	*list = 1; - primeiro endereço
	*(list + 1) = 2; - segundo endereço
	*(list + 2) = 3; - terceiro endereço
	*/
	
	printf("Primeira lista: \n");
	
	list[0] = 1;
	list[1] = 2;
	list[2] = 3;
	
		for(i = 0; i<3; i++){
		printf("%d\n", list[i]);
	}
	int *temp = malloc (4 * sizeof(int)); /* Alocando espaço dinamicamente para mais inteiros,no caso,4. */
	
	if (temp == NULL)
	{
		free(list);
		return 1;
	}
	
	for(i = 0; i<3; i++)
	{
		temp[i] = list [i]; /*Copiando os vallores para esse pedaço de memória temporário (temp) os valores da lista original*/
	}
	
	temp[3] = 4;
	free(list); /*Liberar lista original*/
	
	
	list = temp; /* Atualizar lista antiga p/ apontar para nova lista - indicando o endereço p/ esse novo pedeço de memória*/
	
		printf(" \nSegunda lista: ");
	for(i = 0; i<4; i++)
	{
		printf("\n%d", list[i]);
	}
	
	return 0;
}

/* Nesse código o malloc foi utilizado para alocar memória de forma dinâmica. Se uma array fosse declarado (alocação estática) como forma de alocar espaço, seria necessário reescrever 
o código, caso alguma alteração em seu tamanho fosse solicitado.*/
