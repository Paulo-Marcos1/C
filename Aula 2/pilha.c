#include <stdio.h>
#include <stdlib.h>

#define Tam 10
typedef struct{
   int vet [Tam];
   int topo; 
}pilhavet;

void empilha(int valor, pilhavet *p){
    if(p->topo == Tam -1){
        printf("\nPilha cheia");
        exit(0);
    }
    p -> topo++;
    p -> vet[p -> topo] = valor;
}

int desempilha(pilhavet*p){
    int aux;
    if(p -> topo<0){
        printf("\npilha vazia");
        exit(1);
    }
    aux = p -> vet[p -> topo];
    p -> topo--;
    return aux;
}

int main(void){
    pilhavet pilha;
    int valor;
    pilha.topo = -1;
    for (int i=0; i<Tam; i++){
        printf("\nDigite o valor a ser empilhado");
        scanf("%d",&valor);
        empilha(valor, &pilha);
    }
    for (int i=0; i<Tam; i++){
        printf("\n%d",desempilha(&pilha));
    }
    printf("\n");
    return 0;
}