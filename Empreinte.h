/*************************************************************************
Empreinte  -  description
-------------------
debut                : $DATE$
copyright            : (C) $YEAR$ par $AUTHOR$
e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Empreinte> (fichier Empreinte.h) ----------------
#if ! defined ( EMPREINTE_H )
#define EMPREINTE_H

//--------------------------------------------------- Interfaces utilisees
#include "Attribut.h"
#include <list>

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rele de la classe <Empreinte>
//
//
//------------------------------------------------------------------------

class Empreinte
{
	//----------------------------------------------------------------- PUBLIC

public:
	//----------------------------------------------------- Methodes publiques
	// type Methode ( liste des parametres );
	// Mode d'emploi :
	//
	// Contrat :
	//
	list<Attribut> getValeur() const;
	string getMaladie() const;
	void setMaladie(string uneMaladie);
	void setValeur(list<Attribut> uneListe);

	//------------------------------------------------- Surcharge d'operateurs

	friend std::ostream & operator << (std::ostream & out, const Empreinte & e);
    // Mode d'emploi :
    //   -
    // Contrat :
    //   -

	//-------------------------------------------- Constructeurs - destructeur

	Empreinte(const Empreinte & unEmpreinte);
	// Mode d'emploi (constructeur de copie) :
	//
	// Contrat :
	//

	Empreinte(list<Attribut> val, string UneMaladie );

	Empreinte();
	// Mode d'emploi :
	//
	// Contrat :
	//

	virtual ~Empreinte();
	// Mode d'emploi :
	//
	// Contrat :
	//

	//------------------------------------------------------------------ PRIVE

protected:
	//----------------------------------------------------- Methodes protegees

	//----------------------------------------------------- Attributs proteges
	list<Attribut> valeur;
	string maladie;
};

//-------------------------------- Autres definitions dependantes de <Empreinte>

inline std::ostream & operator << (std::ostream & out, const Empreinte & e) {
	list<Attribut> la = e.getValeur();
    for(list<Attribut>::iterator i = la.begin(); i != la.end();++i){
        out << *i << ";" << flush;
    }
	out << e.getMaladie() << endl;
	return out;
}

#endif // EMPREINTE_H


#pragma once
