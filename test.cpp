using namespace std;
#include <string>
#include "Resultat.h"
#include <iostream>
#include <list>
#include "Lecteur.h"

int main(){

    Lecteur l;
    l.chargerMetaDonnee("HealthMeasurementDescription.txt");
    l.chargerDonnees("HealthMeasurementsWithLabels.txt");
    list<Attribut> la;
    Attribut a = Attribut("A1",BOOL);
    Attribut a2 = Attribut("A2",STRING);
    Attribut a3 = Attribut("A3",STRING);
    la.push_back(a);
    la.push_back(a2);
    la.push_back(a3);
    Empreinte e = Empreinte(la,"saucisse");
    /*list<Attribut> la2 = e.getValeur();
    for(list<Attribut>::iterator i = la2.begin(); i != la2.end();++i){
        cout << *i << ";" << flush;
    }*/
    l.displayData();
    return 0;
}