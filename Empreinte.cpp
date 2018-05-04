/*************************************************************************
Empreinte  -  description
-------------------
début                : $DATE$
copyright            : (C) $YEAR$ par $AUTHOR$
e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Empreinte> (fichier Empreinte.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Empreinte.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Empreinte::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- Constructeurs - destructeur
Empreinte::Empreinte(const Empreinte & unEmpreinte)
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de copie de <Empreinte>" << endl;
#endif
} //----- Fin de Empreinte (constructeur de copie)


Empreinte::Empreinte(list<Attribut> val)
// Algorithme :
//
{
	this.valeur = val;
#ifdef MAP
	cout << "Appel au constructeur de <Empreinte>" << endl;
#endif
} //----- Fin de Empreinte


Empreinte::~Empreinte()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au destructeur de <Empreinte>" << endl;
#endif
} //----- Fin de ~Empreinte


  //------------------------------------------------------------------ PRIVE

  //----------------------------------------------------- Méthodes protégées

