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

//------------------------------------------------------------- Constantes
enum Type {LONG, BOOL, INT, DOUBLE, STRING };

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
	std::string getNom() const;
	/* Get du nom l'element Attribut */

	Type getType() const;
	/*Get type de l'element Attribut*/


	//------------------------------------------------- Surcharge d'operateurs

	friend std::ostream & operator << (std::ostream & out, const Attribut & a);
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


	virtual ~Attribut();
	// Mode d'emploi :
	//
	// Contrat :
	//

	//------------------------------------------------------------------ PRIVE

protected:
	//----------------------------------------------------- Methodes protegees

	//----------------------------------------------------- Attributs proteges
	std::string nom;
	Type type;
};

//-------------------------------- Autres definitions dependantes de <Attribut>

inline std::ostream & operator << (std::ostream & out, const Attribut & a) {
    out << "(" << a.getNom() << ";" << a.getType() << ")" << flush;
    return out;
}

#endif // ATTRIBUT_H


#pragma once
