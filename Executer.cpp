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
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "Executer.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
    vector<string> Executer::getMaladie(Lecteur &l) const {
		vector<string> result;
        donnees tmp = l.getData();
        donnees::iterator it;
        for(it = tmp.begin(); it != tmp.end(); it++)
        {
            if(it->first != "")
                result.push_back(it->first);
        }
		return result;
    }
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    map<Empreinte,Resultat> Executer::diagnostic(string nomFichier, string nomFichierMeta){
		cout << "diagnostic" << endl;
		map<Empreinte,Resultat> diagn;
		return diagn;
    }
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    vector<Resultat> Executer::diagnostic(Empreinte e){
		cout << "diagnostic" << endl;
		vector<Resultat> diagn;
		return diagn;
    }
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

   /* bool Executer::chargerDonnee(string nomFichier){
		cout << "chargerDonnee" << endl;
        l.chargerDonnees(nomFichier,false);
		return true;
    }
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    bool Executer::chargerMetaDonnee(string nomFichier){
		cout << "chargerMetaDonnee" << endl;
        l.chargerMetaDonnee(nomFichier);
        //l.displayAttributs();
		return true;
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
