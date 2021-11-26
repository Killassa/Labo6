/*
-----------------------------------------------------------------------------------
Nom du fichier : eratosthene.h
Auteur(s)      : Tomas Pavoni et Dorian Gillioz
Modifié par    : Grégory Rey-Mermet, Didier Lokokpe
Date creation  : 19.11.2021
Description    : Déclaration des fonction de la librairie eratosthene.
                 Fonctions utiles au criblage de tableaux à la façon d'Eratosthène
Remarque(s)    : ---
Modification   : Ajout d'une fonction permettant de récupérer une liste de nombres
                 premiers en fonction d'un tableau criblé passé en paramètre
Compilateur    : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/


#ifndef LABO06_ERATOSTHENE_ERATOSTHENE_H
#define LABO06_ERATOSTHENE_ERATOSTHENE_H

#include <cstdlib>
#include <string>

/**
 * nom                  : criblageEratosthene
 *
 * description          : crible le tableau @param tab à la façon d'Eratosthene.
 *                        Remplace la valeur du tableau par le @param caractereFaux
 *                        si celle-ci est un nombre premier et inscrit celui-ci dans
 *                        le tableau @param tabout
 *
 * @param tab           : tableau à cribler
 * @param taille        : taille du tableau que l'on veut cribler
 * @param nbrPremiers   : tableau contenent les nombres entiers trouvés dans @param tab
 * @param caractereFaux : caractère de criblage
 *
 * /!\                  : @param taille ne doit pas être plus grand que la capacité de
 *                        celui-ci
 *
 * @return              : le nombre de nombre premiers
 */
unsigned criblageEratosthene(bool tab[], unsigned taille, unsigned nbrPremiers[]);

/**
 * nom                      : nbre1er
 *
 * description              : Retourne un tableau ne contenant que les nombres
 *                            premiers en se basant sur un tableau de booléen
 *
 * @param tabCrible         : Le tableau de booléen contenant les nombres premiers
 * @param tailleCrible      : Taille du tableau
 * @param tabPremiers       : Tableau d'entier à remplir de nombres premiers
 * @param capacitePremiers  : Capacité maximum du tableau de nombres premiers
 * @return                  : Taille du tableau des nombres premiers après ajout de
 *                            valeurs
 */
size_t nbre1er(const bool     tabCrible[],   size_t tailleCrible,
                     unsigned tabPremiers[], size_t capacitePremiers);

#endif //LABO06_ERATOSTHENE_ERATOSTHENE_H
