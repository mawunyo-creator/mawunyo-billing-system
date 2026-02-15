# Energy Consumption Calculation Algorithm

1. **Ask for User's Name**
   * Prompt the user for their name.
   * Save the name and greet the user.

2. **Enter Number of Appliances**
   * Input the total number of appliances ($n$).

3. **Initialize Total Energy**
   * Set **Total Energy** (initial energy) = 0.

4. **Collect Appliance Data**
   For each of the $n$ appliances, input:
   * Appliance Name
   * Power consumed (Watts)
   * Hours the device is used per day
   * Number of days the appliance is used in a month

5. **Convert Power**
   * Convert power from Watts to Kilowatts:
     $$Power(kW) = \frac{Power(Watts)}{1000}$$

6. **Calculate Energy Consumed**
   * Calculate energy consumed for the specific device:
     $$Energy\ Consumed(kWh) = Power(kW) \times Time(hrs) \times Days$$

7. **Update Total Energy**
   * Add the Energy Consumed (kWh) to the **Total Energy**.

8. **Apply Ghana Block Tariff System**
   Calculate the energy cost based on the following charges:
   * **First 30 units (0-30):** GHS 0.75 per unit
   * **Next 70 units (31-100):** GHS 1.20 per unit
   * **100 units and above:** GHS 1.80 per unit

9. **Add Service Charge**
   * Add a flat service charge of **GHS 10.00**.

10. **Calculate VAT**
    * Calculate 15% VAT on the subtotal:
      $$VAT = 0.15 \times (Total\ Energy\ Amount + Service\ Charge)$$

11. **Calculate Total Bill**
    * Final Bill = (Total Energy Amount + Service Charge) + VAT amount.

12. **Stop**
    * Display the final bill and end the process.