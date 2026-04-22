#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "soccer.h"
int main(){
    char maChaine1[10];
    char maChaine2[10];
    printf("Entrer une chaîne de caractère : \n");
    scanf("%s",maChaine1);
    printf("l'utilisateur a rentré la chaine suivante : %s \n",maChaine1);
    strcpy(maChaine2, maChaine1);
    return 0;
}