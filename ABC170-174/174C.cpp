#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const long long INF = 1LL << 60;

int main() { 
    ll K;
    cin >> K;
    if(K%2 == 0){
        cout <<-1 << endl;
        return 0;
    }
    ll seven = 7;
    ll cnt = 1;
    for (ll i = 10;; i *= 10) {
      cnt++;
      if (seven % K == 0) break;
      seven += i * 7;
    }
    cout << cnt << endl;
    return 0;
}