#include "liat.h"
char* allouer(int* dim)
{
	char* A=NULL;
	printf("entrez le taille:");
	scanf("%d",dim);
	A=(char*)malloc(*dim*sizeof(char));
	return (A);
}
int  ouverture(FILE* file,int dim,char* ligne)
{
	int sum=0;
	file=fopen("/var/log/auth.log","r");
	if(file==NULL)
	{
		printf("Erreur lors de l'ouverture\n");
		exit(1);
	}
	else{
		while(fgets(ligne,dim,file)!=NULL)
	{
		sum++;
	}
	return (sum);
	}
}
void affichage(FILE* file,int dim,int nbr,char* ligne)
{
	int i;
	int f=10;
	file=fopen("/var/log/auth.log","r");
	rewind(file);
	for(i=0;fgets(ligne,dim,file)!=0;i++)
	{
		if(i>=(nbr-f))
		{
			printf("%s",ligne);
		}
	}
	fclose(file);
}
void fonction_option(FILE* file,int dim,int nbr,char* argv[],char* ligne)
{
	int f;
	int i;
	file=fopen("/var/log/auth.log","r");
	printf("voici avec des arguments\n");
	if(strcmp(argv[1],"-n")==0)
	{
		f=atoi(argv[2]);
		for(i=0;fgets(ligne,dim,file)!=0;i++)
	{
		if(i>=(nbr-f))
		{
			printf("%s",ligne);
		}
	}
	}
	fclose(file);
}
