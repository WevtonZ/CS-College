#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    double a, b, c;
    
    cin >> a; cin >> b; cin >> c;
    
    a = a*0.2;
    b = b*0.3;
    c = c*0.5;
    
    double media = (a+b+c);
    
    cout << fixed;
    cout << "MEDIA = " << setprecision (1) << media << endl;
 
    return 0;
}