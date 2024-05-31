#ifndef PILE_H
#define PILE_H

#include <stdio.h>
#include <stdlib.h>

typedef int Typedonnee;

typedef struct cell
{
	Typedonnee donnee;
	struct cell *suivant;
}TypeCellule;

typedef TypeCellule* Pile;

Pile Initialiser();

int EstVide(Pile p);

int EstPleine(Pile p);

int AccederSommet(Pile p, Typedonnee *pelem);

void Empiler(Pile *pP, Typedonnee elem);

int Depiler(Pile *pP, Typedonnee *pelem);

void Detruire(Pile *pP);

void Vider(Pile *pP);






#endif 
