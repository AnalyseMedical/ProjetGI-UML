/*************************************************************************
                           ResultatDetailles  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <ResultatDetailles> (fichier ResultatDetailles.h) ----------------
#if ! defined ( ResultatDetailles_H )
#define ResultatDetailles_H

//--------------------------------------------------- Interfaces utilisées
#include "Resultat.h"
#include "Attribut.h"
#include <vector>
#include <iostream>
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <ResultatDetailles>
//
//
//------------------------------------------------------------------------

class ResultatDetailles : public Resultat
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
    ResultatDetailles & operator = ( const ResultatDetailles & unResultatDetailles );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    ResultatDetailles ( const ResultatDetailles & unResultatDetailles );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    ResultatDetailles ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~ResultatDetailles ( );
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

//-------------------------------- Autres définitions dépendantes de <ResultatDetailles>

#endif // ResultatDetailles_H

