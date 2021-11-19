/*
-----------------------------------------------------------------------------------
Nom du fichier : annexe.cpp
Nom du labo : Labo 6 - Crible Eratosthène
Auteur(s) : Grégory Rey-Mermet, Didier Lokokpe
Date creation : 19.11.2021
Description :
Remarque(s) :
Compilateur : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#include <iostream>
#include <limits>

#include "annexe.h"

using namespace std;

void viderBuffer() {
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void pause(const string& message) {
   cout << message;
   viderBuffer();
}

/**
 *
 * @param erreur
 * @param msgErreur
 */
void verifierSaisie(const bool erreur, const string& msgErreur) {
   if (erreur) {
      cout << msgErreur;
      cin.clear(); // réparer le flux d'entrée cin
   }

   viderBuffer();
}

int saisir(const string& msgSaisie, int min, int max, const string& msgErreur) {
   int  entierSaisi;
   bool erreur;

   do {
      cout << msgSaisie << " [" << min << ".." << max << "] : ";
      cin  >> entierSaisi;

      erreur = cin.fail() || entierSaisi < min || entierSaisi > max;
      verifierSaisie(erreur, msgErreur);
   } while (erreur);

   return entierSaisi;
}

