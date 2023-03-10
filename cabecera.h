#ifndef CABECERA_H
#define CABECERA_H

#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
#include <vector>

using namespace std;

void problema1 ();
void problema2 ();
bool problema3 (char *c1, char *c2 );
int longitud (char *c );
int  problema4 (char[]);//int, int []
char *problema5 ();
void problema6 ();
void problema7(char *cadena, char *sin_repetir);
bool aux_p7(char c, char *cadena);
void problema8 ();
void problema9 ();
void problema10();
void problema11 ();
void problema12 ();
void problema13 ();
int *** generar_conj_matrices(unsigned short dim);
int ** generar_matriz(unsigned short dim);
int ** dinamica_p2(unsigned short dim);
int ** rotar90(int ** matriz, unsigned short dim);
void imprimir_matriz(int **matriz, unsigned short dim);
void imprimir_conj_matrices(int ***conj_matrices, unsigned short dim);
void problema15 ();
void problema16 ();
void problema17 ();
void problema18 ();
int  divisores (int);
void imprimir_cadena_int (int[],int);
int  divisores ();
int longitud_numeros(int);

#endif // CABECERA_H
