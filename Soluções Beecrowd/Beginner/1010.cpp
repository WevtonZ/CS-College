#include <bits/stdc++.h>
using namespace std;

int main()
{
    int code1, code2, n1, n2;
    double value1, value2;
    cin >> code1; cin >> n1; cin >> value1;
    cin >> code2; cin >> n2; cin >> value2;


    double price = value1*n1 + value2*n2;

    cout << fixed;
    cout << "VALOR A PAGAR: R$ " << setprecision(2) << price << endl;
}