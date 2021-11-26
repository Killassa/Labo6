/*
-----------------------------------------------------------------------------------
Nom du fichier : tableau.h
Auteur(s)      : Tomas Pavoni et Dorian Gillioz
Modifié par    : Grégory Rey-Mermet, Didier Lokokpe
Date creation  : 19.11.2021
Description    : Déclarations des fonctions de la librairie "tableau".
                 Fonctions utiles à la gestion de tableaux
Remarque(s)    : ---
Modification   : ---
Compilateur    : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#ifndef LABO06_ERATOSTHENE_TABLEAU_H
#define LABO06_ERATOSTHENE_TABLEAU_H

#include <cstdlib>

/**
 * nom              : remplirTableau
 *
 * description      : Remplit un tableau jusqu'à l'élément @param taille qui contient
 *                    uniquement @param valeur
 *
 * @param tabOut    : Le tableau à remplir
 * @param taille    : la taille du tableau que l'on veut remplir
 * @param valeur    : la valeur que contiendra chaque case du tableau
 *
 * /!\              : @param taille ne doit pas être plus grand que la capacité du
 *                    tableau
 */
void remplirTableau(bool tabOut[], unsigned taille, bool valeur);

/**
 * nom                  : afficherTableau
 *
 * description          : Affiche un tableau formaté en fonction du nombre de colonnes
 *                        donné
 *
 * @param tab           : Le tableau que l'on veut afficher
 * @param taille        : Le nombre d'éléments du tableau que l'on veut afficher
 * @param colonnes      : Le nombre de colonnes du tableau
 * Optionnel :
 * @param caractereVrai : La valeur qui sera affichée pour une case true (si booléen)
 * @param caractereFaux : La valeur qui sera affichée pour une case false(si booléen)
 *
 * /!\                  : @param taille ne doit pas être plus grand que la capacité du
 *                        tableau
 */
void afficherTableau(const bool tab[], unsigned taille, unsigned colonnes,
                      char caractereVrai, char caractereFaux);

/**
 * nom                  : afficherTableau
 *
 * description          : Affiche un tableau formaté en fonction du nombre de colonnes
 *                        donné
 *
 * @param tab           : Le tableau que l'on veut afficher
 * @param taille        : Le nombre d'éléments du tableau que l'on veut afficher
 * @param colonnes      : Le nombre de colonnes du tableau
 * @param separation    : Caractère à ajouter comme séparation si désiré
 */
void afficherTableau(const unsigned tab[], unsigned taille, unsigned colonnes, char separation = '\0');

/**
 * nom                  : listeValeurVrai
 *
 * description          : Retourne un tableau contenant les index des valeurs True
 *                        d'un tableau booléen
 *
 * @param tab           : Tableau booléen dans lequel on cherche nos valeurs
 * @param taille        : Taille du tableau
 * @param tabEntier     : Tableau pour l'obtention des valeurs
 * @param position      : Position à laquelle on commence à récupérer les valeurs
 *                        Remarques : Il a fallu mettre 2 par défaut ici pour éviter
 *                                    de modifier le code précédent
 * @param capacite      : Capacite max du tableau d'entier
 * @param decaler       : Permet d'incrémenter l'index de 1 pour commencer à compter
 *                        depuis 1 et non depuis 0
 * @return              : Taille du tableau d'entier après ajout des valeurs
 */
unsigned listeValeurVrai(const bool     tab[],
                               unsigned taille,
                               unsigned tabEntier[],
                               unsigned position = 0,
                               unsigned capacite = 100,
                               bool     decaler  = false);


/**
 *
 * @param tab
 * @param taille
 */
void put(int tab[], size_t taille);

#endif //LABO06_ERATOSTHENE_TABLEAU_H
