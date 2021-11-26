/*
-----------------------------------------------------------------------------------
Nom du fichier : annexe.cpp
Auteur(s)      : Tomas Pavoni et Dorian Gillioz
Date creation  : 19.11.2021
Description    : Définitions des fonction de la librairie "annexe"
Remarque(s)    : ---
Modification   : ---
Compilateur    : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#include "annexe.h"

#include <iostream>
#include <limits>
#include <string>

using namespace std;

int saisie(int min, int max, const string& MSG_SAISIE,
           const string& MSG_ERREUR){

   int  saisie;
   bool erreur;
   do {
      cout << MSG_SAISIE << " [" << min << ".." << max << "] : ";
      cin  >> saisie;

      erreur = saisie < min || saisie > max || cin.fail();
      if (erreur) {
         cout << MSG_ERREUR << endl;
         cin.clear();
      }
      cin.ignore(numeric_limits<streamsize>::max(), '\n');  // vider buffer
   } while(erreur);

   return saisie;
}