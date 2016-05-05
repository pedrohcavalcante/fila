#define TAMANHO_PADRAO 5
#define VALOR_ERRO -99999

typedef struct{
	int inicio;
	int tamanho;
	int fim;
	int *elementos;
}Fila;

Fila* criarFila();
Fila* criarFila(int tamanho);
bool enqueue(Fila* fila, int valor);
bool dequeue(Fila* fila);
bool filaVazia(Fila* fila);
bool filaCheia(Fila* fila);
void movimentar(Fila* fila);
void imprimir(Fila* fila);
void testes(Fila* fila);