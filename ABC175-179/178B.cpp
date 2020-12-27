#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const long long INF = 1LL << 60;

int main() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a >= 0 && c >= 0) cout << b * d << endl;
    else if(b<=0 && d<=0) cout << a*c << endl;
    else if(b<=0&& c<0) cout << a*c << endl;
    else if(b<=0 && c>=0)cout << b*c << endl;
    else if(d<=0 && a>=0) cout <<a*d << endl;
    else if(d<=0 && a<0) cout << a*c << endl;
    else cout << max(a*c, b*d) << endl;
    return 0;
}