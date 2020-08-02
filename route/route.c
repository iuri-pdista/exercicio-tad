#include<stdlib.h>
#include<stdio.h>
#include<string.h>

#include<point.h>

Cidade* cria(float x, float y, char* nome){
  Cidade* c = (Cidade *) malloc(sizeof(Cidade));
  strcpy_s((*c).nome, 100, nome);
  (*c).x = x;
  (*c).y = y;
  return c;
}
