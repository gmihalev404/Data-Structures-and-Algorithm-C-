#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int indexOf(vector<pair<int, int>> map, int key) {
    for(int i = 0; i < map.size(); ++i) {
        if(map[i].first == key) return i;
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, Q, K;
    cin >> N >> Q >> K;
    vector<pair<int, int>> map; //<key, value>
    for (int i = 1; i <= Q; ++i) {
        string cmd;
        cin >> cmd;
        if (cmd == "put") {
            int k, v;
            cin >> k >> v;
            int index = indexOf(map, k);
            if (index != -1) {
                map.erase(map.begin() + index);
            }
            map.push_back({ k, v });
            if (N < map.size()) {
                map.erase(map.begin());
            }
        }
        if (cmd == "get") {
            int k;
            cin >> k;
            int index = indexOf(map, k);
            if (index == -1) {
                cout << -1 << "\n";
            }
            else {
                int val =  map[index].second;
                cout << val << "\n";
                map.erase(map.begin() + index);
                map.push_back({ k, val });
            }
        }
        if (i % K == 0) {
            map.erase(map.begin());
        }
    }
    return 0;
}
