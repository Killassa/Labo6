/*
-----------------------------------------------------------------------------------
Nom du fichier : annexe.h
Nom du labo : Labo 6 - Crible Eratosthène
Auteur(s) : Grégory Rey-Mermet, Didier Lokokpe
Date creation : 19.11.2021
Description :
Remarque(s) :
Compilateur : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#ifndef LABO6_ANNEXE_H
#define LABO6_ANNEXE_H

#include <string>

/**
 * Affiche un message et met en pause le programme jusqu'à ce que l'utilisateur
 * presse la touche ENTER
 *
 * @param message Message à afficher lors de la pause
 */
void pause(const std::string& message);

/**
 * Saisir un entier dans un intervalle (saisie controllée)
 *
 * @param msgSaisie Message pour indiquer la saisie à effectuer
 * @param min       Valeur min
 * @param max       Valeur max
 * @param msgErreur Message d'erreur ("" par défaut)
 * @return          Entier saisi
 */
int saisir(const std::string& msgSaisie, int min, int max, const std::string& msgErreur = "");

/**
 * Vide le buffer
 */
void viderBuffer();

#endif //LABO6_ANNEXE_H
