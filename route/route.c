#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

#include<point.h>

bool cria(float x, float y, char* nome){
  Cidade* c = (Cidade *) malloc(sizeof(Cidade));
  strcpy_s((*c).nome, 100, nome);
  (*c).x = x;
  (*c).y = y;
  if (c == NULL){ return false; }
  return true; 
}

void libera(Cidade* cidade){
  free(cidade);
}

void atribui(Cidade* cidade, float x, float y, char nome[50]){
  (*cidade).x = x;
  (*cidade).y = y;
  (*cidade).nome = nome;
  printf("Os novos dados da Cidade sao: \n Nome: %s \n  Coordenadas: (%.0f %.0f)", nome, x, y);
}

