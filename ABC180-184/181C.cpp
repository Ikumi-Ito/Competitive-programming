#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const long long INF = 1LL << 60;
const ll MOD = 1000000007;
using ping = pair<ll, ll>;
const ll dx[4] = {1, 0, -1, 0};
const ll dy[4] = {0, 1, 0, -1};

int main() {
    ll N;
    cin >> N;
    vector<vector<ll>> f(N, vector<ll>(2));
    for (int i = 0; i<N; i++){
      cin >> f[i][0] >> f[i][1];
    }
    bool check = false;
    for (int i = 0; i < N-2; i++){
      for (int j = i + 1; j < N - 1; j++) {
        for (int k = j + 1; k < N; k++) {
          if ((f[k][0] - f[j][0]) * (f[i][1] - f[j][1]) ==
              (f[i][0] - f[j][0]) * (f[k][1] - f[j][1])) {
            check = true;
          }
        }
      }
    }
    if(check){
      cout << "Yes" << endl;
    }
    else{
      cout << "No" << endl;
    }
    return 0;
}