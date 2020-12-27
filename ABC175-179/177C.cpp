#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    //入力
    ll N;
    cin >> N;
    vector<ll> A(N);
    for (int i = 0; i < N; i++)cin >> A[i];

    //和の配列を作る
    vector<ll> tmp(N-1);
    ll cnt = 0;
    ll total = 0;
    for (int i = N - 1; i > 0; i--) {
      cnt += A[i];  //後ろから順に和をとる
      tmp[i - 1] = cnt % 1000000007;  //tmp配列に後ろから格納
    }


    //各項を計算
    for (int i = 0; i < N -1; i++) {
      total += ((A[i]%1000000007) *tmp[i])%1000000007;
    }

    //出力
    cout << total%1000000007<< endl;
    return 0;
}