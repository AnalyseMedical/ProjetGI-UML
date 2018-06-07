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
    vector<Attribut> getAttributs ( ){
        return Attributs;
    }
    // Mode d'emploi :
    //
    // Contrat :
    //
//------------------------------------------------- Surcharge d'opérateurs
    friend ostream & operator << (ostream & out, const ResultatDetailles & r);
    // Mode d'emploi :
    //   -
    // Contrat :
    // 
//-------------------------------------------- Constructeurs - destructeur
    ResultatDetailles ( const ResultatDetailles & unResultatDetailles );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    ResultatDetailles ( ){
        maladie = "";
        probabilite = 0;
    }
    // Mode d'emploi :
    //
    // Contrat :
    //
    ResultatDetailles(string uneMaladie, double uneStat, vector<Attribut> unVecteur){
        maladie = uneMaladie;
        probabilite = uneStat;
        Attributs = unVecteur;
    }

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
static string afficherVector(vector<Attribut> v){
    string res = "";
    for(int unsigned i=0;i<v.size();i++){
        res = res + ";" + "(" + v[i].getNom() + ")";
    }
    return res;
}

inline ostream & operator << (ostream & out, const ResultatDetailles & r) {
    string attributs = afficherVector(r.Attributs);
    return out << r.maladie << ";" << r.probabilite <<";" << attributs << flush ;
}



#endif // ResultatDetailles_H

