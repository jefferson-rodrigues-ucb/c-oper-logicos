#include<stdio.h>

int main() {
	float a, b;
	char o;
	printf("Digite a conta: ");
	scanf("%f %c %f", &a, &o, &b);
	
	switch(o) {
		case '+': printf("%.2f + %.2f = %.2f\n", a, b, a + b); break;
		case '-': printf("%.2f - %.2f = %.2f\n", a, b, a - b); break;
		case '*': printf("%.2f * %.2f = %.2f\n", a, b, a * b); break;
		case '/': printf("%.2f / %.2f = %.2f\n", a, b, a / b); break;
		default: printf("Valor invalido.\n");
	}
	
	return 0;
}
