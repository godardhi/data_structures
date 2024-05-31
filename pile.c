#include "pile.h"


Pile Initialiser()
{
	return NULL;
}

int EstVide(Pile p)
{
	return (p == NULL) ? 1 : 0;
}

int EstPleine(Pile p)
{
	return 0; // une liste châinée ne jamais plaine
}

int AccederSommet(Pile p, Typedonnee *pelem)
{
	if(EstVide(p))
	{
		return 1;
	}

	*pelem = p->donnee;
	return 0;
}

void Empiler(Pile *pP, Typedonnee elem)
{
	Pile q;
	q=(TypeCellule*)malloc(sizeof(TypeCellule));
	q->donnee = elem;
	q->suivant = *pP;
	*pP = q;
}

int Depiler(Pile *pP, Typedonnee *pelem)
{
	Pile q;
	if(EstVide(*pP))
	{
		return 1;
	}

	*pelem =(*pP)->donnee;
	q =*pP;
	*pP= (*pP)->suivant;
	free(q);
	return 0;
}

void Detruire(Pile *pP)
{
	Pile q;
	while(*pP != NULL)
	{
		q = *pP;
		*pP=(*pP)->suivant;
		free(q);
	}

	*pP= NULL;
}

void Vider(Pile *pP)
{
	Detruire(pP);
	*pP=NULL;
}



