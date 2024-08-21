#include<stdio.h>

int main() {
	float a, b;
	char oper;
	
	printf("Digite a conta: ");
	scanf("%f %c %f", &a, &oper, &b);
	
	switch(oper) {
		case '+': printf("%.2f + %.2f = %.2f", a, b, a + b); break;
		case '-': printf("%.2f - %.2f = %.2f", a, b, a - b); break;
		case '*': printf("%.2f * %.2f = %.2f", a, b, a * b); break;
		case '/':
			if (b != 0) {
				printf("%.2f / %.2f = %.2f", a, b, a / b); break;
			} else {
				printf("Divisao por zero nao permitida.");
			}
			break;		
		default: printf("Operacao invalida");
	}
	
	return 0;
}