#include "tree0.h"

int main()
{
	TypeNoeud* racine = NULL;

	int oui=0;
	int nombre=7;

	int somme;
	int max;
	racine = InsereNoeud(racine,50);

	InsereNoeud(racine,30);
	InsereNoeud(racine,20);
	InsereNoeud(racine,40);
	InsereNoeud(racine,70);
	InsereNoeud(racine,80);

	printf("parcours infixé: ");
	ParcoursInfixe(racine);

	puts(" ");

	printf("parcours postfixe: ");
	ParcoursPostfixe(racine);

	puts(" ");

	printf("parcours préfixe: ");
	ParcoursPrefixe(racine);

	puts(" "); 
	
	ESTnombre(racine,nombre,&oui);

	(oui==0) ? printf("%d n'est pas dans l'arbre\n", nombre) : printf("%d est pas dans l'arbre\n", nombre);

	Somme(racine,&somme);

	printf("la somme vaut :%d\n", somme);

	Maximum(racine, &max);

	printf("le maximum vaut :%d\n", max);

	Liberer(&racine);
	return 0;	
}
