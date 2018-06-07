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
    Lecteur lecteur = Lecteur ();
    return lecteur.chargerDonnees("Test11.txt", true);
}

int TU12 () {
    cout << "Test12: Lecture d'un fichier incomplet" << endl;
    Lecteur lecteur = Lecteur ();
    return lecteur.chargerDonnees("Test12.txt", true);
}

int TU13 () {
    cout << "Test13: Lecture d'un fichier avec des informations non conformes" << endl;
    Lecteur lecteur = Lecteur ();
    return lecteur.chargerDonnees("Test13.txt", true);
}

int TU14 () {
    cout << "Test14: Lecture d'un fichier vide" << endl;
    Lecteur lecteur = Lecteur ();
    return lecteur.chargerDonnees("Test14.txt", true);
}

int TU15 () {
    cout << "Test15: Lecture d'un fichier outrageusement volumineux" << endl;
    Lecteur lecteur = Lecteur ();
    return lecteur.chargerDonnees("Test15.txt", true);
}

//Lecture fichier données maladies

int TU21 () {
    cout << "Test21: Lecture d'un fichier fonctionnel" << endl;
    Lecteur lecteur = Lecteur ();
    return lecteur.chargerDonnees("Test21.txt", false);
}

int TU22 () {
    cout << "Test22: Lecture d'un fichier incomplet" << endl;
    Lecteur lecteur = Lecteur ();
    return lecteur.chargerDonnees("Test22.txt", false);
}

int TU23 () {
    cout << "Test23: Lecture d'un fichier avec des informations non conformes" << endl;
    Lecteur lecteur = Lecteur ();
    return lecteur.chargerDonnees("Test23.txt", false);
}

int TU24 () {
    cout << "Test24: Lecture d'un fichier vide" << endl;
    Lecteur lecteur = Lecteur ();
    return lecteur.chargerDonnees("Test24.txt", false);
}

int TU25 () {
    cout << "Test25: Lecture d'un fichier outrageusement volumineux" << endl;
    Lecteur lecteur = Lecteur ();
    return lecteur.chargerDonnees("Test25.txt", false);
}

//Affichage attributs liés à la maladie

int TU31 () {
    cout << "Test31: Demander un affichage lorsqu'aucune donnée n'est chargée" << endl;
    Lecteur lecteur = Lecteur ();
    return lecteur.displayAttributs();
}

int main () {
    cout << TU01() << endl;
    cout << TU02() << endl;
    cout << TU03() << endl;
    cout << TU04() << endl;
    cout << TU05() << endl;

    cout << TU11() << endl;
    cout << TU12() << endl;
    cout << TU13() << endl;
    cout << TU14() << endl;
    cout << TU15() << endl;

    cout << TU21() << endl;
    cout << TU22() << endl;
    cout << TU23() << endl;
    cout << TU24() << endl;
    cout << TU25() << endl;

    cout << TU31() << endl;
    return 0;
}