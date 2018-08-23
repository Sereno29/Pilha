#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

void menu(Pilha* p){
  cria_pilha(p);
  int escolha,erro;
  float resposta;
  printf("BEM-VINDOS À SUA PILHA!!!\n\nEscolha uma das opções abaixo\n\n");
  do{
    printf("(1)Empilhar um elemento\n(2)Desempilhar um elemento\n(3)Mostrar o elemento do topo\n(4)Verificar se a pilha está vazia\n(5)Esvaziar pilha\n(6)Mostrar pilha\n(7)Sair\nOpção: ");
    scanf(" %d",&escolha);
    switch (escolha) {
      case 1:
        printf("Qual o valor a ser empilhado\? \n");
        scanf(" %f",&resposta );
        if(push(p,resposta))
          printf("A pilha já está cheia.\n");
        else
          printf("Sucesso ao empilhar!\n" );
        break;
      case 2:
        if(pop(p,&resposta))
          printf("A pilha está vazia.\n");
        else
          printf("O elemento desempilhado foi %f\n",resposta );
        break;
      case 3:
        resposta = top(p,&erro);
        if(erro == 1)
          printf("A pilha está vazia.\n");
        else
          printf("O elemento no topo da pilha é %f \n",resposta);
        break;
      case 4:
        if(isEmpty(p))
          printf("A pilha está vazia.\n");
        else
          printf("A pilha não  está vazia.\n");
        break;
      case 5:
        Empty(p);
        printf("Sucesso ao esvaziar!\n" );
        break;
      case 6:
        if(show(p))
          printf("A pilha está vazia.\n");
        break;
      case 7:
        break;
      default:
        printf("Opção inválida!\n");
        break;
    }
}while(escolha!=7);
return;
}

int main(int argc, char* argv[]){
  Pilha p;
  menu(&p);
  return 0;
}
