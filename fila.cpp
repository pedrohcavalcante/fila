#include <iostream>
#include "fila.h"

using namespace std;

Fila* criarFila(){
	Fila* novaFila = new Fila;
	novaFila->tamanho = TAMANHO_PADRAO;
	novaFila->inicio = -1;
	novaFila->fim = -1;
	novaFila->elementos = new int[TAMANHO_PADRAO];

	return novaFila;
}

Fila* criarFila(int tamanho){
	Fila* novaFila = new Fila;
	novaFila->tamanho = tamanho;
	novaFila->inicio = -1;
	novaFila->fim = -1;
	novaFila->elementos = new int[tamanho];

	return novaFila;
}

bool filaVazia(Fila* fila){
	if (fila->inicio == -1){
		return true;
	}else{
		return false;
	}
}

bool filaCheia(Fila* fila){
	if (fila->fim == fila->tamanho-1){
		return true;
	}else{
		return false;
	}
}

bool enqueue(Fila* fila, int valor){
	if (filaCheia(fila)){
		return false;
	}else if(filaVazia(fila)){
		fila->inicio = 0;
		fila->fim = 0;
		fila->elementos[0] = valor;
		return true;
	}else{
		fila->fim++;
		fila->elementos[fila->fim] = valor;
		return true;
	}
}

bool dequeue(Fila* fila){
	if (filaVazia(fila)){
		return false;
	}else{
		movimentar(fila);
		fila->fim--;
		if (fila->fim == -1){
			fila->inicio = -1;
		}
	return true;
	}
}

void movimentar(Fila* fila){
	for (int i = fila->inicio; i < fila->tamanho; i++){
		fila->elementos[i] = fila->elementos[i + 1];
	}
}

void imprimir(Fila *fila){
	for (int i = 0; i < fila->tamanho; i++){
		cout << "Fila[" << i << "]: " << fila->elementos[i] << endl;
	}
}
void testes(Fila* fila){
	cout << "Começo: " << fila->inicio << endl;
	cout << "Fim: " << fila->fim << endl;

}