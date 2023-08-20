#include <stdio.h>
#include <stdlib.h>

void multiplica(int *ponteiro);

int main(int argc, char *argv[]) {
	
	int valor;
	int *p;
	
	printf ("Digite um valor: ");
	scanf ("%d",&valor);
	
	p = &valor;
	
	multiplica(p);
	
	printf("Resultado da multiplicacao por 4: %d", *p);
	
	return 0;
}
void multiplica(int *ponteiro){
	*ponteiro = *ponteiro * 4;
}

