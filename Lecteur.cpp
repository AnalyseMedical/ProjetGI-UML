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
#include <sstream>

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
void Lecteur::chargerDonnees(string lectStr)
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
            string value = "";
            string maladie="";
            string tmp ="";
            getline(fichierA,line);
            istringstream iss2(line);
            Empreinte e;
            while(!iss2.eof() && j < (donnee.size()-1))
            {
                getline(iss2,value,POINTVIRGULE);
                Attribut a = Attribut(donnee[j],Attributs[j].getType(),value);
                j++;
                e.getValeur().push_back(a);
            }
            getline(iss2,maladie,SAUTDELIGNE);
            e.setMaladie(maladie);
            getline(iss2,tmp);
            
            if(data.find(e.getMaladie()) == data.end())
            {
                list<Empreinte> listeE;
                listeE.push_back(e);
                data.insert(pair<string,list<Empreinte>>(e.getMaladie(),listeE));
            } else
            {
                data.find(e.getMaladie())->second.push_back(e);
            }
        }
        //return donnee;
    } else {
        cout << " pas de fichier " << endl;
        //return vector<string>();
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
