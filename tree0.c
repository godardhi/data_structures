#include "tree0.h"


TypeNoeud* NouveauNoeud(Typedonne nombre)
{
	TypeNoeud* noeud = (TypeNoeud*)malloc(sizeof(TypeNoeud));

	noeud->nombre=nombre;
	noeud->fg = NULL;
	noeud->fd = NULL;

	return noeud;
}

TypeNoeud* InsereNoeud(TypeNoeud* nouveauNoeud, Typedonne nombre)
{
	if(nouveauNoeud==NULL)
	{
		return NouveauNoeud(nombre);
	}

	if(nombre < nouveauNoeud->nombre)
	{
		nouveauNoeud->fg = InsereNoeud(nouveauNoeud->fg, nombre);
	}else if (nombre > nouveauNoeud->nombre)
	{
		nouveauNoeud->fd = InsereNoeud(nouveauNoeud->fd, nombre);
	}

	return nouveauNoeud;
}


void ESTnombre(TypeNoeud *racine, int nombre, int *r)
{
	if(racine!=NULL)
	{
		if(racine->nombre == nombre) 
		{
			*r=1;
		}
		ESTnombre(racine->fg, nombre, r);
		ESTnombre(racine->fd, nombre, r); 	
	}
} 

void Somme(TypeNoeud *racine, int *somme)
{
	//*somme=0;
	if(racine!=NULL)
	{
		*somme= *somme + racine->nombre;
		Somme(racine->fg, somme);
		Somme(racine->fd, somme);
	}
}

void Maximum(TypeNoeud *racine, int *max)
{
	//*max=0;
	if(racine!=NULL)
	{
		*max = (racine->nombre > *max) ? racine->nombre : *max;
		Maximum(racine->fg, max);
		Maximum(racine->fd, max);
		
	}
	
}

void ParcoursPostfixe(TypeNoeud* racine)
{
	if(racine !=NULL)
	{
		ParcoursPostfixe(racine->fg);
		ParcoursPostfixe(racine->fd);
		printf("%d ", racine->nombre);
	}
	
}

void ParcoursPrefixe(TypeNoeud* racine)
{
	if(racine !=NULL)
	{
		printf("%d ", racine->nombre);
		ParcoursPrefixe(racine->fg);
		ParcoursPrefixe(racine->fd);
	}
	
}

void ParcoursInfixe(TypeNoeud* racine)
{
	if(racine !=NULL)
	{
		ParcoursInfixe(racine->fg);
		printf("%d ", racine->nombre);
		ParcoursInfixe(racine->fd);
	}
	
}

void Liberer(TypeNoeud **P_racine)
{
	TypeNoeud* racine = *P_racine;
	if(racine != NULL)
	{
		Liberer(&racine->fg);
		Liberer(&racine->fd);
		free(racine);
	}

	*P_racine=NULL;
}
