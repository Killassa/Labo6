/*
-------------------------------------------------------------------------------------
Nom du fichier : tableau.h
Nom du labo    : Labo 6 - Crible Eratosthène
Auteur(s)      : Grégory Rey-Mermet, Didier Lokokpe
Date creation  : 19.11.2021
Description    : Ce fichier d'en-tête (.h) met à la disposition de l'utilisateur
                 diverses fonctions utiles pour initialiser des tableaux, effectuer
                 des recherches dans un tableau ainsi que différents affichage.
Remarque(s)    : Le choix de tableaux booléens a été fait car n'ayant pas encore vu
                 la généricité des données, il est nécessaire de passer exactement
                 le même type de tableau que celui générer initialement.
                 Cette librairie ne fonctionne donc qu'avec des tableaux booléens
Compilateur    : Mingw-w64 g++ 11.2.0
-------------------------------------------------------------------------------------
*/

#ifndef LABO6_TABLEAU_H
#define LABO6_TABLEAU_H

/**
 * Initialise un tableau booléen en fonction d'une valeur par défaut donnée
 *
 * @param tableau       Tableau booléen à initialiser
 * @param taille        Taille du tableau
 * @param valeurDefaut  Valeur à assigner par défaut
 */
void initialiserTableau(bool tableau[], unsigned taille, bool valeurDefaut);


/**
 * Cherche une valeur dans un tableau booléen en commençant à une position défini
 * et retourne la position de la première valeur trouvée
 *
 * @param tableau        Tableau booléen dans lequel effectuer la recherche
 * @param taille         Taille du tableau
 * @param valeurCherchee Valeur booléenne recherchée dans le tableau
 * @param position       Position du tableau à partir de laquelle la recherche
 *                       commence (par défaut : 0)
 * @return               La position à laquelle la valeur a été trouvée ou si la
 *                       valeur n'a pas été trouvée, retourne la taille du tableau
 */
unsigned chercher(const bool     tableau[],
                        unsigned taille,
                        bool     valeurCherchee,
                        unsigned position = 0);


/**
 * Affiche un tableau booléen avec des caractères définis en fonction de la valeur
 * vraie ou fausse indiquée, l'affichage est formaté selon un nombre de colonne défini
 *
 * @param tableau       Tableau booléen à afficher
 * @param taille        Taille du tableau
 * @param nombreColonne Nombre de colonne sur lequel affiché les différentes valeurs
 *                      du tableau (Nombre d'éléments à afficher par ligne)
 * @param alignement    Défini l'espace entre les éléments pour les aligner
 * @param faux          Caractère à afficher pour une valeur booléenne de 0 (par défaut : '0')
 * @param vrai          Caractère à afficher pour une valeur booléenne de 1 (par défaut : '1')
 * @param position      Position du tableau à partir de laquel l'affichage des
 *                      éléments débute (par défaut : 0)
 */
void afficherTableau(const bool         tableau[],
                           unsigned     taille,
                           unsigned     nombreColonne,
                           int          alignement,
                           char         faux     = '0',
                           char         vrai     = '1',
                           unsigned     position = 0);


/**
 * Affiche les positions d'une valeur recherchée dans un tableau de booléen,
 * l'affichage est formaté selon un nombre de colonne défini
 *
 * @param tableau        Tableau booléen dans lequel effectuer la recherche
 * @param taille         Taille du tableau
 * @param valeurCherchee Valeur booléenne recherchée dans le tableau
 * @param nombreColonne  Nombre de colonne sur lequel affiché les différentes valeurs
 *                       du tableau (Nombre d'éléments à afficher par ligne)
 * @param alignement     Défini l'espace entre les éléments pour les aligner
 * @param position       Position du tableau à partir de laquel l'affichage des
 *                       éléments débute (par défaut : 0)
 */
void afficherPositionsElement(const bool         tableau[],
                                    unsigned     taille,
                                    bool         valeurCherchee,
                                    unsigned     nombreColonne,
                                    int          alignement,
                                    unsigned     position = 0);


/**
 * Retourne le nombre de fois où une valeur recherchée se trouve dans un tableau de booléen
 *
 * @param tableau        Tableau booléen dans lequel effectuer la recherche
 * @param taille         Taille du tableau
 * @param valeurCherchee Valeur booléenne recherchée dans le tableau
 * @param position       Position du tableau à partir de laquelle la recherche débute
 * @return               Le nombre de fois où la valeur se trouve dans le tableau
 */
int totalElementChercher(const bool     tableau[],
                               unsigned taille,
                               bool     valeurCherchee,
                               unsigned position = 0);

#endif //LABO6_TABLEAU_H
