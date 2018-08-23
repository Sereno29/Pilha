#define tampilha 100
typedef float elem;
typedef struct pilha{
  elem vet[tampilha];
  int topo;
}Pilha;
void cria_pilha(Pilha* p);
int push(Pilha* p, elem X);
int pop(Pilha* p, elem* X);
elem top(Pilha* p,int* erro);
int isEmpty(Pilha* p);
void Empty(Pilha* p);
int show(Pilha* p);
