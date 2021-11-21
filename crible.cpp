/*
-------------------------------------------------------------------------------------
Nom du fichier : crible.cpp
Nom du labo    : Labo 6 - Crible Eratosthène
Auteur(s)      : Grégory Rey-Mermet, Didier Lokokpe
Date creation  : 19.11.2021
Description    : Selon la methode d'Eratosthene, cette fonction permet de
                 rechercher les nombres premiers dans un tableau donnée en
                 commencant par 2, ensuite mettre tout ses multiple a faux pour
                 rendre la recherche plus facile
Remarque(s)    :
Compilateur    : Mingw-w64 g++ 11.2.0
-------------------------------------------------------------------------------------
*/

#include "crible.h"

void eratosthene(bool tableau[], size_t taille, unsigned position) {

   //tableau[1] = false;
   tableau[0] = false;

   for( ; position <= taille; ++position){ // permet de tester chaque éléments du
      // tableau
      if(tableau[position]){ // teste si la case actuelle du tableau est vrai
         unsigned valeur = position + 1;
         for(unsigned valeurInterval = valeur * valeur; valeurInterval <= taille;
         valeurInterval += valeur)
         {
            tableau[valeurInterval - 1] = false;// mettre tout les diviseur de
            // l'élément courant a faux pourne plus encore les tester
         }
      }
   }
}