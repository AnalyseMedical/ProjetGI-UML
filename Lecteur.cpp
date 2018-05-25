/*************************************************************************
                           Lecteur  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Lecteur> (fichier Lecteur.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Lecteur.h"

//------------------------------------------------------------- Constantes
const char POINTVIRGULE = ';';
const char SAUTDELIGNE = '\r';

//----------------------------------------------------------------- PUBLIC
static Type StringToType(string s); 

//----------------------------------------------------- Méthodes publiques
void Lecteur::chargerMetaDonnee(string lectStr)
{
    ifstream fichier;
    fichier.open(lectStr);
    string key = "";
    string value = "";

    while(!fichier.eof()){
        getline(fichier,key,POINTVIRGULE);
        getline(fichier,value,SAUTDELIGNE);
        Type t = StringToType(value);
        Attribut attribut = Attribut(key,t);
        Attributs.push_back(attribut);
        getline(fichier,value);
    }
}
// type Lecteur::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

void Lecteur::display()
{
    for(int i =0;i<Attributs.size();i++)
    {
        cout << Attributs[i] << endl;
    }
}




//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
Lecteur::Lecteur ( const Lecteur & unLecteur )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Lecteur>" << endl;
#endif
} //----- Fin de Lecteur (constructeur de copie)


Lecteur::Lecteur ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Lecteur>" << endl;
#endif
} //----- Fin de Lecteur


Lecteur::~Lecteur ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Lecteur>" << endl;
#endif
} //----- Fin de ~Lecteur


//------------------------------------------------------------------ PRIVE

static Type StringToType(string s){
    Type t;
    if(s=="string"){
        return t = STRING;
    } else if(s=="double"){
        return t = DOUBLE;
    }
}

//----------------------------------------------------- Méthodes protégées
