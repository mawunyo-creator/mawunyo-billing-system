#include <fstream>
#include "FileManager.h"

void saveAppliances(const std::vector<Appliance>& appliances) {
    std::ofstream file("data/appliances.txt");

    for (const auto& a : appliances) {
        file << a.name << " "
             << a.powerWatts << " "
             << a.hoursPerDay << " "
             << a.daysUsed << "\n";
    }

    file.close();
}

void loadAppliances(std::vector<Appliance>& appliances) {
    std::ifstream file("data/appliances.txt");

    if (!file) return;

    Appliance a;
    while (file >> a.name >> a.powerWatts >> a.hoursPerDay >> a.daysUsed) {
        appliances.push_back(a);
    }

    file.close();
}