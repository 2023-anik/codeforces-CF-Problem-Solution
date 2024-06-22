#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
// #define int long long
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

pair<int, int> findBishopPosition(const char board[][8]) {
    set<pair<int, int>> markedCells;
    for (int i = 0; i < 8; ++i)
        for (int j = 0; j < 8; ++j) {
            if (board[i][j] == '#') {
                markedCells.insert({i + 1, j + 1});
            }
        }
    for (int r = 2; r <= 7; ++r) {
        for (int c = 2; c <= 7; ++c) {
            bool isValid = true;
            for (int k = -7; k <= 7; ++k) {
                int newR = r + k;
                int newC = c + k;
                if (newR >= 1 && newR <= 8 && newC >= 1 && newC <= 8) {
                    if (markedCells.find({newR, newC}) == markedCells.end()) {
                        isValid = false;
                        break;
                    }
                }
            }
            
            if (!isValid) continue;
            for (int k = -7; k <= 7; ++k) {
                int newR = r + k;
                int newC = c - k;
                if (newR >= 1 && newR <= 8 && newC >= 1 && newC <= 8) {
                    if (markedCells.find({newR, newC}) == markedCells.end()) {
                        isValid = false;
                        break;
                    }
                }
            }
            
            if (isValid) return {r, c};
        }
    }
    
    return {-1, -1};
}

void solve(){
    char arr[8][8];
    for(int i=0; i<8; ++i)
        for(int j=0; j<8; ++j)
            cin>>arr[i][j];
    pair<int,int>p=findBishopPosition(arr);
    cout<<p.first<<' '<<p.second<<endl;
}

int32_t main(){
    fast();
    int tc=1; cin>>tc;
    while(tc--) solve();
    return 0;
}