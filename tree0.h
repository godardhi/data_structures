#ifndef TREE0_H
#define TREE0_H

#include <stdio.h>
#include <stdlib.h>

typedef int Typedonne;

typedef struct cell
{
	Typedonne nombre;
	struct cell *fg, *fd;
}TypeNoeud;


TypeNoeud* NouveauNoeud(Typedonne nombre);

TypeNoeud* InsereNoeud(TypeNoeud* nouveauNoeud, Typedonne nombre);

void ESTnombre(TypeNoeud *racine, int nombre, int *r);

void Somme(TypeNoeud *racine, int *somme);

void Maximum(TypeNoeud *racine, int *max);

void ParcoursInfixe(TypeNoeud* racine);

void ParcoursPrefixe(TypeNoeud* racine);

void ParcoursPostfixe(TypeNoeud* racine);

void Liberer(TypeNoeud **P_racine);


#endif
