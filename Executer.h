/*************************************************************************
                           Executer  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Executer> (fichier Executer.h) ----------------
#if ! defined ( Executer_H )
#define Executer_H

//--------------------------------------------------- Interfaces utilisées
using namespace std;
#include <list>
#include <string>
#include <iostream>
#include <map>
#include "Resultat.h"
#include "Empreinte.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Executer>
//
//
//------------------------------------------------------------------------

class Executer
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

    list<string> getMaladie() const;
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    map<Empreinte,Resultat> diagnostic(string nomFichier);
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    list<Resultat> diagnostic(Empreinte e);
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    bool chargerDonnee(string nomFichier);
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    bool chargerMetaDonnee(string nomFichier);
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //
    

//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- Constructeurs - destructeur
    Executer ( const Executer & unExecuter ) = default;
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Executer ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Executer ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

};

//-------------------------------- Autres définitions dépendantes de <Executer>

#endif // Executer_H

