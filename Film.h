#ifndef C_TP_CINEMA_FILM_H
#define C_TP_CINEMA_FILM_H

#include "Personne.h"


typedef enum Genre {
    Action, Horror, Comedie, Documentaire, Police, Drama, Animation, ScienceFiction
} Genre;

typedef struct Film{
    char* titre;
    unsigned int annee;
    Personne* realisateur;
    Personne** acteursPrincip;
    unsigned int duree;
    Genre genre;
} Film;

Film *constrFilmVide();

Film *constrFilm(char *titre, unsigned int annee, Personne *realisateur, Personne **acteursPrincip, unsigned int duree,
                      Genre genre);

void AfficherFilm(const Film *film);

void SupprimerFilm(Film *film);

void editerFilm(Film *film, char *titre, unsigned int annee, Personne *realisateur, Personne **acteursPrincip, unsigned int duree,
          Genre genre);

#endif //C_TP_CINEMA_FILM_H
