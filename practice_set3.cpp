#include <iostream>
using namespace std;

int main() {

    float rechargeAmount, gstPercentage, gstAmount, finalAmount;

    cout << "Enter recharge amount: ";
    cin >> rechargeAmount;

    cout << "Enter GST percentage: ";
    cin >> gstPercentage;

    gstAmount = (rechargeAmount * gstPercentage) / 100;

    finalAmount = rechargeAmount + gstAmount;

    cout << "Final amount = Rs. " << finalAmount << endl;

    return 0;
}