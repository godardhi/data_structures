#include "pile.h"


int main()
{

	Pile nouveauPile=NULL;

	int n;

	Empiler(&nouveauPile, 1);
	Empiler(&nouveauPile, 2);
	Empiler(&nouveauPile, 3);

	AccederSommet(nouveauPile, &n);

	printf("%d\n", n);

	Depiler(&nouveauPile, &n);

	AccederSommet(nouveauPile, &n);

	printf("%d\n", n);

	Vider(&nouveauPile);

	if(EstVide(nouveauPile))
		printf("Vide\n");

	
	return 0;
}
