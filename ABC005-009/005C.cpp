#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const long long INF = 1LL << 60;
const ll MOD = 1000000007;
using pint = pair<ll, ll>;

int main(){
    ll N, T;
    cin >> T >> N;
    vector<ll> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];
    ll M;
    cin >> M;
    vector<ll> B(M);
    for (int i = 0; i < M; i++) cin >> B[i];

    if(N<M){
      cout << "no" << endl;
      return 0;
    }
    bool check = true;
    ll tmp = 0;
    for (int i = 0; i < M; i++) {
      if (tmp >= N) break;
      bool tmpcheck = false;
      for (int j = tmp; j < N; j++) {
        if (B[i] < A[j]) break;
        if (B[i] - A[j] <= T) {
          tmpcheck = true;
          tmp = j+1;
          break;
        }
      }
      if(!tmpcheck){
          check = false;
          break;
      }
    }
    if(check){
        cout << "yes" << endl;
    }
    else{
        cout << "no" << endl;
    }
    return 0;
}