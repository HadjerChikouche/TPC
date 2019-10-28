#include "Film.h"
#include "Util.h"
/*
TP C PAR:
HADJER CHIKOUCHE HAMINA
SARA BABAYA
*/
int main() {

    while (true) {
            char titre;
            unsigned int annee;
            Personne *realisateur;
            Personne **acteursPrincip;
            unsigned int duree;
            Genre genre;

        printf("CHOISISSEZ :\n1) Creer film\n2) Lister film\n3) Exiter menu\n");
        int input;
        scanf("%d", &input);


        switch (input) {
            case 1:

                 printf("SVP inserer titre, annee, acteur Principale, duree du film, genre ");
                 scanf("%c%d%d%c", titre &annee &duree &genre );
                 constrFilm(titre,annee,getNomComplet(realisateur) , getNomComplet(acteursPrincip),duree ,genre );

                break;
            case 2:
                printf("SVP inserer film : <title> ");
                scanf("%c", titre);
                AfficherFilm(titre);

                break;
            case 3:
                exit(0);
        }
    }

}

