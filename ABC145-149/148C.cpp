#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll A, B;

ll gcd(ll a, ll b){
  if (a % b == 0) return b;
  else
    return (gcd(b, a % b));
}

ll lcm(ll a, ll b) { return a * b / gcd(a, b); }

int main(){
    cin >> A >> B;
    cout << lcm(A, B) << endl;
    return 0;
}