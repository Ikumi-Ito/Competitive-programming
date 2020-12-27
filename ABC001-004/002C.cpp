#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const long long INF = 1LL << 60;

int main(){
  ll xa, ya, xb, yb, xc, yc;
  cin >> xa >> ya >> xb >> yb >> xc >> yc;
  xb -= xa, xc -= xa, yb -= ya, yc -= ya;
  xa = 0, ya = 0;
  cout << fixed << setprecision(2) << fabs(xb * yc - yb * xc) / 2 << endl;
  return 0;
}