#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M, T;
    cin >> N >> M >> T;
    vector<vector<bool>> visited(N + 1, vector<bool>(M + 1, false));
    queue<pair<pair<int, int>, int>> qu; // pair<pair<x, y>, day>
    int x, y;
    int cnt = 0;
    while (cin >> x >> y) {
        qu.push({{x, y}, 0});
        visited[x][y] = true;
        ++cnt;
    }
    pair<int, int> directions[] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    
    while (!qu.empty()) {
        int curX = qu.front().first.first;
        int curY = qu.front().first.second;
        int curDay = qu.front().second;
        qu.pop();
        
        if (curDay < T) {
            for (int i = 0; i < 4; ++i) {
                int nextX = curX + directions[i].first;
                int nextY = curY + directions[i].second;
                
                if(nextX <= 0 || nextX > N || nextY <= 0 || nextY > M || visited[nextX][nextY]) continue;
                
                qu.push({{nextX, nextY}, curDay + 1});
                visited[nextX][nextY] = true;
                ++cnt;
            }
        }
    }
    
    cout << N * M - cnt;
    return 0;
}
