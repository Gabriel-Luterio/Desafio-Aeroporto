#ifndef LISTA_H
#define LISTA_H

#include<stdlib.h>
#include<stdio.h>

typedef struct No lista;
lista* cria_lista();
lista* chegada(lista** list, int cod, char nome[]);

#endif
