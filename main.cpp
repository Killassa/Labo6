/*
-------------------------------------------------------------------------------------
Nom du fichier : main.cpp
Nom du labo    : Labo 6 - Crible Eratosthène
Auteur(s)      : Grégory Rey-Mermet, Didier Lokokpe
Date creation  : 19.11.2021
Description    : Le programme permet d'identifier tous les nombres premiers dans un
                 intervalle donné en se basant sur la méthode du crible d'Eratosthène.
                 L'utilisateur choisit le nombre de valeurs à tester.
                 Le programme affichera l'état du tableau avant et après le crible,
                 il indiquera ensuite combien de nombres premiers ont été identifiés
                 et il les liste à l'écran.
Remarque(s)    : -
Compilateur    : Mingw-w64 g++ 11.2.0
-------------------------------------------------------------------------------------
*/
#include <cstdlib>   //EXIT_SUCCESS
#include <iostream>  //cout

#include "crible.h"
#include "tableau.h"
#include "annexe.h"

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
   const string MSG_ERREUR_SAISIE    = "/!\\ Saisie incorrecte ...\n"s;

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
   const int  MAX_VALEUR          = 100;  //Valeur maximum pour la saisie
   const int  MIN_VALEUR          = 2;    //Valeur minimum pour la saisie
   const int  NOMBRE_COLONNE      = 10;   //Nombre de colonne pour l'affichage
   const bool VALEUR_CHERCHEE     = true; //Valeur recherchée dans le tableau booléen
   const char FAUX                = 'X';  //Caractère d'affichage pour une valeur False
   const char VRAI                = 'O';  //Caractère d'affichage pour une valeur True
   const int  ALIGNEMENT_TABLEAU  = 3;    //Alignement pour l'affichage du tableau
   const int  ALIGNEMENT_RESULTAT = 5;    //Alignement pour l'affichage des nombres premiers
   bool tabNbPremier[MAX_VALEUR];         //Tableau de booléen pour le criblage


   /* -------------------------------------------------------------------------------
    *  Introduction au programme
    * -----------------------------------------------------------------------------*/
   cout << MSG_INTRO << endl;


   /* -------------------------------------------------------------------------------
    *  Initialisation du tableau
    * -----------------------------------------------------------------------------*/
   const unsigned TAILLE = (unsigned)saisir(MSG_SAISIE, MIN_VALEUR, MAX_VALEUR, MSG_ERREUR_SAISIE);
   initialiserTableau(tabNbPremier, TAILLE, VALEUR_CHERCHEE);
   cout << endl;


   /* -------------------------------------------------------------------------------
    *  Affiche du tableau après initialisation
    * -----------------------------------------------------------------------------*/
   cout << MSG_INIT << endl;
   afficherTableau(tabNbPremier, TAILLE, ALIGNEMENT_TABLEAU, FAUX, VRAI, NOMBRE_COLONNE);
   cout << endl;


   /* -------------------------------------------------------------------------------
    *  Criblage du tableau
    * -----------------------------------------------------------------------------*/
   eratosthene(tabNbPremier, TAILLE);


   /* -------------------------------------------------------------------------------
    *  Affiche du tableau après criblage
    * -----------------------------------------------------------------------------*/
   cout << MSG_CRIBLAGE << endl;
   afficherTableau(tabNbPremier, TAILLE, ALIGNEMENT_TABLEAU, FAUX, VRAI, NOMBRE_COLONNE);
   cout << endl;


   /* -------------------------------------------------------------------------------
    *  Affiche du résultat
    * -----------------------------------------------------------------------------*/
   afficherResultat(MSG_NB_PREMIER_DEBUT,
                    MSG_NB_PREMIER_FIN,
                    totalElementChercher(tabNbPremier, TAILLE, VALEUR_CHERCHEE));

   afficherPositionsElement(tabNbPremier,
                            TAILLE,
                            VALEUR_CHERCHEE,
                            ALIGNEMENT_RESULTAT,
                            NOMBRE_COLONNE);
   cout << endl;


   /* -------------------------------------------------------------------------------
    *  Message de fin
    * -----------------------------------------------------------------------------*/
   pause(MSG_QUITTER);


   return EXIT_SUCCESS;
}