#include <iostream>
#include "Lecteur.h"
#include "Interface.h"

//Lecture fichier métadonnées

int TU01 () {
    cout << endl;
    cout << ">>> Test01 : Lecture d'un fichier fonctionnel" << endl;
    Lecteur lecteur = Lecteur ();
    int code = lecteur.chargerMetaDonnee("Test01.txt");
    if (code == 0) {
        cout << ">>>>>>  Test validé : return code ";
    } else {
        cout << ">>>>>>  Test non validé : return code ";
    }
    return code;
}

int TU02 () {
    cout << endl;
    cout << ">>> Test02 : Lecture d'un fichier corrompu" << endl;
    Lecteur lecteur = Lecteur ();
    int code = lecteur.chargerMetaDonnee("Test02.txt");
    if (code == 1) {
        cout << ">>>>>>  Test validé : return code ";
    } else {
        cout << ">>>>>>  Test non validé : return code ";
    }
    return code;
}

int TU03 () {
    cout << endl;
    cout << ">>> Test03 : Lecture d'un fichier vide" << endl;
    Lecteur lecteur = Lecteur ();
    int code = lecteur.chargerMetaDonnee("Test03.txt");
    if (code == 2) {
        cout << ">>>>>>  Test validé : return code ";
    } else {
        cout << ">>>>>>  Test non validé : return code ";
    }
    return code;
}

int TU04 () {
    cout << endl;
    cout << ">>> Test04 : Aucun fichier correspondant" << endl;
    Lecteur lecteur = Lecteur ();
    int code = lecteur.chargerMetaDonnee("Test04.txt");
    if (code == -1) {
        cout << ">>>>>>  Test validé : return code ";
    } else {
        cout << ">>>>>>  Test non validé : return code ";
    }
    return code;
}

//Lecture fichier données empreintes

int TU11 () {
    cout << endl;
    cout << ">>> Test11: Lecture d'un fichier fonctionnel" << endl;
    Lecteur lecteur = Lecteur ();
    lecteur.chargerMetaDonnee("HealthMeasurementDescription.txt");
    lecteur.chargerDonnees("HealthMeasurementsWithLabels.txt", false);
    int code = lecteur.chargerDonnees("Test11.txt", true);
    if (code == 0) {
        cout << ">>>>>>  Test validé : return code ";
    } else {
        cout << ">>>>>>  Test non validé : return code ";
    }
    return code;
}

int TU12 () {
    cout << endl;
    cout << ">>> Test12: Lecture d'un fichier vide" << endl;
    Lecteur lecteur = Lecteur ();
    lecteur.chargerMetaDonnee("HealthMeasurementDescription.txt");
    lecteur.chargerDonnees("HealthMeasurementsWithLabels.txt", false);
    int code = lecteur.chargerDonnees("Test12.txt", true);
    if (code == 1) {
        cout << ">>>>>>  Test validé : return code ";
    } else {
        cout << ">>>>>>  Test non validé : return code ";
    }
    return code;
}

int TU13 () {
    cout << endl;
    cout << ">>> Test13: Aucun fichier correspondant" << endl;
    Lecteur lecteur = Lecteur ();
    lecteur.chargerMetaDonnee("HealthMeasurementDescription.txt");
    lecteur.chargerDonnees("HealthMeasurementsWithLabels.txt", false);
    int code = lecteur.chargerDonnees("Test13.txt", true);
    if (code == -1) {
        cout << ">>>>>>  Test validé : return code ";
    } else {
        cout << ">>>>>>  Test non validé : return code ";
    }
    return code;
}

//Lecture fichier données maladies

int TU21 () {
    cout << endl;
    cout << ">>> Test21: Lecture d'un fichier fonctionnel" << endl;
    Lecteur lecteur = Lecteur ();
    lecteur.chargerMetaDonnee("HealthMeasurementDescription.txt");
    int code = lecteur.chargerDonnees("Test21.txt", false);
    if (code == 0) {
        cout << ">>>>>>  Test validé : return code ";
    } else {
        cout << ">>>>>>  Test non validé : return code ";
    }
    return code;
}

