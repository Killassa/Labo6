/*
-----------------------------------------------------------------------------------
Nom du fichier : tableau.h
Nom du labo : Labo 6 - Crible Eratosthène
Auteur(s) : Grégory Rey-Mermet, Didier Lokokpe
Date creation : 19.11.2021
Description :
Remarque(s) :
Compilateur : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#ifndef LABO6_TABLEAU_H
#define LABO6_TABLEAU_H

#include <cstdlib>

/**
 *
 * @param tableau
 * @param taille
 * @param valeurDefaut
 */
void initialiserTableau(bool tableau[], size_t taille, int valeurDefaut);

/**
 *
 * @param tableau
 * @param taille
 * @param nombreColonne
 * @param alignement
 * @param faux
 * @param vrai
 * @param position
 */
void afficherTableau(const bool tableau[],
                     size_t taille,
                     int nombreColonne,
                     int alignement,
                     char faux = "0",
                     char vrai = "1",
                     int position = 0);

/**
 *
 * @param tableau
 * @param taille
 * @param position
 * @param valeurCherchee
 */
void chercher (const bool tableau[], size_t taille, int position, int valeurCherchee);

/**
 *
 * @param tableau
 * @param taille
 * @param valeurCherchee
 * @param nombreColonne
 * @param alignement
 * @param position
 */
void afficherPositions(const bool tableau[],
                       size_t taille,
                       int valeurCherchee,
                       int nombreColonne,
                       int alignement,
                       int position = 0);

/**
 *
 * @param tableau
 * @param taille
 * @param position
 * @param valeurCherchee
 * @return
 */
int totalElementChercher(const bool tableau[],
                         size_t taille,
                         int position,
                         int valeurCherchee);

#endif //LABO6_TABLEAU_H
