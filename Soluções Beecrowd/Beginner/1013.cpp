#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a; cin >> b; cin >> c;

    int maiorAB = (a+b+abs(a-b))/2.0;
    if(maiorAB > c) cout << maiorAB << " eh o maior\n";
    else cout << c << " eh o maior\n";
}