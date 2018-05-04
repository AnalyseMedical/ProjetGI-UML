/*************************************************************************
Attribut  -  description
-------------------
début                : $DATE$
copyright            : (C) $YEAR$ par $AUTHOR$
e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Attribut> (fichier Attribut.h) ----------------
#if ! defined ( ATTRIBUT_H )
#define ATTRIBUT_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Attribut>
//
//
//------------------------------------------------------------------------

class Attribut
{
	//----------------------------------------------------------------- PUBLIC

public:
	//----------------------------------------------------- Méthodes publiques
	string getNom();
	/* Get du nom l'élément Attribut */

	Type getType();
	/*Get type de l'élément Attribut*/


	//------------------------------------------------- Surcharge d'opérateurs
	

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
	//----------------------------------------------------- Méthodes protégées

	//----------------------------------------------------- Attributs protégés
	string nom;
	Type type;
};

//-------------------------------- Autres définitions dépendantes de <Attribut>

#endif // ATTRIBUT_H


#pragma once
