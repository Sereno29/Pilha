#include "pilha.h"
#include <stdio.h>

void cria_pilha(Pilha* p){
  p->topo = -1;
  return;
}

int push(Pilha* p,elem X){
  if(p->topo == tampilha-1)
    return 1;
  p->topo++;
  p->vet[p->topo] = X;
  return 0;
}

int pop(Pilha* p, elem* X){
  if(isEmpty(p))
    return 1;
  *X = p->vet[p->topo];
  p->topo--;
  return 0;
}

elem top(Pilha* p,int* erro){
  if(isEmpty(p)){
    *erro = 1;
    return -1;
  }
  *erro = 0;
  return p->vet[p->topo];
}

int isEmpty(Pilha* p){
  return (p->topo == -1);
}

void Empty(Pilha* p){
  p->topo = -1;
  return;
}

int show(Pilha* p){
  if(isEmpty(p))
    return 1;
  printf("****Pilha****\n");
  for(int i = p->topo; i>=0;i--)
    printf("%.2f\n",p->vet[i] );
  return 0;
}
