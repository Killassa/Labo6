/*
-----------------------------------------------------------------------------------
Nom du fichier : eratosthene.cpp
Auteur(s)      : Tomas Pavoni et Dorian Gillioz
Modifié par    : Grégory Rey-Mermet, Didier Lokokpe
Date creation  : 19.11.2021
Description    : Définitions des fonctions de la librairie eratosthene
Remarque(s)    : ---
Modification   : Déplacement d'une partie de la fonction pour en faire une fonction
                 dans la librairie tableau. Cela permet ainsi de pouvoir réutiliser
                 la fonction ailleurs.
Compilateur    : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#include "eratosthene.h"
#include "tableau.h"

using namespace std;

unsigned criblageEratosthene(bool tab[], unsigned taille, unsigned nbrPremiers[]) {
   // Remplacer tous les nombres pairs, sauf le 2, par le caractère faux
   for (unsigned id = 1; id <= taille; id++){
      if (id > 2 && id % 2 == 0){
         tab[id] = false;
      }
   }

   unsigned i = 3; // On commence à 3 parce que 1 n'est pas premier et que le 2 est déjà pris en compte

   // Crible tous les nombres impairs non premiers
   while (i * i <= taille) {
      if (tab[i]) {
         for (unsigned j = i * i; j < taille; j += 2 * i) {
            tab[j] = false;
         }
      }
      ++i;
   }

   return listeValeurVrai(tab, taille, nbrPremiers, 2);
}

size_t nbre1er(const bool     tabCrible[],   size_t tailleCrible,
                     unsigned tabPremiers[], size_t capacitePremiers) {

   return (size_t)listeValeurVrai(          tabCrible,
                                  (unsigned)tailleCrible,
                                            tabPremiers,
                                            0,
                                  (unsigned)capacitePremiers,
                                            true);
}