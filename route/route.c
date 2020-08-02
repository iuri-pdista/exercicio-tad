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
