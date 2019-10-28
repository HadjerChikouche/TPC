#ifndef C_TP_CINEMA_PERSONNE_H
#define C_TP_CINEMA_PERSONNE_H

#include "Date.h"
#include <stdlib.h>
#include <string.h>
#include "stdio.h"

typedef struct Personne{
    char* Nom;
    char* Prenom;
    char* nationalite;
    Date DateDAnniv;
} Personne;

Personne * constrPersonne(char *Nom, char *Prenom, char *nationalite, unsigned char JourDAnniv, unsigned char MoisDAnniv, unsigned int AnneeDAnniv);

char* getNomComplet(Personne* personne);

void SuprimmePersonne(Personne* personne);

#endif //C_TP_CINEMA_PERSONNE_H
