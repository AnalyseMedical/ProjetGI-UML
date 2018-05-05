/*************************************************************************
                           Interface  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Interface> (fichier Interface.h) ----------------
#if ! defined ( Interface_H )
#define Interface_H

//--------------------------------------------------- Interfaces utilisées

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
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //


//------------------------------------------------- Surcharge d'opérateurs
    Interface & operator = ( const Interface & unInterface );
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

};

//-------------------------------- Autres définitions dépendantes de <Interface>

#endif // Interface_H

