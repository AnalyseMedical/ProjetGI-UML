#include <iostream>
#include "Lecteur.h"

//Lecture fichier métadonnées

int TU01 () {
    cout << "Test01 : Lecture d'un fichier fonctionnel" << endl;
    Lecteur lecteur = Lecteur ();
    return lecteur.chargerMetaDonnee("Test01.txt");
}

int TU02 () {
    cout << "Test02 : Lecture d'un fichier incomplet" << endl;
    Lecteur lecteur = Lecteur ();
    return lecteur.chargerMetaDonnee("Test02.txt");
}

int TU03 () {
    cout << "Test03 : Lecture d'un fichier avec des informations non conformes" << endl;
    Lecteur lecteur = Lecteur ();
    return lecteur.chargerMetaDonnee("Test03.txt");
}

int TU04 () {
    cout << "Test04 : Lecture d'un fichier vide" << endl;
    Lecteur lecteur = Lecteur ();
    return lecteur.chargerMetaDonnee("Test04.txt");
}

int TU05 () {
    cout << "Test05 : Aucun fichier correspondant" << endl;
    Lecteur lecteur = Lecteur ();
    return lecteur.chargerMetaDonnee("Test05.txt");
}

//Lecture fichier données empreintes

int TU11 () {
    cout << "Test11: Lecture d'un fichier fonctionnel" << endl;
}

int main () {
    cout << TU01() << endl;
    cout << TU02() << endl;
    cout << TU03() << endl;
    cout << TU04() << endl;
    cout << TU05() << endl;
    return 0;
}