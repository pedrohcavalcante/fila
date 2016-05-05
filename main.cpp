#include <iostream>
#include "fila.h"
using namespace std;

int main(){
	Fila* fila = criarFila();
	testes(fila);
	cout << "Fila vazia: " << filaVazia(fila) << endl;
	testes(fila);
	cout << "Fila Cheia: " << filaCheia(fila) << endl;
	testes(fila);
	cout << "Inserir 1: " << enqueue(fila, 1) << endl;
	testes(fila);
	cout << "Inserir 2: " << enqueue(fila, 2) << endl;
	testes(fila);
	imprimir(fila);
	cout << "Remover 1: " << dequeue(fila) << endl;
	testes(fila);
	imprimir(fila);
	cout << "Remover 2: " << dequeue(fila) << endl;
	testes(fila);
	cout << "Inserir 1: " << enqueue(fila, 1) << endl;
	cout << "Inserir 1: " << enqueue(fila, 1) << endl;
	cout << "Inserir 1: " << enqueue(fila, 1) << endl;
	cout << "Inserir 1: " << enqueue(fila, 1) << endl;
	cout << "Inserir 1: " << enqueue(fila, 1) << endl;
	cout << "Depois de cheio" << endl;
	testes(fila);
	cout << "Fila Cheia: " << filaCheia(fila) << endl;	
	cout << "Fila vazia: " << filaVazia(fila) << endl;
	cout << "Inserir 1: " << enqueue(fila, 1) << endl;
	cout << false << endl;
	cout << true << endl;
	cout << "REMOVENDO" << endl;
	cout << "Remover 1: " << dequeue(fila) << endl;
	cout << "Remover 1: " << dequeue(fila) << endl;
	cout << "Remover 1: " << dequeue(fila) << endl;
	imprimir(fila);	
	cout << "Remover 1: " << dequeue(fila) << endl;
	cout << "Remover 1: " << dequeue(fila) << endl;
	cout << "Depois de vazio" << endl;
	cout << "Remover 1: " << dequeue(fila) << endl;
	imprimir(fila);			

}