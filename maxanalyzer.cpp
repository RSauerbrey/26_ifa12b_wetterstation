#include "maxanalyzer.h"
#include <iostream>
using namespace std;

MaxAnalyzer::MaxAnalyzer(DataGate* dG):Analyzer(dG)
{
    cout << "-- Konstruktor MaxAnalyzer --" << endl;
}

MaxAnalyzer::~MaxAnalyzer()
{
    cout << "-- Destruktor MaxAnalyzer ---" << endl;
}


string MaxAnalyzer::getSensorType()
{
    return dG->getSensorType();
}



int MaxAnalyzer::dataSize()
{
    return 1;
}



void MaxAnalyzer::fetchData(double a[])
{
    //Hole Messdaten vom Sensor
    dG->fetchData(a);
    //Bestimme Maximum
    for(int i=1; i<dG->dataSize(); i++)
        if(a[i]>a[0])
            a[0]=a[i];
}

