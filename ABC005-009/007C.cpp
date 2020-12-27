#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const long long INF = 1LL << 60;
const int MOD = 1000000007;
using ping = pair<ll, ll>;
using Graph = vector<vector<int>>;

//四方向への移動ベクトル
const ll dx[4] = {1, 0, -1, 0};
const ll dy[4] = {0, 1, 0, -1};

int main() {
    //入力
    ll R, C;
    cin >> R >> C;
    ll sy, sx, gy, gx;
    cin >> sy >> sx >> gy >> gx;
    sy--, sx--, gy--, gx--;
    vector<string> c(R);
    for (int i = 0; i < R; i++) cin >> c[i];


    vector<vector<ll>> dist(R, vector<ll>(C, -1));  //始点からの距離を保存
    queue<ping> que;

    //初期化
    dist[sy][sx] = 0;
    que.push({sy, sx});

    while(!que.empty()){
        //今いる座標を定義する
        ll ny = que.front().first;
        ll nx = que.front().second;
        que.pop();

        //四方向を探索
        for (int dir = 0; dir < 4; dir++){
          //移動先の座標を定義する
          ll next_y = ny + dy[dir];
          ll next_x = nx + dx[dir];

          if(c[next_y][next_x] == '#') continue;  //行き先が壁ならスルー
          //移動先が未到達の場所の場合の処理
          if(dist[next_y][next_x] == -1){
            dist[next_y][next_x] = dist[ny][nx] + 1;  //距離を更新
            que.push({next_y, next_x});  //queに追加
          }
        }
    }

    //出力
    cout << dist[gy][gx] << endl;
    return 0;
}