int TU22 () {
    cout << endl;
    cout << ">>> Test22: Lecture d'un fichier incomplet" << endl;
    Lecteur lecteur = Lecteur ();
    lecteur.chargerMetaDonnee("HealthMeasurementDescription.txt");
    int code = lecteur.chargerDonnees("Test22.txt", false);
    if (code == 4) {
        cout << ">>>>>>  Test validé : return code ";
    } else {
        cout << ">>>>>>  Test non validé : return code ";
    }
    return code;
}

int TU23 () {
    cout << endl;
    cout << ">>> Test23: Lecture d'un fichier qui n'existe pas" << endl;
    Lecteur lecteur = Lecteur ();
    lecteur.chargerMetaDonnee("HealthMeasurementDescription.txt");
    int code = lecteur.chargerDonnees("Test23.txt", false);
    if (code == -1) {
        cout << ">>>>>>  Test validé : return code ";
    } else {
        cout << ">>>>>>  Test non validé : return code ";
    }
    return code;
}

int TU24 () {
    cout << endl;
    cout << ">>> Test24: Lecture d'un fichier vide" << endl;
    Lecteur lecteur = Lecteur ();
    lecteur.chargerMetaDonnee("HealthMeasurementDescription.txt");
    int code = lecteur.chargerDonnees("Test24.txt", false);
    if (code == 1) {
        cout << ">>>>>>  Test validé : return code ";
    } else {
        cout << ">>>>>>  Test non validé : return code ";
    }
    return code;
}

//Affichage attributs liés à la maladie

int TU31 () {
    cout << endl;
    cout << ">>> Test31: Demander un affichage lorsqu'aucune donnée n'est chargée" << endl;
    Lecteur lecteur = Lecteur ();
    //lecteur.chargerMetaDonnee("HealthMeasurementDescription.txt");
    int code = lecteur.displayAttributs();
    if (code == 5) {
        cout << ">>>>>>  Test validé : return code ";
    } else {
        cout << ">>>>>>  Test non validé : return code ";
    }
    return code;
}

int TU32 () {
    cout << endl;
    cout << ">>> Test32: Demander un affichage lorsqu'un fichier est chargé" << endl;
    Lecteur lecteur = Lecteur ();
    lecteur.chargerMetaDonnee("HealthMeasurementDescription.txt");
    //lecteur.chargerDonnees("HealthMeasurementsWithLabels.txt", false);
    int code = lecteur.displayAttributs();
    if (code == 0) {
        cout << ">>>>>>  Test validé : return code ";
    } else {
        cout << ">>>>>>  Test non validé : return code ";
    }
    return code;
}

//Production fichier résultat

int TU41() {
    cout << endl;
    cout << ">>> Test41:Lancer la production d'un fichier résultat lorsqu'aucune donnée n'a été chargée" << endl;
    Lecteur lecteur = Lecteur();
    lecteur.diagnostic("Test41.txt");
    return 5;
}

int TU42() {
    cout << endl;
    cout << ">>> Test42:Production d'un fichier résultat après chargement d'une empreinte conforme mais sans fichier maladie" << endl;
    Lecteur lecteur = Lecteur();
    lecteur.chargerMetaDonnee("HealthMeasurementDescription.txt");
    lecteur.chargerDonnees("HealthMeasurementsWithLabels.txt", true);
    lecteur.diagnostic("Test42.txt");
    return 0;
}

int TU43() {
    cout << endl;
    cout << ">>> Test43: Production d'un fichier résultat après chargement d'un fichier  maladie conforme mais sans fichier d'empreinte" << endl;
    Lecteur lecteur = Lecteur();
    lecteur.chargerMetaDonnee("HealthMeasurementDescription.txt");
    lecteur.chargerDonnees("HealthMeasurementsWithLabels.txt", false);
    lecteur.diagnostic("Test43.txt");
    return 0;
}

int TU44() {
    cout << endl;
    cout << ">>> Test44: Production d'un fichier résultat après chargement d'un fichier maladie et d'un fichier d'empreinte conforme" << endl;
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

    cout << TU21() << endl;
    cout << TU22() << endl;
    cout << TU23() << endl;
    cout << TU24() << endl;

    cout << TU31() << endl;
    cout << TU32() << endl;

    cout << TU41() << endl;
    cout << TU42() << endl;
    cout << TU43() << endl;
    cout << TU44() << endl;
    //cout << TU45() << endl;
    return 0;
}
