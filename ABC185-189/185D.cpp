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
  ll N, M;
  cin >> N >> M;
  vector<ll> A(M), B;
  for (int i = 0; i < M; i++) {
    cin >> A[i];
  }
  if(N==M){
      cout << 0 << endl;
      return 0;
  }
  if(M==0){
    cout << 1 << endl;
    return 0;
  }
  sort(A.begin(), A.end());
  if(A[0]!=1){
    A.insert(A.begin(), 0);
  }
  if(A[A.size()-1]!=N){
    A.insert(A.end(), N + 1);
  }

  for(int i = 0; i < A.size()-1; i++){
      if(A[i+1]-A[i]-1!=0){
          B.push_back(A[i + 1] - A[i] - 1);
      }
  }

  sort(B.begin(), B.end());
  ll base = B[0];
  ll out = 0;
  for (int i = 0; i < B.size(); i++){
    out += (B[i] + base - 1) / base;
  }
  cout << out << endl;
  return 0;
}