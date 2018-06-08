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
    // Creation inteface
    Interface i;
    bool quitter = false;
    string quitInterface = "";
    while(quitter == false){
        cout << " appuyez sur c pour continuer, q pour quitter " << endl;
        cin >> quitInterface;
        //condition pour savoir si l'on quitte l'application
        if(quitInterface.compare("q") == 0)
            return 0;
        //Lecteur pour lire les fichiers
        Lecteur l;
        cout << "Entrer le nom d'un fichier de métadonnées : " << endl;
        cin >> nomFichierMeta;
        // fichier de méta donnée
        int testChargementMd = l.chargerMetaDonnee(nomFichierMeta);
        // si la lecture à échoué
        if(testChargementMd != 0)
            continue;
        cout << "Entrer le nom d'un fichier de données empreintes : " << endl;
        cin >> nomFichierDonnees;
        //std::chrono::time_point<std::chrono::system_clock> start, end;
        //start = std::chrono::system_clock::now();
        int testChargementDonnee = l.chargerDonnees(nomFichierDonnees,false);
        //end = std::chrono::system_clock::now();
        //int elapsed_seconds = std::chrono::duration_cast<std::chrono::seconds>(end-start).count();
        //cout << " le temps :  " <<elapsed_seconds << endl;
        if(testChargementDonnee != 0)
            continue;
        i.afficherOperation(l);
    }
    return 0;
}

void Interface::afficherOperation(Lecteur &l){
	// Algorithme :

	int operation = -1;

	while (operation!=0) {
        // opération réalisable par l'interface.
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
	// affiche les maladies prises en compte par l'application
    vector<string> maladie = l.getMaladie();
    int nbMaladie = maladie.size();
    for(int i = 0; i < nbMaladie ;++i){
        cout << maladie[i] << endl;
    }
} //----- Fin de afficherMaladie


void Interface::demandeDiagnostic(string nomFichierEmpreinte,Lecteur &l){
	// recupere l'analyse des empreintes
    vector<pair<Empreinte, Resultat>> resultat = l.diagnostic(nomFichierEmpreinte);
    // on verifie que la taille des données n'est pas vide
    int size = resultat.size();
    if(size == 0)
        return;
    // on envoie la sortie sur un nouveau fichier
    cout << " entrer le nom du fichier de sortie : " << endl;
    string fichierSortie = "";
    cin >> fichierSortie;
    ofstream sortie(fichierSortie);
    for(int i = 0; i < size; ++i){
        if(resultat[i].second.getMaladie() != "")
            sortie << resultat[i].first << resultat[i].second << "%" << endl;
        else
            sortie << resultat[i].first << endl;
    }
    cout << "Fichier résultat créé" << endl;
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
