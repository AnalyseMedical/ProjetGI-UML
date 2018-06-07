/*************************************************************************
                           Lecteur  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Lecteur> (fichier Lecteur.h) ----------------
#if ! defined ( Lecteur_H )
#define Lecteur_H

//--------------------------------------------------- Interfaces utilisées
using namespace std;
#include "Attribut.h"
#include <vector> 
#include <string.h>
#include <fstream>
#include <unordered_map>
#include <list>
#include "Empreinte.h"
#include "Resultat.h"
//#include "ResultatDetailles.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types
typedef unordered_map<string,list<Empreinte>> donnees;

//------------------------------------------------------------------------
// Rôle de la classe <Lecteur>
//
//
//------------------------------------------------------------------------

class Lecteur
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    int chargerMetaDonnee(string lecStr);
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //
    void displayData();
    donnees getData() const{
        return data;
    }

    void displayAttributs() const;

    void displayList(list<Empreinte> l) const;
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //
    void chargerDonnees(string lecStr, bool aAnalyser);
    
    void calculMoyenne();
    
    void displayEmpreinte();
    
    vector<pair<Empreinte,Resultat>> diagnostic(string nomFichierEmpreinte);
    Resultat chercherMaladie(Empreinte e);
    
    double testMaladie(Empreinte temoin,Empreinte e);


//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    Lecteur ( const Lecteur & unLecteur );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Lecteur ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Lecteur ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
    vector<Attribut> attributs;
    donnees data;
    vector<Empreinte> emp_aAnalyser;
    vector<Empreinte> moyenne;
};

//-------------------------------- Autres définitions dépendantes de <Lecteur>

#endif // Lecteur_H

