/*************************************************************************
                           Data  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Data> (fichier Data.h) ----------------
#if ! defined ( Data_H )
#define Data_H

//--------------------------------------------------- Interfaces utilisées
using namespace std;
#include <vector>
#include "Attribut.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Data>
//
//
//------------------------------------------------------------------------

class Data
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //


//------------------------------------------------- Surcharge d'opérateurs
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    Data ( const Data & unData ){
        copy(Attributs.begin(),Attributs.end(),back_inserter(unData.Attributs));
    }
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Data ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    Data (vector<Attribut> ceVecteur ){
        copy(Attributs.begin(),Attributs.end(),back_inserter(ceVecteur));
    }
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Data ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
vector<Attribut> Attributs;
};

//-------------------------------- Autres définitions dépendantes de <Data>

#endif // Data_H

