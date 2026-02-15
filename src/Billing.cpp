#include <fstream>
#include "Billing.h"

double calculateEnergyCost(double totalEnergy) {
    double cost = 0;

    if (totalEnergy <= 30)
        cost = totalEnergy * 0.75;
    else if (totalEnergy <= 100)
        cost = (30 * 0.75) + ((totalEnergy - 30) * 1.20);
    else
        cost = (30 * 0.75) + (70 * 1.20) +
               ((totalEnergy - 100) * 1.80);

    return cost;
}

double calculateFinalBill(double energyCost) {
    double serviceCharge = 10.0;
    double vat = 0.15 * (energyCost + serviceCharge);
    return energyCost + serviceCharge + vat;
}

void saveBillingSummary(double totalEnergy, double finalAmount) {
    std::ofstream file("data/billing_summary.txt");
    file << "Total Energy (kWh): " << totalEnergy << "\n";
    file << "Total Amount Payable (GHS): " << finalAmount << "\n";
    file.close();
}