#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *fichier;
	char tab[100];

	fichier=fopen("exercice1.txt","r");

	if(fichier==NULL)
	{
		printf("Le fichier exercice1.txt n'a pas pu être ouvert .\n");
		return EXIT_FAILURE;
	}
	while(fgets(tab,sizeof(tab),fichier)!=NULL)
	{
		printf("%s",tab);
	}

	printf("\n");
	fclose(fichier);
	return 0;
}

/*
char *get_file(FILE * fp)
{
	char *content;
	char buffer[100];

	content=malloc(sizeof(char));
	content[0]='\0';

	while(fgets(buffer, 100, fp) != NULL)
    {
        content = realloc(content, (strlen(buffer) * sizeof(char)) + strlen(content) * sizeof(char));
        content = strcat(content, buffer);
    }

    return content;
}

int main()
{
    FILE *fichier = fopen("exercice1.txt", "r");
    char * tab;

    if (fichier == NULL)
    {
        printf("Le fichier test.txt n'a pas pu être ouvert\n");
        return EXIT_FAILURE;
    }

    tab = get_file(fichier);
    
    printf("%s", tab);
    printf("\n");
    fclose(fichier);
    free(tab);
    return 0;
 }
 */
