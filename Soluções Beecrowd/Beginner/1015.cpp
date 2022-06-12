#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x1, y1, x2, y2;
    cin >> x1; cin >> y1; cin >> x2; cin >> y2;

    double ans = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
    cout << fixed;
    cout << setprecision(4) << ans << endl;
}