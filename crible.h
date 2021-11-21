/*
-------------------------------------------------------------------------------------
Nom du fichier : crible.h
Nom du labo    : Labo 6 - Crible Eratosthène
Auteur(s)      : Grégory Rey-Mermet, Didier Lokokpe
Date creation  : 19.11.2021
Description    : Ce ficher d'en-tête(.h) met a disposition de l'utiisateur diverses
                 fonctions utiles pour cribler un tableau booléen.
Remarque(s)    : /!\ Il est nécessaire de passer un tableau de booléen préalablement
                 initialisé à True pour le bon fonctionnement du crible.

                 Ce fichier ne contient pour l'instant qu'une fonction permettant de
                 trouver les nombres premiers, on pourrait imaginer à l'avenir y
                 ajouter des fonctions permettants de trouver tous les nombres pairs.
Compilateur    : Mingw-w64 g++ 11.2.0
-------------------------------------------------------------------------------------
*/

#ifndef LABO6_CRIBLE_H
#define LABO6_CRIBLE_H

/**
 * Effectue le crible d'un tableau booléen initialiser à True passé un paramètre,
 * le crible est basé sur la méthode d'Eratosthène et il met à False toutes les
 * cases qui ne sont pas des nombres premiers
 *
 * Remarques : le tableau commence à 1 (tableau[0] = 1)
 *
 * @param tableau Tableau de booléen à cribler
 * @param taille  Taille du tableau
 */
void eratosthene(bool tableau[], unsigned taille);

#endif //LABO6_CRIBLE_H
