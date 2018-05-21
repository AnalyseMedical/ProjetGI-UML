/*************************************************************************
                           Executer  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Executer> (fichier Executer.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Executer.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
    list<std::string> Executer::getMaladie() const {
		list<std::string> result;
		return result;
    }
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    /*map<Empreinte,Resultat> Executer::diagnostic(string nomFichier){
		return null;
    }*/
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    /*list<Resultat> Executer::diagnostic(Empreinte e){

    }*/
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    /*bool Executer::chargerDonnee(string nomFichier){

    }*/
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    /*bool Executer::chargerMetaDonnee(string nomFichier){

    }*/
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //
    

//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- Constructeurs - destructeur
/*Executer::Executer ( const Executer & unExecuter )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Executer>" << endl;
#endif
} //----- Fin de Executer (constructeur de copie)*/


Executer::Executer ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Executer>" << endl;
#endif
} //----- Fin de Executer


Executer::~Executer ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Executer>" << endl;
#endif
} //----- Fin de ~Executer


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
