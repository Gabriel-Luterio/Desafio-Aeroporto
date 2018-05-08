#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"lista.h"

typedef struct No{
	int codigo;
	char capitao[20];
	
	struct No* prox;
}lista;

lista* cria_lista(){
	lista* inicio;
	inicio = (lista*) malloc(sizeof(lista));
	if(!inicio){
		printf("Erro ao criar lista!");
		
	}else{
		inicio->prox = NULL;
		return inicio;
	}
}

lista* chegada(lista** list, int cod, char nome[]){
	lista* ultimo,*novo;
	novo =  (lista*) malloc(sizeof(lista));
	
	if(!novo){
		printf("Memoria Insuficiente para iniciar a lista!");
	
	}else{
		ultimo = *list;
		
		while(ultimo->prox != NULL){
			ultimo = ultimo->prox;
		}
		
		novo->codigo = cod;
		strcpy(novo->capitao,nome);
		
		ultimo = novo;
		novo->prox = NULL;
	}
}
