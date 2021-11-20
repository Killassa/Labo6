/*
-------------------------------------------------------------------------------------
Nom du fichier : crible.h
Nom du labo    : Labo 6 - Crible Eratosthène
Auteur(s)      : Grégory Rey-Mermet, Didier Lokokpe
Date creation  : 19.11.2021
Description    :Ce ficher d'en-tête(.h) met a disposition de l'utiisateur une seule
                fonction qui lui permet chercher dans un tableau donné tout les
                nombres premiers qui y sont.
Remarque(s)    :
Compilateur    : Mingw-w64 g++ 11.2.0
-------------------------------------------------------------------------------------
*/

#ifndef LABO6_CRIBLE_H
#define LABO6_CRIBLE_H

#include <cstdlib>

/**
 * Dans notre cas cette fonction pemet de chercher les nombres premiers dans un
 * tableau donnée
 *
 * @param tableau    Tableau de booleen dans ou effectuer la recherche
 * @param taille     Taille du tableau
 * @param position   Position a partir de laquelle effectuée la recheche
 */
void eratosthene(bool tableau[], size_t taille, unsigned position = 2);

#endif //LABO6_CRIBLE_H
