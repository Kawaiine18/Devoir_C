#include "liat.h"
int main(int argc,char* argv[])
{
	FILE* file=NULL;
	char* ligne=NULL;
	int dim;
	int nbr;
	ligne=allouer(&dim);
	nbr=ouverture(file,dim,ligne);  
	affichage(file,dim,nbr,ligne);
	fonction_option(file,dim,nbr,argv,ligne);
	free(ligne);
	return 0;
}
