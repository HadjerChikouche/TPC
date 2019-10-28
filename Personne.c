#include "Personne.h"

Personne * constrPersonne(char *Nom, char *Prenom, char *nationalite, unsigned char JourDAnniv, unsigned char MoisDAnniv,
                unsigned int AnneeDAnniv) {
                Personne* personne = calloc(1, sizeof(Personne));
                personne->Nom = Nom;
                personne->Prenom = Prenom;
                personne->nationalite = nationalite;

                Date d;
                d.jour = JourDAnniv;
                d.mois = MoisDAnniv;
                d.annee = AnneeDAnniv;
                personne->DateDAnniv = d;

                return personne;
}

char* getNomComplet(Personne* personne){
    char* buffer = calloc(100, sizeof(char));

    sprintf(buffer, "%s %s", personne->Prenom, personne->Nom);

    return buffer;
}

void SuprimmePersonne(Personne* personne){
    free(personne);
}
