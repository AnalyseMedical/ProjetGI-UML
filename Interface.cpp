/*************************************************************************
                           Interface  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Interface> (fichier Interface.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Interface.h"
#include <list>

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
void Interface::afficherOperation(){

}
// type Interface::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

void Interface::afficherMaladie(){
    list<string> maladie = exe.getMaladie();
    for(list<string>::iterator i = maladie.begin(); i != maladie.end();++i){
        cout << *i << endl;
    }
}
// type Interface::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

void Interface::demandeDiagnostic(string nomFichier){
    map<Empreinte,Resultat> resultat = exe.diagnostic(nomFichier);
    for(map<Empreinte,Resultat>::iterator i = resultat.begin(); i != resultat.end();++i){
        cout << i->first << ";" << i->second << endl;
    }
}
// type Interface::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs
/*Interface & Interface::operator = ( const Interface & unInterface )
// Algorithme :
//
{
} //----- Fin de operator =*/


//-------------------------------------------- Constructeurs - destructeur
/*Interface::Interface ( const Interface & unInterface )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Interface>" << endl;
#endif
} //----- Fin de Interface (constructeur de copie)*/


Interface::Interface ( )
// Algorithme :
//
{

#ifdef MAP
    cout << "Appel au constructeur de <Interface>" << endl;
#endif
} //----- Fin de Interface


Interface::~Interface ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Interface>" << endl;
#endif
} //----- Fin de ~Interface


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
