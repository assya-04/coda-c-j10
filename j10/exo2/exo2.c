#include <stdio.h>
#include <stdlib.h>


int main()
{
	FILE *fichier;
	
	fichier=fopen("exercice2.txt","wt");

	if(fichier==NULL)
	{
		printf("Le fichier exercice2.txtn'a pas pu être ouvert\n");
		return EXIT_FAILURE;
	}
	
	const char* nouveau_contenu= "Frère Jacques, Frère Jacques\nDormez-vous, dormez-vous ?\n";

	fputs(nouveau_contenu, fichier);

	fclose(fichier);

	return 0;
}