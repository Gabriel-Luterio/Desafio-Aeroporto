#ifndef FILA_H
#define FILA_H
#include<stdio.h>
#include<stdlib.h>
#include"lista.h"

typedef struct Node fila;
fila* cria_fila();
fila* partida(lista** avioes,fila** saida);

#endif
