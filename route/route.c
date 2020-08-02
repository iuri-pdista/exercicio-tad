#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>

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

float * distancia(Cidade * c1, Cidade * c2){
  float distacias[3];

  float distanciaHorizontal;
  if (((*c1).x - (*c2).x) < 0 ){
    distanciaHorizontal = (*c2).x - (*c1).x; 
  }
  else { distanciaHorizontal = (*c1).x - (*c2).x; }
 
  float distanciaVertical;                         
  if (((*c1).y - (*c2).y) < 0 ){
    distanciaVertical = (*c2).y - (*c1).y; 
  }
  else { distanciaVertical = (*c1).y - (*c2).y; }
  
  float distanciaReal = sqrt(( pow( distanciaHorizontal, 2 ) + pow( distanciaVertical , 2 )));
  distancias[0] = distanciaReal;
  distancias[1] = disatanciaHorizontal;
  distancias[2] = distanciaVertical;
  return distancias;
} 
