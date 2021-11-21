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
#include <cstdlib> // pour EXIT_SUCCESS
#include <iostream> // pour cout / cin

#include "annexe.h"
#include "tableau.h"
#include "crible.h"

using namespace std;

int main() {
   /* -------------------------------------------------------------------------------
    *  Initialisation des messages
    * -----------------------------------------------------------------------------*/
   //Message d'introduction du programme
   const string MSG_INTRO            = "Ce programme ...";

   //Message à afficher lors de la saisie
   const string MSG_SAISIE           = "nbre de valeurs";

   //Message d'erreur
   const string MSG_ERREUR_SAISIE    = "/!\\ erreur de saisie ...\n"s;

   //Messsage pour l'affichage du tableau initialisé
   const string MSG_INIT             = "initialisation du tableau";

   //Message pour l'affichage du tableau criblé
   const string MSG_CRIBLAGE         = "criblage du tableau";

   //Message de début pour l'affichage du nombre de nombres premier
   const string MSG_NB_PREMIER_DEBUT = "il y a";

   //Message de fin pour l'affichage du nombre de nombres premier
   const string MSG_NB_PREMIER_FIN   = "nbres premier";

   //Message de fin pour quitter le programme
   const string MSG_QUITTER          = "Presser ENTER pour quitter";


   /* -------------------------------------------------------------------------------
    *  Initialisation des variables
    * -----------------------------------------------------------------------------*/
   const int  MAX_VALEUR          = 100;  //
   const int  MIN_VALEUR          = 2;    //
   const int  NOMBRE_COLONNE      = 10;   //
   const bool VALEUR_CHERCHEE     = true; //
   const char FAUX                = 'X';  //
   const char VRAI                = 'O';  //
   const int  ALIGNEMENT_TABLEAU  = 3;    //
   const int  ALIGNEMENT_RESULTAT = 5;    //
   bool tabNbPremier[MAX_VALEUR];         //


   /* -------------------------------------------------------------------------------
    *  Début au programme
    * -----------------------------------------------------------------------------*/
   cout << MSG_INTRO << endl;


   /* -------------------------------------------------------------------------------
    *  Initialisation du tableau
    * -----------------------------------------------------------------------------*/
   const unsigned TAILLE = (unsigned)saisir(MSG_SAISIE, MIN_VALEUR, MAX_VALEUR, MSG_ERREUR_SAISIE);
   initialiserTableau(tabNbPremier, TAILLE, VALEUR_CHERCHEE);
   cout << endl;


   /* -------------------------------------------------------------------------------
    *  Affichage du tableau après initialisation
    * -----------------------------------------------------------------------------*/
   cout << MSG_INIT << endl;
   afficherTableau(tabNbPremier, TAILLE, NOMBRE_COLONNE, ALIGNEMENT_TABLEAU, FAUX, VRAI);
   cout << endl;


   /* -------------------------------------------------------------------------------
    *  Criblage du tableau
    * -----------------------------------------------------------------------------*/
   eratosthene(tabNbPremier, TAILLE);


   /* -------------------------------------------------------------------------------
    *  Affiche du tableau après criblage
    * -----------------------------------------------------------------------------*/
   cout << MSG_CRIBLAGE << endl;
   afficherTableau(tabNbPremier, TAILLE, NOMBRE_COLONNE, ALIGNEMENT_TABLEAU, FAUX, VRAI);
   cout << endl;


   /* -------------------------------------------------------------------------------
    *  Affiche du résultat en excluant le 1 car ce n'est pas un nombre premier
    * -----------------------------------------------------------------------------*/
   afficherResultat(MSG_NB_PREMIER_DEBUT,
                    MSG_NB_PREMIER_FIN,
                    totalElementChercher(tabNbPremier, TAILLE, VALEUR_CHERCHEE, 1));
   afficherPositionsElement(tabNbPremier,
                            TAILLE,
                            VALEUR_CHERCHEE,
                            NOMBRE_COLONNE,
                            ALIGNEMENT_RESULTAT,
                            1);
   cout << endl;


   /* -------------------------------------------------------------------------------
    *  Message de fin
    * -----------------------------------------------------------------------------*/
   pause(MSG_QUITTER);

   return EXIT_SUCCESS;
}