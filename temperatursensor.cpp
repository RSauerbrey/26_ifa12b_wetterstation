#include "temperatursensor.h"
#include <iostream>
using namespace std;

TemperaturSensor::TemperaturSensor()
{
    //Messdaten-Array mit Zufallswerten befüllen
    srand(time(NULL));
    for(int i = 0; i < dataSize(); i++)
    {
        messdata[i] = (-400 + rand()%1601)/10.0;
    }
    cout << "-- Konstruktor Temp.Sensor --"  << endl;
}

TemperaturSensor::~TemperaturSensor()
{
    cout << "-- Destruktor Temp.Sensor ---" << endl;
}


string TemperaturSensor::getSensorType()
{
    return "Temperatur";
}

int TemperaturSensor::dataSize()
{
    return 10;
}

void TemperaturSensor::fetchData(double a[])
{
    for(int i = 0; i < dataSize(); i++)
        a[i] = messdata[i];
}

