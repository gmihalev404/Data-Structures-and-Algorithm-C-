#include <cmath>
#include <cstdio>
#include <vector>
#include <deque>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, K;
    cin >> N >> K;
    vector<int> p(N);
    for (int i = 0; i < N; ++i) {
        cin >> p[i];
    }
    long long total = 0;
    deque<int> dq;
    
    for (int i = 0; i < N; ++i) {
        while(!dq.empty() && p[dq.back()] >= p[i]) {
            dq.pop_back();
        }
    
        dq.push_back(i);
        
        if(dq.front() <= i - K) {
            dq.pop_front();
        }
        
        if(i >= K - 1) {
            total += p[dq.front()];
        }
    }
    cout << total;
    return 0;
}
