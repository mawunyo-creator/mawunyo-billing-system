#ifndef APPLIANCE_H
#define APPLIANCE_H

#include <string>
using namespace std;

class Appliance {
public:
    string name;
    double powerWatts;
    double hoursPerDay;
    int daysUsed;

    double calculateEnergy()  const;
};

#endif