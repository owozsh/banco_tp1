#include <stdio.h>

int main() { 
	int n;

	printf("Digite um numero: ");
	scanf("%d", &n);

	if (n % 2 == 0 && n > 1) {
		float h = 0;

		for (int i = 0; i < n; i++) {
			if (i == 0) h++;
			else if (i % 2 == 0) h += 1. / (i * 2);
			else h -= 1. / (i * 2);
		}

		printf("%.2f", h);
	}

	else printf("Dados inválidos\n");
}
