#include "stdio.h"
#include "stdlib.h"

int main(int argc, char** argv) {

	float a[1000];
	int i, Q_elem_a;

	for (i = 1; i < argc; i++) {
		a[i - 1] = atof(argv[i]);
		fprintf(stderr, "%.2f ", a[i - 1]);
	}
	fprintf(stderr, "\n");
	Q_elem_a = argc - 1;

	// Não modifique o código acima

	// Encontre os três maiores elementos do vetor de 
	// float a[]. Os três valores devem ser retornados
	// segundo as regras explicadas adiante.
	// Ao desenvolver seu algoritmo, não é permitido
	// modificar ou duplicar o vetor a[].
	// Também não é permitido usar um algoritmo de 
	// ordenação para compor o seu algoritmo.
	// Crie suas variáveis aqui
	
	int i_maiores[3] = { 0, 0, 0 };
	int j;

	// Crie o corpo do seu código aqui
	
	for (j = 0; j < 3; j++) {
		for (i = 0; i < Q_elem_a; i++) {
			if (j == 2) {
				if (i == i_maiores[1] || i == i_maiores[0]) {
					continue;
				}
			}
			else if (j == 1) {
				if (i == i_maiores[0]) {
					continue;
				}
			}
			else {
				// Para j == 0 não há maiores
			}
			if (a[i] > a[i_maiores[j]]) {
				i_maiores[j] = i;
			}
		}
	}


	// A saída deve ser para a stdout e deve ser na forma de 
	// uma string contendo os 3 maiores elementos em ordem
	// decrescente, serados por um espaço entre eles.
	// O último caractere da string deve ser o
	// pula linha '\n'. 
	// Exemplo: "<maior>< ><2o_maior>< ><3o_maior><\n>"
	// <  > servem para representar os componentes da string
	// e não devem ser impressos.
	// Os valores devem ser arredondados com 2 casas decimais.
	// Crie a saída para o programa de testes automático aqui

	fprintf(stderr, "Os 3 maiores elementos em ordem descrescente:\n");
	printf("%.2f %.2f %.2f\n", a[i_maiores[0]], a[i_maiores[1]], a[i_maiores[2]]);

	// Não modifique o código abaixo

	return 0;
}

