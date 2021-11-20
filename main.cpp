/*
-----------------------------------------------------------------------------------
Nom du fichier : main.cpp
Nom du labo : Labo 6 - Crible Eratosthène
Auteur(s) : Grégory Rey-Mermet, Didier Lokokpe
Date creation : 19.11.2021
Description :
Remarque(s) :
Compilateur : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/
#include <cstdlib>
#include <iostream>

#include "annexe.h"
#include "tableau.h"
#include "crible.h"

using namespace std;

int main() {
   const string MSG_QUITTER = "Presser ENTER pour quitter";

   const char FAUX = 'X';
   const char VRAI = 'O';

   const int MIN = 2,
             MAX = 100,
      NBRCOLONNE = 10;

   bool valeurDefaut = false;

   cout << "Ce programme..." << endl;
   const unsigned TAILLE = saisir("Veuillez saisir le nombre de valeur", MIN, MAX,
                                "saisie incocrecte");

   cout << endl;

   bool tab[TAILLE];

   initialiserTableau(tab, TAILLE, valeurDefaut);

   afficherTableau(tab, TAILLE, NBRCOLONNE, 2, FAUX, VRAI);

   eratosthene(tab, TAILLE, 2);

   cout << endl;

   afficherTableau(tab, TAILLE, NBRCOLONNE, 2, FAUX, VRAI);

   cout << endl;

   cout << "Il y a " << totalElementChercher(tab, TAILLE, false) << " nombre "
                                                                    "premier." <<
                                                                    endl;

   afficherPositionsElement(tab, TAILLE, false, NBRCOLONNE, 4);

   pause(MSG_QUITTER);

   return EXIT_SUCCESS;
}