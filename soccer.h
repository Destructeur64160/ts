#ifndef __soccer_H_
#define __soccer_H_
#define 
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
typedef struct equipe equipe

#endif