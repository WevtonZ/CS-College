#include <bits/stdc++.h>
using namespace std;

int main()
{
    char name[100];
    cin >> name;
    double fixFee, volFee; // fixed fee & volatile fee.
    cin >> fixFee; cin >> volFee;

    double newValue = fixFee + (0.15*volFee);
    
    cout << fixed;
    cout << "TOTAL = R$ " << setprecision(2) << newValue << "\n";
}