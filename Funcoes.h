
#ifndef FUNCOES_H
#define FUNCOES_H

#define TAMANHO_MATRIZ 5

#define ESCOPO_BUSCA_MATRIZ_DIAGONALPRINCIPAL 1
#define ESCOPO_BUSCA_MATRIZ_DIAGONALSECUNDARIA 2
#define ESCOPO_BUSCA_MATRIZ_DIAGONAIS 3
#define ESCOPO_BUSCA_MATRIZ_COMPLETA 4


void bubbleSort(int vetor[], int tamanho, bool ordenacaoCrescente) {
	if (ordenacaoCrescente == true) {
		for (int i = 0; i < tamanho; i++)
		{
			for (int i = 0; i < tamanho - 1; i++)
			{
				if (vetor[i] > vetor[i + 1]) {
					int auxiliar = vetor[i + 1];
					vetor[i + 1] = vetor[i];
					vetor[i] = auxiliar;
				}
			}
		}
	}
	else {
		for (int i = 0; i < tamanho; i++)
		{
			for (int i = 0; i < tamanho - 1; i++)
			{
				if (vetor[i] < vetor[i + 1]) {
					int auxiliar = vetor[i + 1];
					vetor[i + 1] = vetor[i];
					vetor[i] = auxiliar;
				}
			}
		}
	}

}

int maiorValorEmVetor(int vetor[], int tamanho) {
	int maiorValor = vetor[0];
	for (int i = 0; i < tamanho - 1; i++)
	{
		if (vetor[i + 1] > maiorValor) {
			maiorValor = vetor[i + 1];
		}
	}
}

int menorValorEmVetor(int vetor[], int tamanho) {
	int menorValor = vetor[0];
	for (int i = 0; i < tamanho - 1; i++)
	{
		if (vetor[i + 1] > menorValor) {
			menorValor = vetor[i + 1];
		}
	}
}

int maiorValorEmMatriz(int matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ], int escopoBusca) {
	switch (escopoBusca)
	{
	case 1:

		int maiorValorMatriz = matriz[0][0];

		for (int linha = 0; linha < TAMANHO_MATRIZ - 1; linha++)
		{
			for (int coluna = 0; coluna < TAMANHO_MATRIZ - 1; coluna++)
			{
				if (linha == coluna) {
					if (matriz[linha][coluna] < matriz[linha + 1][coluna + 1]) {
						maiorValorMatriz = matriz[linha + 1][coluna + 1];
					}
				}
			}
		}
		break;
	case 2:

		int maiorValorMatriz = matriz[0][0];

		for (int linha = 0; linha < TAMANHO_MATRIZ - 1; linha++)
		{
			for (int coluna = 0; coluna < TAMANHO_MATRIZ - 1; coluna++)
			{
				if (linha + coluna == TAMANHO_MATRIZ - 1) {
					if (matriz[linha][coluna] < matriz[linha + 1][coluna - 1]) {
						maiorValorMatriz = matriz[linha + 1][coluna - 1];
					}
				}
			}
		}
		break;
	case 3:
		/////////////////////////////////////////
		int maiorValorMatriz = matriz[0][0];

		for (int linha = 0; linha < TAMANHO_MATRIZ - 1; linha++)
		{
			for (int coluna = 0; coluna < TAMANHO_MATRIZ - 1; coluna++)
			{
				if (linha == coluna || linha + coluna == TAMANHO_MATRIZ - 1) {
					
				}
			}
		}
		break;
	case 4:
		//////////////////////////////////////////
		int maiorValorMatriz = matriz[0][0];

		for (int linha = 0; linha < TAMANHO_MATRIZ - 1; linha++)
		{
			for (int coluna = 0; coluna < TAMANHO_MATRIZ - 1; coluna++)
			{
				if (matriz[linha][coluna]) {
					
				}
			}
		}
		break;
	}

}

int menorValorEmMatriz(int matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ], int escopoBusca) {
	switch (escopoBusca)
	{
	case 1:

		break;
	case 2:

		break;
	case 3:

		break;
	case 4:

		break;
	}

}



#endif