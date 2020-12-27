#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    //入力
    string S, T;
    cin >> S >> T;

    //Tの文字数でセットを作る
    ll cntmax = 0;
    for (int i = 0; i + T.size() <= S.size(); i++){  //Tの文字数分の1セット
      ll idx = 0;
      ll tmp = 0;
      for (int j = i; j < i + T.size(); j++) {
        if (T[idx]==S[j]){
          tmp++;
        }
        idx++;
      }
      cntmax = max(cntmax, tmp);
    }
    
    //出力
    cout << T.size() - cntmax << endl;
    return 0;
}