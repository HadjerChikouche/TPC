#include "Film.h"

Film *constrFilmVide(){
    Film *film = calloc(1, sizeof(Film));
    return film;
}

Film *constrFilm(char *titre, unsigned int annee, Personne *realisateur, Personne **acteursPrincip, unsigned int duree,
                      Genre genre) {
    Film *film = constrFilmVide();

    editerFilm(film, titre, annee, realisateur, acteursPrincip, duree, genre);
}

void AfficherFilm(const Film *film) {

    char* buffer = calloc(10000, sizeof(char));

    sprintf(buffer," film\n %s (%d)\nRealisateur : %s\nActeurs : %s, %s, %s\nDuree : %dh%d\nGenre : %d", film->titre,
           film->annee, getNomComplet(film->realisateur), getNomComplet(film->acteursPrincip[0]),
           getNomComplet(film->acteursPrincip[1]), getNomComplet(film->acteursPrincip[2]), film->duree / 60,
           film->duree % 60, film->genre);
    return buffer;
}

void SupprimerFilm(Film *film) {
    free(film);
}

void editerFilm(Film *film, char *titre, unsigned int annee, Personne *realisateur, Personne **acteursPrincip, unsigned int duree,
          Genre genre) {
    film->titre = titre;
    film->annee = annee;
    film->realisateur = realisateur;
    film->acteursPrincip = acteursPrincip;
    film->duree = duree;
    film->genre = genre;

}

