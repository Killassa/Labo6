/*
-----------------------------------------------------------------------------------
Nom du fichier : annexe.h
Auteur(s)      : Tomas Pavoni et Dorian Gillioz
Date creation  : 19.11.2021
Description    : Déclaration des fonctions de la librairie "annexe".
                 Fonctions diverses souvent indispensables à un programme
Remarque(s)    : ---
Modification   : ---
Compilateur    : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/


#ifndef LABO06_ERATOSTHENE_ANNEXE_H
#define LABO06_ERATOSTHENE_ANNEXE_H

#include <string>

/**
 * nom                  : saisie
 *
 * description          : saisit un entier entre @param min et @param max
 *
 * @param min           : La valeur minimale à saisir
 * @param max           : La valeur maximale à saisir
 * @param MSG_SAISIE    : Le message de saisie
 * @param MSG_ERREUR    : Le message d'erreur
 *
 * @return              : La saisie effectuée
 */
int saisie(int min, int max, const std::string& MSG_SAISIE,
           const std::string& MSG_ERREUR);

#endif //LABO06_ERATOSTHENE_ANNEXE_H
