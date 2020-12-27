#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const long long INF = 1LL << 60;
const ll MOD = 1000000007;
using ping = pair<ll, ll>;
const ll dx[4] = {1, 0, -1, 0};
const ll dy[4] = {0, 1, 0, -1};

int P[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

int main(){
    ll N, K;
    cin >> N >> K;
    vector<vector<ll>> T(N+1, vector<ll>(N+1));
    for(int i = 1; i <= N; i++){
        for(int j=1; j <= N; ++j){
          cin >> T[i][j];
        }
    }
    ll cnt = 0;
    do {
        if(P[0]!=1){
          continue;
        }
      int out = 0;
      for (int i = 0; i < N-1; i++){
        out += T[P[i]][P[i + 1]];
      }
      out += T[P[N - 1]][P[0]];
      if(out==K){
        cnt++;
      }
    } while (next_permutation(P, P + N));
    cout << cnt << endl;
    return 0;
}