#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nmbr, workTime;
    double wHour; // Horas trabalhadas

    cin >> nmbr; cin >> workTime;
    cin >> wHour;

    double fee = wHour*workTime;

    cout << fixed;
    cout << "NUMBER = " << nmbr << "\n" << "SALARY = U$ " << setprecision(2) << fee << endl;
}