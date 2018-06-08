#include <iostream>
#include "Lecteur.h"
#include "Interface.h"

//Lecture fichier métadonnées

int TU01 () {
    cout << "Test01 : Lecture d'un fichier fonctionnel" << endl;
    Lecteur lecteur = Lecteur ();
    return lecteur.chargerMetaDonnee("Test01.txt");
}

int TU02 () {
    cout << "Test02 : Lecture d'un fichier corrompu" << endl;
    Lecteur lecteur = Lecteur ();
    return lecteur.chargerMetaDonnee("Test02.txt");
}

int TU03 () {
    cout << "Test03 : Lecture d'un fichier vide" << endl;
    Lecteur lecteur = Lecteur ();
    return lecteur.chargerMetaDonnee("Test03.txt");
}

int TU04 () {
    cout << "Test04 : Aucun fichier correspondant" << endl;
    Lecteur lecteur = Lecteur ();
    return lecteur.chargerMetaDonnee("Test04.txt");
}

//Lecture fichier données empreintes

int TU11 () {
    cout << "Test11: Lecture d'un fichier fonctionnel" << endl;
    Lecteur lecteur = Lecteur ();
    lecteur.chargerMetaDonnee("HealthMeasurementDescription.txt");
    lecteur.chargerDonnees("HealthMeasurementsWithLabels.txt", false);
    return lecteur.chargerDonnees("Test11.txt", true);
}

int TU12 () {
    cout << "Test12: Lecture d'un fichier corrompu" << endl;
    Lecteur lecteur = Lecteur ();
    lecteur.chargerMetaDonnee("HealthMeasurementDescription.txt");
    lecteur.chargerDonnees("HealthMeasurementsWithLabels.txt", false);
    return lecteur.chargerDonnees("Test12.txt", true);
}

int TU13 () {
    cout << "Test13: Lecture d'un fichier vide" << endl;
    Lecteur lecteur = Lecteur ();
    lecteur.chargerMetaDonnee("HealthMeasurementDescription.txt");
    lecteur.chargerDonnees("HealthMeasurementsWithLabels.txt", false);
    return lecteur.chargerDonnees("Test13.txt", true);
}

int TU14() {
    cout << "Test14: Lecture d'un fichier empreinte sans chargement du fichier maladies" << endl;
    Lecteur lecteur = Lecteur ();
    lecteur.chargerMetaDonnee("HealthMeasurementDescription.txt");
    return lecteur.chargerDonnees("Test14.txt", true);
}

int TU15 () {
    cout << "Test15: Aucun fichier correspondant" << endl;
    Lecteur lecteur = Lecteur ();
    lecteur.chargerMetaDonnee("HealthMeasurementDescription.txt");
    lecteur.chargerDonnees("HealthMeasurementsWithLabels.txt", false);
    return lecteur.chargerDonnees("Test15.txt", true);
}

//Lecture fichier données maladies

int TU21 () {
    cout << "Test21: Lecture d'un fichier fonctionnel" << endl;
    Lecteur lecteur = Lecteur ();
    lecteur.chargerMetaDonnee("HealthMeasurementDescription.txt");
    return lecteur.chargerDonnees("Test21.txt", false);
}

int TU22 () {
    cout << "Test22: Lecture d'un fichier incomplet" << endl;
    Lecteur lecteur = Lecteur ();
    lecteur.chargerMetaDonnee("HealthMeasurementDescription.txt");
    return lecteur.chargerDonnees("Test22.txt", false);
}

int TU23 () {
    cout << "Test23: Lecture d'un fichier qui n'existe pas" << endl;
    Lecteur lecteur = Lecteur ();
    lecteur.chargerMetaDonnee("HealthMeasurementDescription.txt");
    return lecteur.chargerDonnees("Test23.txt", false);
}

int TU24 () {
    cout << "Test24: Lecture d'un fichier vide" << endl;
    Lecteur lecteur = Lecteur ();
    lecteur.chargerMetaDonnee("HealthMeasurementDescription.txt");
    return lecteur.chargerDonnees("Test24.txt", false);
}

int TU25 () {
    cout << "Test25: Lecture d'un fichier outrageusement volumineux" << endl;
    Lecteur lecteur = Lecteur ();
    lecteur.chargerMetaDonnee("HealthMeasurementDescription.txt");
    return lecteur.chargerDonnees("Test25.txt", false);
}

//Affichage attributs liés à la maladie

int TU31 () {
    cout << "Test31: Demander un affichage lorsqu'aucune donnée n'est chargée" << endl;
    Lecteur lecteur = Lecteur ();
    lecteur.chargerMetaDonnee("HealthMeasurementDescription.txt");
    return lecteur.displayAttributs();
}

int TU32 () {
    cout << "Test32: Demander un affichage lorsqu'un fichier est chargé" << endl;
    Lecteur lecteur = Lecteur ();
    lecteur.chargerMetaDonnee("HealthMeasurementDescription.txt");
    lecteur.chargerDonnees("HealthMeasurementsWithLabels.txt", false);
    return lecteur.displayAttributs();
}

//Production fichier résultat

int TU41() {
    cout << "Test41:Lancer la production d'un fichier résultat lorsqu'aucune donnée n'a été chargée" << endl;
    Lecteur lecteur = Lecteur();
    lecteur.diagnostic("Test41.txt");
    return 5;
}

int TU42() {
    cout << "Test42:Production d'un fichier résultat après chargement d'une empreinte conforme mais sans fichier maladie" << endl;
    Lecteur lecteur = Lecteur();
    lecteur.chargerMetaDonnee("HealthMeasurementDescription.txt");
    lecteur.diagnostic("Test42.txt");
    return 0;
}

int TU43() {
    cout << "Test43: Production d'un fichier résultat après chargement d'un fichier  maladie conforme mais sans fichier d'empreinte" << endl;
    Lecteur lecteur = Lecteur();
    lecteur.chargerMetaDonnee("HealthMeasurementDescription.txt");
    lecteur.chargerDonnees("HealthMeasurementsWithLabels.txt", false);
    lecteur.diagnostic("Test43.txt");
    return 0;
}

int TU44() {
    cout << "Test44: Production d'un fichier résultat après chargement d'un fichier maladie et d'un fichier d'empreinte conforme" << endl;
    Lecteur lecteur = Lecteur();
    lecteur.chargerMetaDonnee("HealthMeasurementDescription.txt");
    lecteur.chargerDonnees("HealthMeasurementsWithLabels.txt", false);
    lecteur.diagnostic("Test44.txt");
    return 0;
}

int main () {
    cout << TU01() << endl;
    cout << TU02() << endl;
    cout << TU03() << endl;
    cout << TU04() << endl;

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
    cout << TU32() << endl;

    cout << TU41() << endl;
    cout << TU42() << endl;
    cout << TU43() << endl;
    cout << TU44() << endl;
    //cout << TU45() << endl;
    return 0;
}
