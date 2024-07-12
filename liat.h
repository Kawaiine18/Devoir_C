#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* allouer(int* dim);
int ouverture(FILE* file,int dim,char* ligne);
void affichage(FILE* file,int dim,int nbr,char* ligne);
void fonction_option(FILE* file,int dim,int nbr,char* argv[],char* ligne);
