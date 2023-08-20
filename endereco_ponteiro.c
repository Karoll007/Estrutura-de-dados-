#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int num, *p;
	
	printf("Digite um valor: ");
	scanf("%d",&num);
	
	p = &num;
	
	printf("\n Valor do ponteiro: %d", *p);
	printf("\n Endereco do ponteiro: %p", *p);
	
	
	return 0;
}
