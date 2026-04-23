#include <stdio.h>
#include <stdlib.h>
#include "soccer.h"

void creationJoueur(joueur* j){
    j->nom=malloc(100*sizeof(char));
    j->prenom=malloc(100*sizeof(char));
    j->poste=malloc(100*sizeof(char));
    printf("entrée le nom du joueur: ");
    scanf("%s",j->nom);
    printf("entrée le prenom du joueur: ");
    scanf("%s",j->prenom);
    printf("entrée le poste du joueur: ");
    scanf("%s",j->poste);
    printf("entrée l'numero du joueur: ");
    scanf("%d",&j->numero);
    printf("entrée l'age du joueur: ");
    scanf("%d",&j->age);
    printf("entrée le nombre de but: ");
    scanf("%d",&j->nb_buts);
}

void afficherJoueur(joueur j){
    printf("joueur nom: %s \n", j.nom);
    printf("joueur prenom: %s \n", j.prenom);
    printf("joueur poste: %s \n", j.poste);
    printf("joueur numero: %d \n", j.numero);
    printf("joueur age: %d \n", j.age);
    printf("joueur nombre de buts: %d \n", j.nb_buts);
}

void creationEquipe(equipe* e, int nbjoueurs){
    e->nom=malloc(100*sizeof(char));
    e->pays=malloc(100*sizeof(char));
    e->championnat=malloc(100*sizeof(char));
    e->ls_joueur=malloc(nbjoueurs*sizeof(joueur));
    printf("entrée le nom: ");
    scanf("%s", e->nom);
    printf("entrée le pays: ");
    scanf("%s", e->pays);
    printf("entrée le championnat: ");
    scanf("%s", e->championnat);
    printf("entrée le classement: \n");
    scanf("%d", &e->classement);
    e->nb_joueurs=nbjoueurs;
}

void ajouterJoueur(equipe* e, joueur j){
    
}
