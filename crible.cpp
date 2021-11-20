/*
-------------------------------------------------------------------------------------
Nom du fichier : crible.cpp
Nom du labo    : Labo 6 - Crible Eratosthène
Auteur(s)      : Grégory Rey-Mermet, Didier Lokokpe
Date creation  : 19.11.2021
Description    : Selon la methode d'Eratosthene, cette fonction permet de
                 rechercher les nombres premiers dans un tableau donnée
Remarque(s)    :
Compilateur    : Mingw-w64 g++ 11.2.0
-------------------------------------------------------------------------------------
*/

#include "crible.h"

void eratosthene(bool tableau[], size_t taille, unsigned position) {

   bool pasPremier; // detecteur de nombre pas premier

   for( ; position <= taille; ++position){ // premiere boucle qui vérifie si les
      // éléments du tableau
      for(unsigned valeurInterval = 2; valeurInterval <= taille; ++valeurInterval){ // deuxieme boucle qui teste chaque
         // éléments du tableau par rapport aux éléments de la premiere boucle
         if(position != valeurInterval and position % valeurInterval == 0){ // teste si l'élément a d'autre
            // diviseurs
            pasPremier = true;
            break;
         }
      }
      if(pasPremier){ // si l'element n'est pas premmier
         tableau[position - 1] = true; // mettre a 1 l'element a cette posotion
         pasPremier = false; // mettre a jour le detecteur de nombre pas premier
      }
   }
}