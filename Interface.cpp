/*************************************************************************
                           Interface  -  description
                             -------------------
    début                : 25/05/2018
    copyright            : (C) 2018 par clagadec
*************************************************************************/

//---------- Réalisation de la classe <Interface> (fichier Interface.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "Interface.h"
#include "Lecteur.h"
#include <vector>
#include <unordered_map>


//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC
std::string nomFichierDonnees;
std::string nomFichierMeta;
std::string nomFichierEmpreinte;

//----------------------------------------------------- Méthodes publiques
int main(void)
{
    Interface i;
    cout << "Entrer le nom d'un fichier de métadonnées : " << endl;
    nomFichierMeta = "HealthMeasurementDescription.txt";
    Lecteur l;
    l.chargerMetaDonnee("HealthMeasurementDescription.txt");
    cout << "Entrer le nom d'un fichier de données empreintes : " << endl;
    nomFichierDonnees = "HealthMeasurementsWithLabels.txt";
    l.chargerDonnees("HealthMeasurementsWithLabels.txt",false);
    i.afficherOperation(l);
    return 0;
}

void Interface::afficherOperation(Lecteur &l){
	// Algorithme :

	int operation = -1;

	while (operation!=0) {
		cout << "Veuillez choisir l'opération à effectuer : " << endl;
		cout << "1 : Demander un diagnostic " << endl;
		cout << "2 : Afficher les maladies connues " << endl;
		cout << "0 : Exit " << endl;

		cin >> operation;

		switch (operation) {
			case 1 :
                cout << "Entrer le nom d'un fichier de données empreintes : " << endl;
                cin >> nomFichierEmpreinte;
				this->demandeDiagnostic(nomFichierEmpreinte,l);
				break;
			case 2 :
				this->afficherMaladie(l);
				break;
			case 0 :
				break;
            default :
                break;
		}
	}

} //----- Fin de afficherOperation

void Interface::afficherMaladie(Lecteur &l){
	// Algorithme :
    vector<string> maladie = exe.getMaladie(l);
    int nbMaladie = maladie.size();
    for(int i = 0; i < nbMaladie ;++i){
        cout << maladie[i] << endl;
    }
} //----- Fin de afficherMaladie


void Interface::demandeDiagnostic(string nomFichierEmpreinte,Lecteur &l){
	// Algorithme :
    vector<pair<Empreinte, Resultat>> resultat = l.diagnostic(nomFichierEmpreinte);
    ofstream sortie("resultat.txt");
    int size = resultat.size();
    for(int i = 0; i < size; ++i){
        sortie << resultat[i].first << resultat[i].second << endl;
    }
} //----- Fin de demandeDiagnostic


//------------------------------------------------- Surcharge d'opérateurs
/*Interface & Interface::operator = ( const Interface & unInterface )
// Algorithme :
//
{
} //----- Fin de operator =*/


//-------------------------------------------- Constructeurs - destructeur
Interface::Interface ( const Interface & unInterface )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Interface>" << endl;
#endif
} //----- Fin de Interface (constructeur de copie)


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
