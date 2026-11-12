#include "feuchtesensor.h"
#include <iostream>
using namespace std;

FeuchteSensor::FeuchteSensor()
{
    //Messdaten-Array mit Zufallswerten befüllen
    srand(time(NULL));
    for(int i = 0; i < dataSize(); i++)
    {
        messdata[i] = rand()%101;
    }
    cout << "-- Konstruktor FeuchteSens --" << endl;
}

FeuchteSensor::~FeuchteSensor()
{
    cout << "-- Destruktor FeuchteSens ---" << endl;
}


string FeuchteSensor::getSensorType()
{
    return "Feuchte";
}

int FeuchteSensor::dataSize()
{
    return 5;
}

void FeuchteSensor::fetchData(double a[])
{
    for(int i = 0; i < dataSize(); i++)
        a[i] = messdata[i];
}

