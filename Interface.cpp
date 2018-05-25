/*************************************************************************
                           Interface  -  description
                             -------------------
    début                : 25/05/2018
    copyright            : (C) 2018 par clagadec
*************************************************************************/

//---------- Réalisation de la classe <Interface> (fichier Interface.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Interface.h"
#include <list>

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
void Interface::afficherOperation(){
	// Algorithme :
	
	int operation = -1;
	std::string nomFichierDonnees;
	std::string nomFichierMeta;
	
	while (operation!=0) {
		cout << "Veuillez choisir l'opération à effectuer : " << endl;
		cout << "1 : Demander un diagnostic " << endl;
		cout << "2 : Afficher les maladies connues " << endl;
		cout << "0 : Exit " << endl;
		
		cin >> operation;
		
		switch (operation) {
			case 1 :
				cout << "Entrer le nom d'un fichier de métadonnées : " << endl;
				cin >> nomFichierMeta;
				cout << "Entrer le nom d'un fichier de données empreintes : " << endl;
				cin >> nomFichierDonnees;
				this->demandeDiagnostic(nomFichierDonnees, nomFichierMeta);
				break;
			case 2 :
				this->afficherMaladie();
				break;
			case 0 :
				break;
		}
	}
				
			
} //----- Fin de afficherOperation


void Interface::afficherMaladie(){
	// Algorithme :
	
    list<string> maladie = exe.getMaladie();
    for(list<string>::iterator i = maladie.begin(); i != maladie.end();++i){
        cout << *i << endl;
    }
} //----- Fin de afficherMaladie


void Interface::demandeDiagnostic(string nomFichierDonnees, string nomFichierMeta){
	// Algorithme :
	
    map<Empreinte,Resultat> resultat = exe.diagnostic(nomFichierDonnees, nomFichierMeta);
    for(map<Empreinte,Resultat>::iterator i = resultat.begin(); i != resultat.end();++i){
        cout << i->first << ";" << i->second << endl;
    }
} //----- Fin de demandeDiagnostic


//------------------------------------------------- Surcharge d'opérateurs
/*Interface & Interface::operator = ( const Interface & unInterface )
// Algorithme :
//
{
} //----- Fin de operator =*/


//-------------------------------------------- Constructeurs - destructeur
/*Interface::Interface ( const Interface & unInterface )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Interface>" << endl;
#endif
} //----- Fin de Interface (constructeur de copie)*/


Interface::Interface ( )
// Algorithme :
//
{

#ifdef MAP
    cout << "Appel au constructeur de <Interface>" << endl;
#endif
} //----- Fin de Interface


Interface::~Interface ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Interface>" << endl;
#endif
} //----- Fin de ~Interface


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
