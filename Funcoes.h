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
	return maiorValor;
}

int menorValorEmVetor(int vetor[], int tamanho) {
	int menorValor = vetor[0];
	for (int i = 0; i < tamanho - 1; i++)
	{
		if (vetor[i + 1] < menorValor) {
			menorValor = vetor[i + 1];
		}
	}
	return menorValor;
}

int maiorValorEmMatriz(int matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ], int escopoBusca) {
	if (escopoBusca == 1) {

		int maiorValorDiagonalPrincipal = matriz[0][0];

		for (int linha = 0; linha < TAMANHO_MATRIZ - 1; linha++)
		{
			for (int coluna = 0; coluna < TAMANHO_MATRIZ - 1; coluna++)
			{
				if (linha == coluna) {
					if (maiorValorDiagonalPrincipal < matriz[linha + 1][coluna + 1]) {
						maiorValorDiagonalPrincipal = matriz[linha + 1][coluna + 1];
					}
				}
			}
		}
		return maiorValorDiagonalPrincipal;
	}
	else if (escopoBusca == 2) {

		int maiorValorDiagonalSecundaria = matriz[0][4];

		for (int linha = 0; linha < TAMANHO_MATRIZ - 1; linha++)
		{
			for (int coluna = 0; coluna < TAMANHO_MATRIZ - 1; coluna++)
			{
				if (linha + coluna == TAMANHO_MATRIZ - 1) {
					if (maiorValorDiagonalSecundaria < matriz[linha + 1][coluna - 1]) {
						maiorValorDiagonalSecundaria = matriz[linha + 1][coluna - 1];
					}
				}
			}
		}
		return maiorValorDiagonalSecundaria;
	}
	else if (escopoBusca == 3) {

		int maiorValorDiagonalPrincipal = matriz[0][0];

		for (int linha = 0; linha < TAMANHO_MATRIZ - 1; linha++)
		{
			for (int coluna = 0; coluna < TAMANHO_MATRIZ - 1; coluna++)
			{
				if (linha == coluna) {
					if (maiorValorDiagonalPrincipal < matriz[linha + 1][coluna + 1]) {
						maiorValorDiagonalPrincipal = matriz[linha + 1][coluna + 1];
					}
				}
			}
		}

		int maiorValorDiagonalSecundaria = matriz[0][4];

		for (int linha = 0; linha < TAMANHO_MATRIZ - 1; linha++)
		{
			for (int coluna = 0; coluna < TAMANHO_MATRIZ - 1; coluna++)
			{
				if (linha + coluna == TAMANHO_MATRIZ - 1) {
					if (maiorValorDiagonalSecundaria < matriz[linha + 1][coluna - 1]) {
						maiorValorDiagonalSecundaria = matriz[linha + 1][coluna - 1];
					}
				}
			}
		}
		int maiorValorDiagonais;

		if (maiorValorDiagonalPrincipal > maiorValorDiagonalSecundaria) {
			maiorValorDiagonais = maiorValorDiagonalPrincipal;
		}
		else {
			maiorValorDiagonais = maiorValorDiagonalSecundaria;
		}
		return maiorValorDiagonais;
	}
	else if (escopoBusca == 4) {

		int maiorValorMatriz = matriz[0][0];

		for (int linha = 0; linha < TAMANHO_MATRIZ - 1; linha++)
		{
			for (int coluna = 0; coluna < TAMANHO_MATRIZ - 1; coluna++)
			{
				if (maiorValorMatriz < matriz[linha][coluna + 1]) {
					maiorValorMatriz = matriz[linha][coluna + 1];
				}
			}
		}
		return maiorValorMatriz;
	}
	

}

int menorValorEmMatriz(int matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ], int escopoBusca) {
	if (escopoBusca == 1) {
		int menorValorDiagonalPrincipal = matriz[0][0];

		for (int linha = 0; linha < TAMANHO_MATRIZ - 1; linha++)
		{
			for (int coluna = 0; coluna < TAMANHO_MATRIZ - 1; coluna++)
			{
				if (linha == coluna) {
					if (menorValorDiagonalPrincipal > matriz[linha + 1][coluna + 1]) {
						menorValorDiagonalPrincipal = matriz[linha + 1][coluna + 1];
					}
				}
			}
		}
		return menorValorDiagonalPrincipal;
	}
	else if (escopoBusca == 2) {
		int menorValorDiagonalSecundaria = matriz[0][4];

		for (int linha = 0; linha < TAMANHO_MATRIZ - 1; linha++)
		{
			for (int coluna = 0; coluna < TAMANHO_MATRIZ - 1; coluna++)
			{
				if (linha + coluna == TAMANHO_MATRIZ - 1) {
					if (menorValorDiagonalSecundaria > matriz[linha + 1][coluna - 1]) {
						menorValorDiagonalSecundaria = matriz[linha + 1][coluna - 1];
					}
				}
			}
		}
		return menorValorDiagonalSecundaria;
	}
	else if (escopoBusca == 3) {
		int menorValorDiagonalPrincipal = matriz[0][0];

		for (int linha = 0; linha < TAMANHO_MATRIZ - 1; linha++)
		{
			for (int coluna = 0; coluna < TAMANHO_MATRIZ - 1; coluna++)
			{
				if (linha == coluna) {
					if (menorValorDiagonalPrincipal > matriz[linha + 1][coluna + 1]) {
						menorValorDiagonalPrincipal = matriz[linha + 1][coluna + 1];
					}
				}
			}
		}

		int menorValorDiagonalSecundaria = matriz[0][4];

		for (int linha = 0; linha < TAMANHO_MATRIZ - 1; linha++)
		{
			for (int coluna = 0; coluna < TAMANHO_MATRIZ - 1; coluna++)
			{
				if (linha + coluna == TAMANHO_MATRIZ - 1) {
					if (menorValorDiagonalSecundaria > matriz[linha + 1][coluna - 1]) {
						menorValorDiagonalSecundaria = matriz[linha + 1][coluna - 1];
					}
				}
			}
		}

		int menorValorDiagonais;

		if (menorValorDiagonalPrincipal < menorValorDiagonalSecundaria) {
			menorValorDiagonais = menorValorDiagonalPrincipal;
		}
		else {
			menorValorDiagonais = menorValorDiagonalSecundaria;
		}
		return menorValorDiagonais;
	}
	else if (escopoBusca == 4) {
		int menorValorMatriz = matriz[0][0];

		for (int linha = 0; linha < TAMANHO_MATRIZ - 1; linha++)
		{
			for (int coluna = 0; coluna < TAMANHO_MATRIZ - 1; coluna++)
			{
				if (menorValorMatriz > matriz[linha][coluna + 1]) {
					menorValorMatriz = matriz[linha][coluna + 1];
				}
			}
		}
		return menorValorMatriz;
	}
	
}



#endif
