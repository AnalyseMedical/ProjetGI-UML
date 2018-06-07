/*************************************************************************
Attribut  -  description
-------------------
debut                : $DATE$
copyright            : (C) $YEAR$ par $AUTHOR$
e-mail               : $EMAIL$
*************************************************************************/

//---------- Realisation de la classe <Attribut> (fichier Attribut.cpp) ----------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include systeme
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "Attribut.h"

//------------------------------------------------------------- Constantes
//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Methodes publiques

std::string Attribut::getNom() const {
	return nom;
} // ----- Fin de getNom

Type Attribut::getType() const {
	return type;
} // ----- Fin de getType


//------------------------------------------------- Surcharge d'operateurs



//-------------------------------------------- Constructeurs - destructeur
Attribut::Attribut(const Attribut & unAttribut)
// Algorithme :
//
{
	nom = unAttribut.getNom();
	type = unAttribut.getType();
    valeur = unAttribut.getValeur();
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

Attribut::Attribut(string UnNom,Type UnType){
	nom = UnNom;
	type = UnType;
	valeur = "";
}

Attribut::Attribut(string UnNom,Type UnType, string uneValeur){
	nom = UnNom;
	type = UnType;
	valeur = uneValeur;

}


Attribut::~Attribut()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au destructeur de <Attribut>" << endl;
#endif
} //----- Fin de ~Attribut


  //------------------------------------------------------------------ PRIVE

  //----------------------------------------------------- Methodes protegees

