#include "avganalyzer.h"
#include <iostream>
using namespace std;

AvgAnalyzer::AvgAnalyzer(DataGate *dG):Analyzer(dG)
{
    cout << "-- Konstruktor AvgAnalyzer --" << endl;
}

AvgAnalyzer::~AvgAnalyzer()
{
    cout << "-- Destruktor AvgAnalyzer --" << endl;
}




string AvgAnalyzer::getSensorType()
{
    return dG->getSensorType();
}

int AvgAnalyzer::dataSize()
{
    return 1;
}



void AvgAnalyzer::fetchData(double a[])
{
    //Hole die Messdaten
    dG->fetchData(a);
    //Berechne Mittelwert
    double avg = 0;
    for(int i = 0; i<dG->dataSize(); i++)
        avg = avg + a[i];
    a[0] = avg/dG->dataSize();
}

