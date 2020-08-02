#ifndef PONTO_H_INCLUDED
#define PONTO_H_INCLUDED
struct cidade {
	float x;
	float y;
	char nome[50];
};
/* TAD: Cidade (x,y, nome) */
/* Tipo exportado */
typedef struct cidade Cidade;
/* Funções exportadas */
/* Função cria
 * ** Aloca e retorna uma cidade com coordenadas (x,y) e nome
 * */
bool cria (float x, float y, char * nome);
/* Função libera
 * ** Libera a memória de uma cidade previamente criada.
 * */
void libera (Cidade* cidade);
/* Função acessa
 * ** Devolve os valores das coordenadas e nome de uma cidade
 *
 * */
void acessa (Cidade * cidade, float* x, float* y, char * nome);
/* Função atribui
 * ** Atribui novos valores às coordenadas e nome de uma cidade
 * */
void atribui (Cidade * cidade, float x, float y, char nome[50]);
/* Função distancia
 * ** Retorna a distância entre duas cidades
 * */
float * distancia (Cidade * c1, Cidade * c2);
#endif // PONTO_H_INCLUDED
