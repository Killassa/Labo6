/*
-------------------------------------------------------------------------------------
Nom du fichier : tableau.cpp
Nom du labo    : Labo 6 - Crible Eratosthène
Auteur(s)      : Grégory Rey-Mermet, Didier Lokokpe
Date creation  : 19.11.2021
Description    : Ce fichier définit diverses fonctions utiles pour initialiser des
                 tableaux, effectuer des recherches dans un tableau ainsi que
                 différents affichage.
Remarque(s)    : -
Compilateur    : Mingw-w64 g++ 11.2.0
-------------------------------------------------------------------------------------
*/

#include <iostream> //cout, cin
#include <iomanip>  //setw

#include "tableau.h"

using namespace std;

void initialiserTableau(bool tableau[], unsigned taille, bool valeurDefaut) {
   for(unsigned i = 0; i < taille; ++i) {
      tableau[i] = valeurDefaut;
   }
}

unsigned chercher(const bool     tableau[],
                        unsigned taille,
                        bool     valeurCherchee,
                        unsigned position) {
   for( ; position < taille; ++position) {
      if(tableau[position] == valeurCherchee) {
         return position;
      }
   }

   return taille;
}

void afficherTableau(const bool     tableau[],
                           unsigned taille,
                           unsigned nombreColonne,
                           int      alignement,
                           char     faux,
                           char     vrai,
                           unsigned position) {
   for(unsigned i = position; i < taille; i+=nombreColonne) {
      for(unsigned colonne = 0; colonne < nombreColonne && i+colonne < taille; colonne++)  {
         cout << setw(alignement) << (tableau[i+colonne] ? faux : vrai);
      }
      cout << endl;
   }
}

void afficherPositionsElement(const bool     tableau[],
                                    unsigned taille,
                                    bool     valeurCherchee,
                                    unsigned nombreColonne,
                                    int      alignement,
                                    unsigned position) {
   unsigned increment = 0;
   unsigned positionActuel = position;

   while((positionActuel = chercher(tableau, taille, valeurCherchee, positionActuel)) < taille) {

      cout << setw(alignement) << ++positionActuel;
      ++increment;
      if(increment % nombreColonne == 0 && increment != 0) {
         cout << endl;
      }
   }

   cout << endl;
}

int totalElementChercher(const bool     tableau[],
                               unsigned taille,
                               bool     valeurCherchee,
                               unsigned position) {
   int nbreOccurence = 0;
   unsigned positionActuel = position;

    do {
      positionActuel = chercher(tableau, taille, valeurCherchee, positionActuel);
   } while(positionActuel < taille && ++positionActuel && ++nbreOccurence);

   return nbreOccurence;
}