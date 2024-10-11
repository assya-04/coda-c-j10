#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fichier;
	char **tab;
	char tab



	fichier=fopen("exercice3.txt","r");
	if(fichier==NULL)
	{
		printf("Erreur lors de l'ouverture du fichier\n");
		return EXIT_FAILURE;
	}

	return 0;
}