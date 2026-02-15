#ifndef BILLING_H
#define BILLING_H

double calculateEnergyCost(double totalEnergy);
double calculateFinalBill(double energyCost);
void saveBillingSummary(double totalEnergy, double finalAmount);

#endif