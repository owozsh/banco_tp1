#include <stdio.h>

int main() { 
	int n;

	printf("Digite o valor de n: ");
	scanf("%d", &n);

	if (n % 2 == 0 && n < 3) return 0;

	char n_string[n];
	for (int i = 0; i < n; i++) n_string[i] = '*';

	for (int i = 0; i < n; i++) {
		printf("%*s%.*s\n", (n/2)-i, "", (i > n/2) ? 2*(n-i)-1 : 2*i+1, n_string);
	}
}
