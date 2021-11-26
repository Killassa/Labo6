/*
-----------------------------------------------------------------------------------
Nom du fichier : tableau.cpp
Auteur(s)      : Tomas Pavoni et Dorian Gillioz
Modifié par    : Grégory Rey-Mermet, Didier Lokokpe
Date creation  : 19.11.2021
Description    : Définitions des fonctions de la librairie "tableau"
Remarque(s)    : ---
Modification   : ---
Compilateur    : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#include "tableau.h"

#include <iostream>

using namespace std;

void remplirTableau(bool tabOut[], unsigned taille, bool valeur) {
   for (unsigned element = 0; element < taille; ++element){
      tabOut[element] = valeur;
   }
}

void afficherTableau(const bool tab[], unsigned taille, unsigned colonnes,
                     char caractreVrai, char caractereFaux) {
   char c;
   for (unsigned element = 1; element <= taille; ++element){
      c = tab[element-1] ? caractreVrai : caractereFaux;
      cout << ' ' << c;
      if (!(element % colonnes)) cout << endl;
   }
   cout << endl;
}
void afficherTableau(const unsigned tab[], unsigned taille, unsigned colonnes, char separation) {
   for (unsigned element = 1; element <= taille; ++element){
      cout << separation << ' ' << tab[element - 1];
      if (!(element % colonnes)) cout << endl;
   }
   cout << endl;
}

unsigned listeValeurVrai(const bool     tab[],
                               unsigned taille,
                               unsigned tabEntier[],
                               unsigned position,
                               unsigned capacite,
                               bool     decaler) {
   unsigned tailleEntier = 0;  //Taille du tableau d'entier

   for (unsigned j = position; j < taille; ++j) {
      if (tab[j] && tailleEntier <= capacite) {
         tabEntier[tailleEntier] = j + decaler;
         ++tailleEntier;
      }
   }

   return tailleEntier;
}

void put(int tab[], size_t taille) {
   cout << "[";

   afficherTableau((unsigned*)tab, (unsigned)taille, 0, ',');

   /*for (unsigned i = 0; i < taille - 1; ++i) {
      cout << tab[i] << ", ";
   }
   cout << tab[taille-1];*/

   cout << "]";
}
