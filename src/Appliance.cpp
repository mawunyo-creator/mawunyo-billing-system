#include "Appliance.h"

double Appliance::calculateEnergy() const {
    double powerKW = powerWatts/1000.0
    return powerKW * hoursPerDay * daysUsed;
}