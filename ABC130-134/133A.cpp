#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  int D = n*a, T = b;
  if (D > T) cout << T << endl;
  else cout << D << endl;
  return 0;
}