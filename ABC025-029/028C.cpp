#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const long long INF = 1LL << 60;
const ll MOD = 1000000007;
using pint = pair<ll, ll>;

int main() {
    ll N = 5;
    vector<ll> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];
    vector<ll> out;
    for (int i = 0; i<3; i++){
      for (int j = i + 1; j<4; j++){
          for(int k = j+1; k < 5; k++){
              out.push_back(A[i]+A[j]+A[k]);
          }
      } }
    sort(out.begin(), out.end(), greater<ll>());
    cout << out[2] << endl;
    return 0;
}