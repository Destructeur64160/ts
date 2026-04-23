#ifndef __soccer_H_
#define __soccer_H_
/* Auteur : Kevin Jean-Paul Philippe Jallet */
/* Date : 22/04/26 */
/* Résumé : une structure qui definie un joueur avec sont 
nom sont prenom sont poste sont numero sont age et sont 
nombre de buts */
struct joueur{
    char* nom;
    char* prenom;
    char* poste;
    int numero;
    int age;
    int nb_buts;
};
typedef struct joueur joueur;


/* Auteur : Kevin Jean-Paul Philippe Jallet */
/* Date : 22/04/26 */
/* Résumé : une structure qui définie une équipe avec le 
nom le pays le championnat le classement le nb de joueur 
et un tableau de taille nb joueur conteneant des structures joueur */
struct equipe{
    char* nom;
    char* pays;
    char* championnat;
    int classement;
    int nb_joueurs;
    joueur* ls_joueur;
};
typedef struct equipe equipe;

/* Auteur : Kevin Jean-Paul Philippe Jallet */
/* Date : 22/04/26 */
/* Résumé : une procédure qui créer un joueur */
/* Entrée : J un pointeur de joueur */
void creationJoueur(joueur* j);

/* Auteur : Kevin Jean-Paul Philippe Jallet */
/* Date : 23/04/26 */
/* Résumé : une procédure qui affiche un joueur */
/* Entrée : J un joueur */
void afficherJoueur(joueur j);

/* Auteur : Kevin Jean-Paul Philippe Jallet */
/* Date : 23/04/26 */
/* Résumé : une procédure qui créer une équipe de joueur */
/* Entrée : e un pointeur d'equipe et nbjoueur un entier */
void creationEquipe(equipe* e, int nbjoueur);

/* Auteur : Kevin Jean-Paul Philippe Jallet */
/* Date : 23/04/26 */
/* Résumé : une procédure qui ajoute un joueur dans une équipe */
/* Entrée : e un pointeur d'equipe et j un joueur */
void ajouterJoueur(equipe* e, joueur j);

#endif
