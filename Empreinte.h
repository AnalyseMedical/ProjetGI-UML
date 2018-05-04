/*************************************************************************
Empreinte  -  description
-------------------
début                : $DATE$
copyright            : (C) $YEAR$ par $AUTHOR$
e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Empreinte> (fichier Empreinte.h) ----------------
#if ! defined ( EMPREINTE_H )
#define EMPREINTE_H

//--------------------------------------------------- Interfaces utilisées
#include "Attribut.h"
#include <list>

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Empreinte>
//
//
//------------------------------------------------------------------------

class Empreinte
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
	

	//-------------------------------------------- Constructeurs - destructeur
	Empreinte(const Empreinte & unEmpreinte);
	// Mode d'emploi (constructeur de copie) :
	//
	// Contrat :
	//

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
	//----------------------------------------------------- Méthodes protégées

	//----------------------------------------------------- Attributs protégés
	list<Attribut> valeur;
};

//-------------------------------- Autres définitions dépendantes de <Empreinte>

#endif // EMPREINTE_H


#pragma once
