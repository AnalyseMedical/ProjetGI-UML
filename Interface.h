/*************************************************************************
                           Interface  -  description
                             -------------------
    début                : 25/05/2018
    copyright            : (C) 2018 par clagadec
*************************************************************************/

//---------- Interface de la classe <Interface> (fichier Interface.h) ----------------
#if ! defined ( Interface_H )
#define Interface_H

//--------------------------------------------------- Interfaces utilisées
#include "Executer.h"
#include <string>
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Interface>
//
//
//------------------------------------------------------------------------

class Interface
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void afficherOperation();
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    void afficherMaladie();
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    void demandeDiagnostic(string nomFichier, string nomFichierMeta);
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //


//------------------------------------------------- Surcharge d'opérateurs
    //Interface & operator = ( const Interface & unInterface );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    Interface ( const Interface & unInterface );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Interface ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Interface ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
    Executer exe;
};

//-------------------------------- Autres définitions dépendantes de <Interface>

#endif // Interface_H

