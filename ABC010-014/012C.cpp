#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const long long INF = 1LL << 60;
const int MOD = 1000000007;

int main() { 
    ll N;
    cin >> N;
    ll base = 2025 - N;

    for (int i = 1; i < 10; i++){
      ll j = base / i;
      if(i<10 && j <10 && i*j==base){
          cout << i << " x " << j << endl;
      }
    }
      return 0;
}