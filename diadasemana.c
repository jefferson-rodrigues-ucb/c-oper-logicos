#include <stdio.h>

int main() {
	int dia;
	printf("Digite o dia (1-7): ");
	scanf("%d", & dia);
	
	/*if(dia == 1) {
		printf("Domingo\n");
	} else if (dia == 2) {
		printf("Segunda\n");
	} ...*/
	
	switch(dia) {
		case 1: printf("Domingo"); break;
		case 2: printf("Segunda"); break;
		case 3: printf("Terca"); break;
		case 4: printf("Quarta"); break;
		case 5: printf("Quinta"); break;
		case 6: printf("Sexta"); break;
		case 7: printf("Sabado"); break;
		default: printf("Valor invalido");
	}
	
	return 0;
}
