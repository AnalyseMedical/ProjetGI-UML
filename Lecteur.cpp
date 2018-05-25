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
    if(fichier){

        while(!fichier.eof()){
        getline(fichier,key,POINTVIRGULE);
        getline(fichier,value,SAUTDELIGNE);
        Type t = StringToType(value);
        Attribut attribut = Attribut(key,t);
        Attributs.push_back(attribut);
        getline(fichier,value);

    }

    }
}

//lit le fichier de donn�e :
void Lecteur::lireFichierDonnee(string lectStr)
{
    ifstream fichierA;
    fichierA.open(lectStr);
    if(fichierA){
        string firstLine = "";
        getline(fichierA,firstLine);
        istringstream iss(firstLine);
        vector<string> donnee;
        string tmp = "";
        while(!iss.eof())
        {
            getline(iss,tmp,POINTVIRGULE);
            donnee.push_back(tmp);
        }
        
        //Code pour lire les empreintes :
        while(!fichierA.eof())
        {
            int j = 0;
            string line = "";
            string tmp = "";
            getline(fichierA,line);
            istringstream iss2(line);
            empreinte e;
            while(!iss2.eof() && j < (donnee.size()-1))
            {
                getline(iss2,tmp,POINTVIRGULE);
                Attribut a = Attributs[j];
                Attribut a = Attribut(tmp,Attributs->find(donnee[j])->second);
                j++;
                e.at.push_back(a);
            }
            getline(iss2,tmp,SAUTDELIGNE);
            e.maladie = tmp;
            getline(iss2,tmp);
            
            if(maMapEmpreinte->find(e.maladie) == maMapEmpreinte->end())
            {
                list<empreinte> listeE;
                listeE.push_back(e);
                maMapEmpreinte->insert(pair<string,list<empreinte>>(e.maladie,listeE));
            } else
            {
                maMapEmpreinte->find(e.maladie)->second.push_back(e);
            }
        }
        return donnee;
    } else {
        cout << " pas de fichier " << endl;
        return vector<string>();
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
