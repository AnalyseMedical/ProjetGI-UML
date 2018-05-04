/*************************************************************************
                           Resultat  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Resultat> (fichier Resultat.h) ----------------
#if ! defined ( Resultat_H )
#define Resultat_H

//--------------------------------------------------- Interfaces utilisées
using namespace std;
#include <iostream>
#include <string>
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Resultat>
//
//
//------------------------------------------------------------------------

class Resultat
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

//-------------------------------------------- Constructeurs - destructeur
    Resultat ( const Resultat & unResultat ){
        maladie = unResultat.maladie;
        probabilite = unResultat.probabilite;
    }
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Resultat ( ){
        maladie = "";
        probabilite = 0;
    }
    // Mode d'emploi :
    //
    // Contrat :
    //

    Resultat (string uneMaladie, double uneStat ){
        maladie = uneMaladie;
        probabilite = uneStat;
    }
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Resultat ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    void setMaladie(string uneMaladie){
        maladie = uneMaladie;
    }

    void setProbalite(double uneProbalite){
        probabilite = uneProbalite;
    }

    friend ostream & operator << (ostream & out, const Resultat & r);
    // Mode d'emploi :
    //   -
    // Contrat :
    //   -

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
    string maladie;
    double probabilite;
};

//-------------------------------- Autres définitions dépendantes de <Resultat>

inline ostream & operator << (ostream & out, const Resultat & r) {
    return out << r.maladie << ";" << r.probabilite << flush ;
}


#endif // Resultat_H

