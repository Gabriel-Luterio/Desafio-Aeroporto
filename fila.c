#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"fila.h"

typedef struct Node{
	int codigo;
	char capitao[20];
	char destino[20];
	
	struct Node* prox;
}fila;

fila* cria_fila(){
	fila* inicio;
	inicio = (fila*) malloc(sizeof(fila));
	if(!inicio){
		printf("Erro ao cria fila!");
	
	}else{
		inicio->prox =  NULL;
		return inicio;
	}
}

fila* partida(lista** avioes,fila** saida){
	
}
