#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() { 
    ll N;
    cin >> N;
    vector<ll> A(N);
    vector<vector<ll>> xy(N, vector<ll>(2*N));

    for (int i = 0; i < N; i++) {
      cin >> A[i];
      ll idx = 0;
      for (int j = 0; idx < A[i]; j += 2) {
        cin >> xy[i][j] >> xy[i][j + 1];
        idx++;
      }
    }

    ll max_honest = -1;
    for (int bit = 0; bit < (1 << N); bit++) {
      vector<ll> people(
          N, 1);  //全員の値を1で初期化。正直なら2に変更。不親切なら3に変更。
      ll cnt_honest = 0;
      ll check = 0;
      ll tmp_honest = 0;
      vector<bool> base(N, false);
      for (int i = 0; i < N; i++) {
        if (bit & (1 << i)) {
          base[i] = true;
          for (int j = 0; j <= A[i]; j += 2) {
            //cout << "ij"<<' '<<i << " " << j << endl;
            //cout << "people" << xy[i][j] << endl;
            if (xy[i][j+1] == 0 && people[xy[i][j] - 1] == 2) check = 1;
            if (xy[i][j+1] == 1 && people[xy[i][j] - 1] == 3) check = 1;
            if(xy[i][j+1] == 0)people[xy[i][j] - 1] = 3;
            if(xy[i][j+1] == 1)people[xy[i][j] - 1] = 2;
          }
        }
      }
      if (check == 1) break;
      for(int i=0; i < N; i++){
        //cout << people[i] << ' ' << base[i] << endl;
        if (base[i] && people[i] == 2) tmp_honest++;
        else if(base[i] && people[i]==3){
          tmp_honest = 0;
          break;
        }
        else if (!base[i] && people[i] == 2){
          tmp_honest = 0;
          break;
        }
        else if (people[i] == 2)tmp_honest++;
        else if(base[i])tmp_honest++;
      }
      //cout << endl;
      //cout << 'a'<<tmp_honest << " " << max_honest << endl;
      max_honest = max(max_honest, tmp_honest);
    }


    cout << max_honest << endl;
    return 0;
}