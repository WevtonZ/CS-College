#include <bits/stdc++.h>
using namespace std;

int main()
{
    const double PI = 3.14159;
    double raio;

    cin >> raio;

    double area = (raio*raio) * PI;

    cout << fixed;
    cout << "A=" << setprecision(4) << area << endl;

}