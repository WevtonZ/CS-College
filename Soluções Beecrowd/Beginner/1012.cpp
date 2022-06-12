#include <bits/stdc++.h>
using namespace std;

int main()
{
    double A, B, C;
    cin >> A; cin >> B; cin >> C;

    // Triangulo Retangulo //
    double area = (A*C)/2;
    cout << fixed;
    cout << "TRIANGULO: " << setprecision(3) << area << endl;

    // Circulo //
    const double PI = 3.14159;
    area = PI*C*C;
    cout << fixed;
    cout << "CIRCULO: " << setprecision(3) << area << endl;

    // Trapezio //
    area = ((A+B)*C)/2.0;
    cout << fixed;
    cout << "TRAPEZIO: " << setprecision(3) << area << endl;

    // Quadrado //
    area = B*B;
    cout << fixed;
    cout << "QUADRADO: " << setprecision(3) << area << endl;

    // Retangulo //
    area = A*B;
    cout << fixed;
    cout << "RETANGULO: " << setprecision(3) << area << endl;
}