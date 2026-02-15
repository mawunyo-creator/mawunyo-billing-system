
#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <vector>
#include "Appliance.h"

void saveAppliances(const std::vector<Appliance>& appliances);
void loadAppliances(std::vector<Appliance>& appliances);

#endif