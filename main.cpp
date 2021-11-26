/*
-----------------------------------------------------------------------------------
Nom du fichier : main.cpp
Auteur(s)      : Tomas Pavoni et Dorian Gillioz
Modifié par    : Grégory Rey-Mermet, Didier Lokokpe
Date creation  : 19.11.2021
Description    : Ce programme permet de cribler un tableau à la façcon d'Eratosthène
                 et de renvoyer les nombres premiers se trouvant dans celui-ci.
                 Pour cela il faudra spécifier le nombre de valeurs que vous désirez
                 dans votre tableau, autrement dit, le plus grand nombre qu'il
                 comportera.
Modification   : Ajout d'un complément au Labo 6
Remarque(s)    :
Compilateur    : Mingw-w64 g++ 11.1.0
-----------------------------------------------------------------------------------
*/

#include "annexe.h"
#include "tableau.h"
#include "eratosthene.h"

#include <cstdlib>
#include <iostream>
#include <limits>
#include <string>

using namespace std;

int main() {

   /*const string   DESCRIPTION    = "Ce programme permet de cribler un tableau a "
                                     "la "
                                   "façcon d'Eratosthene et de renvoyer les nombres "
                                   "premiers se trouvant dans celui-ci.\n"
                                   "Pour cela il faudra specifier le nombre de "
                                   "valeurs que vous desirez dans votre tableau, "
                                   "autrement dit, le plus grand nombre qu'il "
                                   "comportera.";
   const string   MESSAGE_SAISIE = "nbre de valeurs";
   const string   MESSAGE_ERREUR = "/!\\ Erreur de saisie!";
   const string   INITIALISATION = "initialisation de tableau";
   const string   CRIBLAGE       = "criblage du tableau";
   const string   NBR_PREMIERS   = "nombre de nombres premiers :";
   const char     CARACTERE_VRAI = 'O';
   const char     CARACTERE_FAUX = 'X';
   const unsigned MIN            = 2;
   const unsigned MAX            = 100;
   const unsigned COLONNE        = 10;*/

   /*// Début du programme
   cout << DESCRIPTION << endl;

   // Saisie du nombre de valeurs

   const unsigned NBR_VALEURS = (unsigned)saisie((int)MIN, (int)MAX,
                                                 MESSAGE_SAISIE, MESSAGE_ERREUR);

   // Initialisation du tableau
   bool tab[MAX];
   remplirTableau(tab, NBR_VALEURS, CARACTERE_VRAI);
   // Affichage
   cout << endl << INITIALISATION << endl;
   afficherTableau(tab, NBR_VALEURS, COLONNE, CARACTERE_VRAI, CARACTERE_FAUX);

   // Criblage du tableau
   unsigned tabNbrPremiers[MAX];
   unsigned nbrePremiers = criblageEratosthene(tab, NBR_VALEURS, tabNbrPremiers);
   // Affichage
   cout << CRIBLAGE << endl;
   afficherTableau(tab, NBR_VALEURS, COLONNE, CARACTERE_VRAI, CARACTERE_FAUX);

   // Affichage des nombres premiers
   cout << NBR_PREMIERS << nbrePremiers << endl ;

   //Correction de l'ancien affichage -> dérangeant lors des tests pour l'affichage
   unsigned const TAILLE = nbrePremiers;//sizeof(tabNbrPremiers) / sizeof(unsigned);
   afficherTableau(tabNbrPremiers, TAILLE, COLONNE);*/




    /* -------------------------------------------------------------------------------
    *  Complément Labo 6
    * -----------------------------------------------------------------------------*/
   cout << "complement ..." << endl;

   // tableau de 1 à 100, O représente les nbres 1er
   const bool O = true;
   const bool X = false;
   const bool CRIBLE_INITIAL[] = {X, O, O, X, O, X, O, X, X, X,
                                  O, X, O, X, X, X, O, X, O, X,
                                  X, X, O, X, X, X, X, X, O, X,
                                  O, X, X, X, X, X, O, X, X, X,
                                  O, X, O, X, X, X, O, X, X, X,
                                  X, X, O, X, X, X, X, X, O, X,
                                  O, X, X, X, X, X, O, X, X, X,
                                  O, X, O, X, X, X, X, X, O, X,
                                  X, X, O, X, X, X, X, X, O, X,
                                  X, X, X, X, X, X, O, X, X, X};
   const size_t TAILLE_INITIAL = sizeof(CRIBLE_INITIAL) / sizeof(bool);
   // tableau de nbre 1er
   const size_t CAPACITE = 100; // réservation
   size_t tailleNbre1er; // taille
   unsigned tab1er[CAPACITE]; // tableau de nbres 1er
   tailleNbre1er = nbre1er(CRIBLE_INITIAL, TAILLE_INITIAL,
                           tab1er, CAPACITE);
   put((int*)tab1er, tailleNbre1er);

   // 5. Fin du programme
   cout << endl << "presser ENTER pour quitter";
   cin.ignore(numeric_limits<streamsize>::max(), '\n'); // vider le buffer
   return EXIT_SUCCESS;
}
