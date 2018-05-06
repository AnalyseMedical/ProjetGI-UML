/*************************************************************************
Attribut  -  description
-------------------
d�but                : $DATE$
copyright            : (C) $YEAR$ par $AUTHOR$
e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Attribut> (fichier Attribut.h) ----------------
#if ! defined ( ATTRIBUT_H )
#define ATTRIBUT_H

//--------------------------------------------------- Interfaces utilis�es

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// R�le de la classe <Attribut>
//
//
//------------------------------------------------------------------------

class Attribut
{
	//----------------------------------------------------------------- PUBLIC

public:
	//----------------------------------------------------- M�thodes publiques
	string getNom();
	/* Get du nom l'�l�ment Attribut */

	Type getType();
	/*Get type de l'�l�ment Attribut*/


	//------------------------------------------------- Surcharge d'op�rateurs

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

	virtual ~Attribut();
	// Mode d'emploi :
	//
	// Contrat :
	//

	//------------------------------------------------------------------ PRIVE

protected:
	//----------------------------------------------------- M�thodes prot�g�es

	//----------------------------------------------------- Attributs prot�g�s
	string nom;
	Type type;
};

enum Type {LONG, BOOL, INT, DOUBLE, STRING };
//-------------------------------- Autres d�finitions d�pendantes de <Attribut>

inline ostream & operator << (ostream & out, const Attribut & a) {
    cout << "(" << a.getNom << ";" << a.getType << ")" << flush;
}

#endif // ATTRIBUT_H


#pragma once
