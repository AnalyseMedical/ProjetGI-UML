/*************************************************************************
                           Metadonnees  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Metadonnees> (fichier Metadonnees.h) ----------------
#if ! defined ( Metadonnees_H )
#define Metadonnees_H

//--------------------------------------------------- Interfaces utilisées
using namespace std;
#include <vector>
#include "Attribut.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Metadonnees>
//
//
//------------------------------------------------------------------------

class Metadonnees
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
    Metadonnees ( const Metadonnees & unMetadonnees ){
        copy(Attributs.begin(),Attributs.end(),back_inserter(unMetadonnees.Attributs));
    }
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Metadonnees ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    Metadonnees (vector<Attribut> ceVecteur ){
        copy(Attributs.begin(),Attributs.end(),back_inserter(ceVecteur));
    }
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Metadonnees ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    vector<Attribut> getAttributs(){
        return Attributs;
    }
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

//-------------------------------- Autres définitions dépendantes de <Metadonnees>

#endif // Metadonnees_H

