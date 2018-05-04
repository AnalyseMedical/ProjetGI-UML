/*************************************************************************
Attribut  -  description
-------------------
début                : $DATE$
copyright            : (C) $YEAR$ par $AUTHOR$
e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Attribut> (fichier Attribut.cpp) ----------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Attribut.h"

//------------------------------------------------------------- Constantes
enum Type = {long, bool; int; double; string };
//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques

string Attribut::getNom() {
	return this.nom;
} // ----- Fin de getNom

Type Attribut::getType() {
	return this.type;
} // ----- Fin de getType


//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur
Attribut::Attribut(const Attribut & unAttribut)
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de copie de <Attribut>" << endl;
#endif
} //----- Fin de Attribut (constructeur de copie)


Attribut::Attribut()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de <Attribut>" << endl;
#endif
} //----- Fin de Attribut


Attribut::~Attribut()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au destructeur de <Attribut>" << endl;
#endif
} //----- Fin de ~Attribut


  //------------------------------------------------------------------ PRIVE

  //----------------------------------------------------- Méthodes protégées

