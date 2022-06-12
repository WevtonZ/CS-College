#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    double y;
    cin >> x; cin >> y;

    double kml = x/y;
    cout << fixed;
    cout << setprecision(3) << kml << " km/l\n";
}