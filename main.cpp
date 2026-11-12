#include <iostream>
#include "datagate.h"
#include "feuchtesensor.h"
#include "temperatursensor.h"
#include "avganalyzer.h"
#include "maxanalyzer.h"
using namespace std;

int main()
{
    FeuchteSensor *f = new FeuchteSensor;;
    TemperaturSensor *t = new TemperaturSensor;

    //Umhüllung mit AvgAnalyzer
    Analyzer *af = new AvgAnalyzer(f);
    Analyzer *mt = new MaxAnalyzer(t);

    //Array zum Speichern der Messdaten
    double daten[100];

    //Hole den Analyzerwert des Sensors
    af->fetchData(daten);
    //Wert ausgeben
    cout << daten[0] << endl;

    //Hole den Analyzerwert des Sensors
    mt->fetchData(daten);
    //Wert ausgeben
    cout << daten[0] << endl;

    //Analyzer löschen
    delete af;
    delete mt;
    //Sensoren existieren noch
    cout << f->getSensorType() << endl;
    cout << t->getSensorType() << endl;

    //Sensoren löschen
    delete t;
    delete f;

    return 0;
}
