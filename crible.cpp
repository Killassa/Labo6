/*
-------------------------------------------------------------------------------------
Nom du fichier : crible.cpp
Nom du labo    : Labo 6 - Crible Eratosthène
Auteur(s)      : Grégory Rey-Mermet, Didier Lokokpe
Date creation  : 19.11.2021
Description    : Ce fichier définit diverses fonctions utiles pour cribler un tableau
                 de booléen.
Remarque(s)    : /!\ Il est nécessaire de passer un tableau de booléen préalablement
                 initialisé à True pour le bon fonctionnement du crible.
Compilateur    : Mingw-w64 g++ 11.2.0
-------------------------------------------------------------------------------------
*/

#include "crible.h"

void eratosthene(bool tableau[], unsigned taille) {
   //1 n'est pas premier
   tableau[0] = false;

   for(unsigned position = 1; position < taille; ++position) {
      //Vérifie si la case actuelle du tableau est un nombre premier
      if(tableau[position]) {
         unsigned valeurPosition = position + 1;

         for(unsigned multiple =  valeurPosition * valeurPosition;
                      multiple <= taille;
                      multiple += valeurPosition) {
            //Tous les multiples de l'élément actuel sont considérés comme non-premier
            //et leur valeur est passée à fausse afin de ne plus les tester
            tableau[multiple - 1] = false;
         }
      }
   }
}