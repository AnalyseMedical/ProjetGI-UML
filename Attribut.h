/*************************************************************************
Attribut  -  description
-------------------
debut                : $DATE$
copyright            : (C) $YEAR$ par $AUTHOR$
e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Attribut> (fichier Attribut.h) ----------------
#if ! defined ( ATTRIBUT_H )
#define ATTRIBUT_H

//--------------------------------------------------- Interfaces utilisees
using namespace std;
#include <string>
#include <iostream>

//------------------------------------------------------------- Constantes
enum Type {LONG, BOOL, INT, DOUBLE, STRING};

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Role de la classe <Attribut>
//
//
//------------------------------------------------------------------------

class Attribut
{
	//----------------------------------------------------------------- PUBLIC

public:
	//----------------------------------------------------- Methodes publiques
	string getNom() const;
	/* Get du nom l'element Attribut */

	Type getType() const;
	/*Get type de l'element Attribut*/

	string getValeur() const{
		return valeur;
	}

    void setNom(const string unNom) {
        nom = unNom;
    }
    
    void setType(Type unType) {
        type = unType;
    }
    
	void setValeur(string uneValeur){
		valeur = uneValeur;
	}

	//------------------------------------------------- Surcharge d'operateurs

	friend ostream & operator << (ostream & out, const Attribut & a);
    // Mode d'emploi :
    //   -
    // Contrat :
    //   -

	//-------------------------------------------- Constructeurs - destructeur
	Attribut(const Attribut & unAttribut);
	// Mode d'emploi (constructeur de copie) :
	//
	// Contrat :
	//

	Attribut();
	// Mode d'emploi :
	//
	// Contrat :
	//

	Attribut(string UnNom,Type UnType);
	// Mode d'emploi :
	//
	// Contrat :
	//

	Attribut(string UnNom,Type UnType, string uneValueur);
	// Mode d'emploi :
	//
	// Contrat :
	//


	virtual ~Attribut();
	// Mode d'emploi :
	//
	// Contrat :
	//

	//------------------------------------------------------------------ PRIVE

protected:
	//----------------------------------------------------- Methodes protegees

	//----------------------------------------------------- Attributs proteges
	string nom;
	Type type;
	string valeur;
};

//-------------------------------- Autres definitions dependantes de <Attribut>

inline std::ostream & operator << (std::ostream & out, const Attribut & a) {
    out << "(" << a.getNom() << ";" << a.getType() << "; valeur : " << a.getValeur() << ")" << flush;
    return out;
}

#endif // ATTRIBUT_H


#pragma once
